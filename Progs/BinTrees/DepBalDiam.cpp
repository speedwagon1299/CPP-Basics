#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    node* left;
    node* right;
    int val;
    node(int val): val(val), left(NULL), right(NULL) {}
};
class DepBalDiam
{
    public:
        void init(node*& head)
        {
            head = new node(1);
            head->left = new node(2);
            head->right = new node(3);
            head->left->right = new node(4);
            head->right->left = new node(5);
            head->left->right->left = new node(6);
            head->right->left->right = new node(7);
        }
        int height(node* root)
        {
            if(!root) return 0;
            return 1 + max(height(root->left),height(root->right));
        }
        int balanced(node* root)
        {
            if(!root) return 0;
            int lh = balanced(root->left);
            if(lh == -1) return -1;
            int rh = balanced(root->right);
            if(rh == -1) return -1;
            if(abs(rh-lh) > 1) return -1;
            return 1 + max(lh,rh);      //non if return statement out of base case to ensure its the last option after ifs

        }
};

int main()
{
    node* n;
    DepBalDiam obj;
    obj.init(n);
    cout << obj.height(n);
    return 0;
}