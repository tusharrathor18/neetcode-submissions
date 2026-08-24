class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        
        int i = 0;
        int j = s1.size()-1;
        map<char,int>mp1;
        for(int x = i; x<=j ; x++){
            mp1[s1[x]]++;
        }

        bool found = false;
        while(j<s2.size()){
            map<char,int>mp2;

            for(int x = i; x<=j ; x++){
                mp2[s2[x]]++;
            }
            i++;
            j++;

            if(mp1 == mp2) found = true;
        }

        if (found) return true;
        else return false;



    }
};
