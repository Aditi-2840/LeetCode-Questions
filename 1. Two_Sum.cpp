class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n=nums.size();
        bool flag=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        return v;
    }
};
