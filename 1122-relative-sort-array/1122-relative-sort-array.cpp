class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> arr3;

        sort(arr1.begin(), arr1.end());

        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr1[j] == arr2[i]){
                    arr3.push_back(arr1[j]);
                }
            }
        }
        for (int i = 0; i < arr1.size(); i++) {
            if (find(arr2.begin(), arr2.end(), arr1[i]) == arr2.end()) {
                arr3.push_back(arr1[i]);
            }
        }

        return arr3;
    }
};