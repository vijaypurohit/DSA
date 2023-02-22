/*
https://leetcode.com/problems/lfu-cache/
*/

// /*
// Using Custom Double Linked List as node address   
struct CNode{  //cache node
    int key, val, counter;
    CNode *prev, *next; 
    CNode() : key(0), val(0), counter(1), prev(nullptr), next(nullptr){}
    CNode(int k, int v) : key(k), val(v), counter(1), prev(nullptr), next(nullptr){}
};

class DLL{
    CNode *head, *tail;
    int size;
public:
   DLL():size(0) {
        head = new CNode();
        tail = new CNode();
        head->next = tail;
        tail->prev = head; 
    }
    
    void addToHead(CNode* node) { // Head .. node .. HeadNext
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
        size++;
    }
    
    void removeNode(CNode* node)  {   // nodePrev .. node .. nodeNext
        node->prev->next = node->next;
        node->next->prev = node->prev; 
        size--;
    } 
    
    bool isEmpty()  {
        return (size==0);
    }
    
    CNode* getLastNode()  {
        return tail->prev;
    }
};

class LFUCache {   
    int cap; // capacity of the cache given in the question
    int minCounter; // value of least counter required to invalidate cache
    
    unordered_map<int, CNode*> cache; // {key, address of LL of given key with info value, counter}
    unordered_map<int, DLL> freqMap; //{freq, all nodes with given freq}
    //Utility Function
    void UpdateFreqMap(CNode* node)
    {
        int fq = node->counter; //old value
        freqMap[fq].removeNode(node); // remove from old freq DLL
        if(freqMap[fq].isEmpty()){
            freqMap.erase(fq);
            if(minCounter == fq) // if it was min freq
                minCounter++;
        }  
        fq = ++node->counter ; // update, new value
        if(freqMap.find(fq) == freqMap.end()) // if it is new list
            freqMap[fq] = DLL();
        freqMap[fq].addToHead(node); 
    }
public:
    
    LFUCache(int capacity):cap(capacity), minCounter(0) {  } 
    // 1. if key is not present --> return -1;
    // 2. if key is present
    //     a. remove from freqMap as usage of key will increase its counter
    //         i. if list become empty then erase it
    //         ii. check if that is minCounter Freq
    //     b. update its freq counter
    //     c. insert into freq map at the beg; //for maintaing least recently used
    // 3. return key value 
    int get(int key) { 
        if(cache.find(key) == cache.end())
            return -1;
        CNode* node = cache[key]; 
        UpdateFreqMap(node); 
        return node->val;
    }
     
    // 1. check cache capacity
    // 2. if key exist -- Similarly to get(key) -- update the freqMap
    // 3. if key doesn't exist
    //     a. if cache size is full
    //         i. remove minF node from cache and FreqMap
    //     b. insert into cache
    //     c. insert into freqMap 
    void put(int key, int value) { 
        if(cap <= 0)
            return;
        
        if(cache.find(key) != cache.end())
        {
            UpdateFreqMap(cache[key]);
            cache[key]->val = value; // update the value;
            return;
        }
        
        if(cap == cache.size())
        {
            CNode* dNode = freqMap[minCounter].getLastNode(); // key of node that is required to remove
            cache.erase(dNode->key);
            freqMap[minCounter].removeNode(dNode);
            delete dNode;
            if(freqMap[minCounter].isEmpty())
                freqMap.erase(minCounter);
        }
        minCounter = 1; //new element freq = 1
        cache[key] = new CNode(key, value);
        if(freqMap.find(minCounter) == freqMap.end())
            freqMap[minCounter] = DLL();
        freqMap[minCounter].addToHead(cache[key]); 
    }
     
};

// */
 /*    
struct CNode{  //cache node
    int key, val, counter;
    CNode *prev, *next; 
    list<CNode*>::iterator iter;
    CNode() : key(0), val(0), counter(1), prev(nullptr), next(nullptr){}
    CNode(int k, int v) : key(k), val(v), counter(1), prev(nullptr), next(nullptr){}
};
 
class LFUCache {   
    int cap; // capacity of the cache given in the question
    int minCounter; // value of least counter required to invalidate cache
    
    unordered_map<int, CNode*> cache; // {key, address of LL of given key with info value, counter}
    unordered_map<int, list<CNode*>> freqMap; //{freq, all nodes with given freq}
    //Utility Function
    void UpdateFreqMap(CNode* node)
    {
        int fq = node->counter; //old value
        freqMap[fq].erase(node->iter); // remove from old freq DLL
        if(freqMap[fq].empty()){
            freqMap.erase(fq);
            if(minCounter == fq) // if it was min freq
                minCounter++;
        }  
        fq = ++node->counter ; // update, new value
        // if(freqMap.find(fq) == freqMap.end()) // if it is new list
        //     freqMap[fq] = DLL();
        freqMap[fq].push_front(node);  
        node->iter = freqMap[fq].begin();
    }
public:
    
    LFUCache(int capacity):cap(capacity), minCounter(0) {  }  
    
    int get(int key) { 
        if(cache.find(key) == cache.end())
            return -1;
        CNode* node = cache[key]; 
        UpdateFreqMap(node); 
        return node->val;
    }
      
    void put(int key, int value) { 
        if(cap <= 0)
            return;
        
        if(cache.find(key) != cache.end())
        {
            UpdateFreqMap(cache[key]);
            cache[key]->val = value; // update the value;
            return;
        }
        
        if(cap == cache.size())
        {
            CNode* dNode = freqMap[minCounter].back(); // node that is required to remove
            cache.erase(dNode->key);
            freqMap[minCounter].pop_back();
            delete dNode;
            if(freqMap[minCounter].empty())
                freqMap.erase(minCounter);
        }
        minCounter = 1; //new element freq = 1
        cache[key] = new CNode(key, value);
        // if(freqMap.find(minCounter) == freqMap.end())
        //     freqMap[minCounter] = DLL();
        freqMap[minCounter].push_front(cache[key]); 
        cache[key]->iter = freqMap[minCounter].begin();
    }
     
};
*/

