class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int s = nums1.size();

        int n = nums2.size();

        vector<int> ans;
        
            for(int i=0;i<s;i++){
                for(int j=0;j<n;j++){
                    if(nums1[i]==nums2[j]){
                        bool a = false;
                        for(int k = 0;k<ans.size();k++){
                            if(ans[k]==nums1[i]){
                                a = true;
                                break;
                            }
                        }
                        if(!a){
                            ans.push_back(nums1[i]);
                        }
                        break;
                    }
                }
            }
            return ans;
        
        /*else{
            for(int i=0;i<n;i++){
                for(int j=0;j<s;j++){
                    if(nums1[i]==nums2[j]){
                        ans.push_back(nums1[i])
                    }*/
             
          


        
    }
};