#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;  
bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
{
    if(fx == sx && fy == sy)
    {
        if(t == 1)
        return false;
        return true;
    }
    int max = abs(fx - sx);
    if(abs(fy-sy) > max) max = abs(fy-sy);
    if(t >= max) return true;
    return false;
}
