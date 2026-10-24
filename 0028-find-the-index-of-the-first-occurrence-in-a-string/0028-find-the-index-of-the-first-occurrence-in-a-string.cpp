class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= needle.size();
        int h = haystack.size();
        for(int i=0;i<= h -n;i++){
            bool match = true;
            for(int j=0;j<n;j++){
                if(haystack[i+j]!=needle[j]){
                    match = false;
                    break;
                }
            }
        
        if(match){
            return i;
        }
        }
    
        
    
    return -1;
    }
};