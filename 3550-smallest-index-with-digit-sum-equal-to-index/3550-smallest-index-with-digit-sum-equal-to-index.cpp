class Solution {
public:
    int sumofdigits(int a)
    {
        int b=0;
        while(a!=0)
        {
            int r=a%10;
            b=b+r;
            a=a/10;
        }
        return b;
    }
    int smallestIndex(vector<int>& nums)
    {
        int f=-1;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int s;
           if(nums[i]>9) 
            s=sumofdigits(nums[i]);
            else
            s=nums[i];
            if(s==i && ans>i)
            {
                ans=i;
                f=0;
            }

        }
        if(f==0)
        return ans;
        else
        return f;
    }
};