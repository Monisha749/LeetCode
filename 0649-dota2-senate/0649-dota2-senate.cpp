class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        int r=0;
        int d=0;
        queue<char>q;
        for(int i=0;i<n;i++){
            q.push(senate[i]);
            if(senate[i]=='R')
            r++;
            else
            d++;
        }
        int kr=0;
        int kd=0;
        while(r>0 && d>0){
            if(q.front() == 'R'){
                if(kr>0){
                    q.pop();
                    r--;
                    kr--;
                    continue;
                }
                
                kd++;
                q.pop();
                q.push('R');
            }
            else{
                if(kd>0){
                    q.pop();
                    d--;
                    kd--;
                    continue;
                }
                
                kr++;
                q.pop();
                q.push('D');
            }
        }
        if(r>0)
        return "Radiant";
        return "Dire";
    }
};