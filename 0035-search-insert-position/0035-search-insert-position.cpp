class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(),nums.end(),target);
        if(it!=nums.end() && *it==target)
        {
            int index=it-nums.begin();
            return index;
        }
        else
        {
            int nearest;
            if(it==nums.begin())
            {
                nearest=0;
                return nearest;
            }
            else if(it==nums.end())
            {
                nearest=nums.size();
                return nearest;
            }
            else
            {
                nearest=(it-nums.begin());
                return nearest;
            }
        }
    }
};