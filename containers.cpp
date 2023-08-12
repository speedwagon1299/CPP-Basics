//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers/

#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void explainPair()  //pair can be a datatype, lies inside  utility library
{                  
        pair<int,int> p1 = {1,3};
        //p.first and p.second

        pair<int,pair<int,int>> p2 ={1,{2,3}};
        //2 is p.second.first

        pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
        //arr[2].first
    }
    void explainVector()
    {
        vector<int> v1;
        v1.push_back(1);
        v1.emplace_back(2);
        //emplace is slightly faster than push
        //dynamically increases size of array 

        vector<pair<int,int>> v2;
        //pair in vector allowed

        v2.push_back({1,2});
        //elements must be pushed in as a pair
        v2.emplace_back(1,2);
        //assumes as a pair


        vector<int> v3(5,100); //{100,100,...100}
        vector<int> v4(5); //{garbage/0,...}
        vector<int> v5(v4); //copy of v1
        
        vector<int> v6 = {1,2,3,4,5};   //v1[2] = 3
        vector<int>::iterator it = v1.begin();
        //iterator is pointer of vector element address
        it++;
    }
