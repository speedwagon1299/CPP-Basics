#include <bits/stdc++.h>
using namespace std;
class Big3
{
    public: 
        vector<int> getThirdOrderElements(int n, vector<int>& a) 
        {
            vector<int>::iterator ptr;
            int max = a[0], min = a[0], max2 = INT_MIN, max3 = INT_MIN, min3 = INT_MAX, min2 = INT_MAX;
            for(ptr = a.begin(); ptr != a.end(); ptr++)
            {
                if(*ptr > max)
                {
                    max3 = max2;
                    max2 = max;
                    max = *ptr;
                }
                if(*ptr < max && *ptr > max2)
                {
                    max3 = max2;
                    max2 = *ptr;
                }
                if(*ptr < max2 && *ptr > max3)
                {
                    max3 = *ptr;
                }
                if(*ptr < min)
                {
                    min2 = min;
                    min = *ptr;
                }
                if(*ptr > min && *ptr < min2)
                {
                    min2 = *ptr;
                }
            }
            return {max3,min2};
        }
};
int main()
{
    vector<int> v = {5,4,1,2,8,6,7,9};
    Big3 obj;
    v = obj.getThirdOrderElements(v.size(), v);
    for(auto i: v)
        cout << i << " ";
}