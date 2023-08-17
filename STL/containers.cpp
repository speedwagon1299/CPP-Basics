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


    vector<int> v3(5,100); //{100,100,...100} last parameter is ELEMENT
    vector<int> v4(5); //{garbage/0,...}
    vector<int> v5(v4); //copy of v1
        
    vector<int> v6 = {1,2,3,4,5};   //v1[2] = 3
    vector<int>::iterator it1 = v1.begin();
    //iterator is pointer of vector element address


    vector<int>::iterator it2 = v6.end();    //points to space RIGHT after LAST => use --it
    cout << *(--it2) << " " << *(--v6.rend()) << endl; //rend and rbegin reversed vector
    //v6.back() ==> element at the last pos

    // for(auto it3 = v6.begin(); it3 != v6.end(); it3++)
    // {
    //     cout << *(it3) << endl;
    // }
    // for(auto i : v6)    //for each 
    // {
    //     cout << i << endl;
    // }


    //v6 = {1,2,3,4,5}
    v6.erase(v6.begin()+1, v6.end()-1); //remove (indices) 1,2,3 (elements) 2,3,4
    v6 = {1,2,3,4,5};
    vector<int> v7(10,20);
    v7.insert(v7.begin()+2,21);     //insert 21 at 2nd index
    v7.insert(v7.begin()+1,2,22);   //insert 2 22s at 1st index

    //to insert one vector into another
    v7.insert(v7.begin()+2,v6.begin(),v6.end());
    for(int i : v7)
    {
        cout << i << " ";
    }
    //v7.size(=> size of vector)
    //v7.pop_back() removes the last element, doesnt give a return value

    //v1.swap(v2) to swap two vectors, v1.clear() to make the vector empty, v1.empty() True or False
}
void explainList()
{
    list<int> ls = {1,2,3,4,5};
    ls.push_back(6);    //or emplace
    ls.push_front(0);   //or emplace
    cout << endl;   //doubly linked list to reduced time complexity when compared to insert in vector
    for(int i : ls)
    cout << i;
    //rest similar to vectors
}   
void explainDeque()
{
    deque<int> dq = {1,2,3,4,5};
    dq.pop_back();
    dq.pop_front();
    cout << dq.back(); //stores value of last element
    cout << endl;
    for(int i : dq)
    cout << i;
}
void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "\n" << st.top() << endl;
    st.pop();
    //also st.size() and st.empty()
}
void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    // q.front() is the first element and q.back() is the last element
    q.pop();    // pop the first element because FIFO
}
void explainPQueue() //priority queue
{
    //maximum heap
    priority_queue<int>pq;
    pq.push(10);
    pq.push(5);
    pq.push(6); //{10,6,5} ie descending order
    //pq.top() = 10 & pq.pop() removes 10

    //minimum heap
    priority_queue<int, vector<int>, greater<int>>pq2;
    pq.push(10);
    pq.push(5);
    pq.push(6); //{5,6,10} ie ascending order
    //pq.top() = 5 & pq.pop() removes 5
}
void explainSet()
{
    set<int> s; //sorted and unique storage of elements
    s.insert(1);
    s.emplace(2);
    s.emplace(2);   //no change
    s.emplace(4);
    s.insert(3);    //{1,2,3,4}
    auto it = s.find(3);    //it points to address of 3
    //if find(<unlisted ele>) => s.end() [address]
    s.erase(it); //erases 3 in constant time
    s.erase(2); //erases 2 in logarithmic time
    //erase can also be done for a range
    //s.count(<ele>) returns 1 if ele is present and 0 if not
    //lower_bound IN GENERAL first occurence and upper_bound the last
}
void explainMultiset()
{
    multiset<int> ms;   //set but not unique
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); //{1,1,1,1}
    //ms.erase(1) erases all occurances of 1
    ms.erase(ms.find(1));  //{_,1,1,1} => {1,1,1}
}
void explainUset()
{
    unordered_set<int> us;
    //randomised order, no lower/upper bound function
    //usual time complexity O(1), very rare cases O(N)
}
void explainMap()
{
    map<int, int> mp1;  //first parameter is key, second is value, stored in sorted key order
    map<int,pair<int,int>>mp2;
    map<pair<int,int>,int>mp3;
    mp1[1] = 2;
    mp1.emplace(3,1);
    mp1.insert({2,4});
    cout << endl;
    for(auto i : mp1)
    cout << i.first << " " << i.second << endl;
    //mp1[<out_of_bounds>] = 0 (returns)
}
int main()
{
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQueue();
    explainSet();
    explainMultiset();
    explainUset();
    explainMap();   //works in log of time
    //Multi and Unordered Map like gyaan for set (unordered => (mostly) O(1))
     return 0;
}
