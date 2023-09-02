#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
    int furthestDistanceFromOrigin(string moves) {
        int dist = 0;
        int count = 0;
        for(auto i : moves)
        {
            if(i == 'L')
            dist++;
            else if(i == 'R')
            dist--;
            else
            count++;
        }
        dist = abs(dist) + count;
        return dist;
    }
int main()
{
    cout << furthestDistanceFromOrigin("______") << endl;
    return 0;
}