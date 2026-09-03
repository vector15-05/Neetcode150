class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.contains(nums[i])){
                return true;
            }

            m[nums[i]]++;
        }

        return false;
    }
};