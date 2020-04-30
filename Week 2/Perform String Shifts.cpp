class Solution {
public:
   string stringRotate(string s, int n){
        int size =  s.size();
        string res="";
        if(n==0) return s;
        else if(n < 0){
            for(int i=size+n; i<size; i++){
                res += s[i];
            }
            for(int i=0; i<size+n; i++){
                res += s[i];
            }
        }
        else if (n>0){
            for(int i=n; i<size; i++){
                res += s[i];
            }
            for(int i=0; i<n; i++){
                res += s[i];
            }
        }
        return res;
    }

    
    string stringShift(string s, vector<vector<int>>& shift) {
        
        int shif=0, shif1;
        bool neg;
        for(int i=0; i<shift.size(); i++){
           if(shift[i][0] == 0){
               shif += shift[i][1];
           }
            else shif -= shift[i][1];
        }
        //cout<<shif <<" "<<s.size()<<" ";
        neg = (shif<0)? true : false;
        
        shif = abs(shif);
        shif1 = (shif >= s.size())? shif%s.size() : shif;
       // cout<<shif1<<" ";
        shif1 = (neg == true)? -shif1 : shif1; 
        
      //  cout<<shif1;
        s = stringRotate(s,shif1);
        return s;
    }
};
