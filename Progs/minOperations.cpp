class Solution 
{
public:
        int minOperations(vector<int>& nums, int k) 
        {
            int temp = 0;
            for(int i: nums)
            {
                temp^= i;
            }
            temp ^= k;
            int sum = 0;
            while(temp != 0)
            {
                sum += temp%2;
                temp /= 2;
            }
            return sum;
        }
};