/*
https://leetcode.com/problems/dota2-senate/
*/

class Solution {
public:
    string predictPartyVictory(string senate) {  
        // return greedy(senate);
        return binarySearch(senate);
        
    }//
    
    string binarySearch(const string& senate){
        int n = senate.size();
        
        vector<bool> banned(n, false); 
        vector<int> Ridx, Didx;
        for (int id = 0; id < n; id++) { //pre-processing
              if (senate[id] == 'R') Ridx.push_back(id);
              else Didx.push_back(id);
        }
        
            // Ban the senator of "indices" array next to "startAt"
        auto ban = [&](vector<int> &indices, int start_at) { 
              auto banid = lower_bound(indices.begin(), indices.end(), start_at); // Find the index of "index of senator to ban" using Binary Search
 
              if (banid == indices.end()) { // If start_at is more than the last index, then start from the beginning. Ban the first senator
                    banned[indices[0]] = true;
                    indices.erase(indices.begin());
              } else { // Else, Ban the senator at the index
                banned[*banid] = true;
                indices.erase(banid);
              }
        };
        
        int turn = 0; // Turn of Senator at this Index
        while (!Ridx.empty() && !Didx.empty()) { // While both parties have at least one senator
          if (!banned[turn]) {
            if (senate[turn] == 'R') ban(Didx, turn); // R hai D ko ban kare
            else ban(Ridx, turn);
          }
          turn = (turn + 1) % n;
        }//w

        
        return Didx.empty() ? "Radiant" : "Dire"; // Return the party with at least one senator 
    }
    
    string greedy(string senate){
        int Rcnt = count(senate.begin(), senate.end(), 'R');
        int Dcnt = senate.size() - Rcnt;
        auto banFun = [&](const char& toBan, const int& startAt){
            bool loopAround = false;
            int ptr = startAt;
            while(true){
                if(ptr == 0) loopAround = true;
                if(senate[ptr] == toBan){
                    senate.erase(senate.begin()+ptr);
                    break;
                }
                ptr = (ptr+1)%senate.size();
            }
            return loopAround;
        };//
        
        int turnid = 0; 
        while(Rcnt>0 and Dcnt>0){ // Ban the next opponent, starting at one index ahead
            
            if(senate[turnid] == 'R'){ // R turn 
                bool bannedIdIsBefore = banFun('D', (turnid+1)%senate.size()); // Taking MOD to loop around. 
                if(bannedIdIsBefore) turnid--;
                Dcnt--;
            }else{ // D turn
                bool bannedIdIsBefore = banFun('R', (turnid+1)%senate.size()); // Taking MOD to loop around. 
                if(bannedIdIsBefore) turnid--;
                Rcnt--;
            }
            
            turnid = (turnid+1)%senate.size();
        }
        
        return Dcnt == 0 ? "Radiant" : "Dire";
    }
};