#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t, narr, n, temp;
    cin >> t;
    int sol[t] = {0};
    for(int i = 0; i < t; i++)
    {
        int sorted[narr][2];
        cin >> narr;
        vector<vector<int>> arr(narr);
        for(int j = 0; j < narr; j++)
        {
            cin >> n;
            for(int k = 0; k < n; k++)
            {
                cin >> temp;
                arr[j].push_back(temp);
            }
        }
        
        for(int j = 0; j < narr; j++)
        {
            cin >> n;
            for(int k = 0; k < n; k++)
            {
                cin >> temp;
                arr[j].push_back(temp);
            }
        }
        
        for(int j = 0; j < narr; j++)
        sort(arr[j].begin(),arr[j].end());
        for(int j = 0; j < narr; j++)
        {
            sorted[j][0] = arr[j][0];
            sorted[j][1] = arr[j][1];
        }
        int min = INT_MIN; int minrow = -1;
        for(int j = 0; j < narr; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                if(min > arr[j][k])
                {
                    min = arr[j][k];
                    minrow = j;
                }
            }
        }
        

        //find the min of all
        // int min = INT_MAX, minind = -1;
        // for(int j = 0; j < narr; j++)
        // {
        //     for(int k = 0; k < arr[j].size(); k++)
        //     {
        //         if(min > arr[j][k])
        //         {
        //             min = arr[j][k];
        //             minind = j;
        //         }
        //     }   
        // }

        // //Min element located in row j
        // int mintemp = -1; int minrow = -1;
        // for(int j = 0; j < narr; j++)
        // {
        //     if(minind != j)
        //     {
        //         min = INT_MAX;
        //         mintemp = -1;
        //         for(int k = 0; k < arr[j].size(); k++)
        //         {
        //             if(min > arr[j][k])
        //             {
        //                 min = arr[j][k];
        //                 mintemp = k;
        //             }
        //         }
        //         arr[j][mintemp] = INT_MAX;
        //     }
        // }

        // temp = arr[minind][]
        // for(int j = 0; j < narr; j++)
        // {
            
        //     for(int k = 0; k < arr[j].size(); k++)
        //     {
                
        //     }   
            
        // }

        // for(int j = 0; j < narr; j++)
        // {
        //     min = INT_MAX;
        //     for(int k = 0; k < arr[j].size(); k++)
        //     {
        //         if(min > arr[j][k])
        //         min = arr[j][k];
        //     }   
        //     sol[i] += min;
        // }

    }  
    
    //op
    for(int i = 0; i < t; i++)
    cout << sol[i] << endl;
}