/*
// Using STL List as list of keys
struct CNode{ 
    //cache node
    int key, val, counter;
    CNode *prev, *next;
    list<int>::iterator iter;  
    CNode() : key(0), val(0), counter(1), prev(nullptr), next(nullptr){}
    CNode(int k, int v) : key(k), val(v), counter(1), prev(nullptr), next(nullptr){}
};
class LFUCache {   
    int capacity; // capacity of the cache given in the question
    int minCounter; // value of least counter required to invalidate cache
    
    unordered_map<int, CNode*> cache; // {key, address of LL of given key with info value, counter}
    unordered_map<int, list<int>> freqMap; //{freq. list of all keys with given freq}
    //Utility Funct
    void UpdateFreqMap(CNode* node)
    {
        int fq = node->counter; //old value
        freqMap[fq].erase(node->iter);
        if(freqMap[fq].empty()){
            freqMap.erase(fq);
            if(minCounter == fq)
                minCounter++;
        } 
        ++node->counter ; // update, new value
        fq = node->counter;
        freqMap[fq].push_front(node->key);
        node->iter = freqMap[fq].begin();
    }
public:
    
    LFUCache(int capacity):capacity(capacity), minCounter(0) {  }  
    
    int get(int key) { 
        if(cache.find(key) == cache.end())
            return -1;
        CNode* node = cache[key]; 
        UpdateFreqMap(node); 
        return node->val;
    }
      
    void put(int key, int value) { 
        if(capacity <= 0)
            return;
        
        if(cache.find(key) != cache.end())
        {
            UpdateFreqMap(cache[key]);
            cache[key]->val = value; // update the value;
            return;
        }
        
        if(capacity == cache.size())
        {
            int k = freqMap[minCounter].back(); // key of node that is required to remove
            cache.erase(k);
            freqMap[minCounter].pop_back();
            if(freqMap[minCounter].empty())
                freqMap.erase(minCounter);
        }
        minCounter = 1; //new element freq = 1
        cache[key] = new CNode(key, value);
        freqMap[minCounter].push_front(key);
        cache[key]->iter = freqMap[minCounter].begin();
    }
     
};
*/

/* //Using Official Solution
class LFUCache {
    unordered_map<int, list<pair<int,int>> > freqMap; // key:freq || value: list of node(ke,value) having same freq
    unordered_map<int, pair<int, list<pair<int,int>>::iterator> > cache; // key:orig key || value: pair of freq, iterator to freq hashmap list
    int capacity;
    int minf;
    
    void insert(int key, int fq, int value)
    {
        freqMap[fq].push_back({key, value});
        cache[key] = {fq, --freqMap[fq].end()};
    }
    
public:
    
    LFUCache(int capacity):capacity(capacity), minf(0) {  }
    
    int get(int key) {
        const auto it = cache.find(key);
        if(it == cache.end())
            return -1;
        const int fq = it->second.first;
        const auto iter = it->second.second;
        const pair<int,int> kv = *iter;
        freqMap[fq].erase(iter);
        if(freqMap[fq].empty()){
            freqMap.erase(fq);
            if(minf == fq)
                ++minf;
        }
        insert(key, fq+1, kv.second);
        return kv.second;
    }
    
    void put(int key, int value) {
        if(capacity<=0)
            return;
        const auto iter = cache.find(key);
        if(iter!=cache.end()){
            iter->second.second->second = value;
            get(key);
            return;
        }
        
        if(capacity == cache.size())
        {
            cache.erase(freqMap[minf].front().first);
            freqMap[minf].pop_front();
            if(freqMap[minf].empty())
                freqMap.erase(minf);
        }
        
        minf=1;
        insert(key, 1, value);
    }
};
*/


/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */