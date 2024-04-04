class Solution 
{
public:
    bool canSortArray(vector<int>& nums) 
    {
        vector<int> bin(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
            bin[i] = setBin(nums[i]);
        }
        for(int i = 0; i < nums.size()-1; i++)
        {
            for(int j = 0; j < nums.size()-1-i; j++)
            {
                if(nums[j] > nums[j+1])
                {
                    if(bin[j] == bin[j+1])  
                        swap(nums[j],nums[j+1]);
                    else return false;

                }
            }
        }
        return true;
    }
    int setBin(int num)
    {
        int ans = 0;
        while(num > 0)
        {
            ans+= num%2;
            num/= 2;
        }
        return ans;
    }
};