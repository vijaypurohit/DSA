/*
https://leetcode.com/problems/lru-cache/
*/
struct CNode{ 
    int key, val;
    CNode *prev, *next;
    CNode() : key(0), val(0), prev(nullptr), next(nullptr){}
    CNode(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr){}
};

class LRUCache {
public:
    unordered_map<int, CNode*> cache; //key: orig key || value: address of cnode contains info 
    CNode* head, *tail;// dummy node to handle edges cases
    int cap, size=0;
    
    LRUCache(int capacity): cap(capacity){ 
        head = new CNode();
        tail = new CNode();
        head->next = tail;
        tail->prev = head;
    }
    /*
    1. if key is not present --> return -1
    2. if present --> update used counter by moving it to front of list
    3. return value
    */
    int get(int key) {
        if(cache.find(key) == cache.end()) 
            return -1;
        CNode* node = cache[key];
        moveToFront(node);
        return node->val;
    }
    /*
    1. if key is present --> update it,and rest is (like get funct)
    2. if not present --> 
        a. if capacity is full --> remove least recently used (in the end)
        b. else increase size
    3. add new key --> in LL and cache mapping
    */
    void put(int key, int value) {
        if(cache.find(key) != cache.end())
        {
            CNode* node = cache[key];
            node->val = value;
            moveToFront(node);
            return;
        }
        
        if(size == cap)
        {
            CNode* deleteNode = tail->prev;
            removeNode(deleteNode); // change pointers
            cache.erase(deleteNode->key);
            delete deleteNode;
        }
        else
            size++;
        
        CNode* newnode = new CNode(key, value);
        cache[key] = newnode;
        addToHead(newnode);
        // cout<<newnode->key<<" "<<newnode->val<<endl;
    }//
    
    // UTILITY Functions
    void addToHead(CNode* node)
    { // Head .. node .. HeadNext
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
    }
    
    void removeNode(CNode* node)
    {   // nodePrev .. node .. nodeNext
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
     
    void moveToFront(CNode* node)
    {
        removeNode(node);
        addToHead(node);
    }
};


/*

class LRUCache {
public:
    
    list<pair<int,int>> cache;
    unordered_map<int, list<pair<int,int>>::iterator> cacheMap;
    int capacity_;
    
    LRUCache(int capacity) : capacity_(capacity){
        // capacity_ = capacity;        
    }
    
    // void moveToFront(list<pair<int,int>>::iterator it)
    // {
    //     cache.push_front({it->first, it->second});
    //     cache.erase(it);
    // }//
    
    int get(int key) 
    {
        if(cacheMap.find(key) == cacheMap.end())
            return -1;
        
        cache.splice(cache.begin(), cache, cacheMap[key]); // transfer to front
        return cacheMap[key]->second; // return its value
        
        // moveToFront(cacheMap[key]); // move to front
        // cacheMap[key] = cache.begin(); // update its address
        // return cacheMap[key]->second; // return its value

       
    }//
    
    void put(int key, int value)
    {
        
        if(cacheMap.find(key) != cacheMap.end())
        {
            cache.splice(cache.begin(), cache, cacheMap[key]);
            cacheMap[key]->second = value;
            return;
        }
        if(cache.size() ==  capacity_)
        {
            cacheMap.erase(cache.back().first);
            cache.pop_back();
        }
        cache.push_front({key, value});
        cacheMap[key] = cache.begin();
//         if(cacheMap.count(key)) // key doesn't exist
//         {
//             if(cache.size()<capacity_)
//             {
//                 cache.push_front({key,value});
                
//                 cacheMap[key] = cache.begin();
//             }
//             else
//             {
//                 cacheMap.erase(cache.back().first);
//                 cache.pop_back();
                
//                 cache.push_front({key, value});
//                 cacheMap[key] = cache.begin();
//             }
//         }
//         else //key exist and move to front
//         {
//             cache.begin()->second = value;
//         }
    }//
};

*/


/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */