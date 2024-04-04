class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) 
    {
        if(y > x)   return y-x;
        int ops1 = x-y;
        int ops2 = 2, ops3 = ops1;
        int temp = x;
        while(temp%55 == 0)
        {
            temp/= 55;
            ops2 = min(ops2,abs(temp-y));
        }
    }
};