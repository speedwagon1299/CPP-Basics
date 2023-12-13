#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    node* right;
    node* left;
    int val;
    node(int val): val(val), left(NULL), right(NULL) {}
};
struct tree
{
    node* head;
    tree(): head(NULL) {}
};
class Iterative
{
    public:
        void init(tree*& t)
        {
            t = new tree();
            node*& head = t->head;
            head = new node(1);
            head->left = new node(2);
            head->right = new node(3);
            head->left->right = new node(4);
            head->right->left = new node(5);
            head->left->right->left = new node(6);
            head->right->left->right = new node(7);
        }
        void preorder(tree* t)
        {
            if(!t->head) return;
            stack<node*> s;
            s.push(t->head);
            while(!s.empty())
            {
                node* temp = s.top();
                s.pop();
                cout << temp->val;
                if(temp->right) s.push(temp->right);
                if(temp->left)  s.push(temp->left);
            } 
        }
        vector<int> inorder(tree* t)
        {
            vector<int> ans;
            if(!t->head) return ans;
            stack<node*> s;
            s.push(t->head);
            node* root = t->head;
            while(!s.empty())
            {
                if(root)
                {
                    s.push(root);
                    root = root->left;
                }
                else
                {
                    root = s.top();
                    s.pop();
                    ans.push_back(root->val);
                    root = root->right;         
                }
            }
            return ans;
        }
        vector<int> postorder(tree* t)
        {
            node* root = t->head;
            vector<int> ans;
            if(!root) return ans;
            stack<node*> s;
            s.push(root);
            while(!s.empty())
            {
                if(root)
                {
                    s.push(root);
                    root = root->left;
                }
                else
                {
                    node* temp = s.top()->right;
                    if(!temp)
                    {
                        temp = s.top();
                        s.pop();
                        ans.push_back(temp->val);
                        while(!s.empty() && temp == s.top()->right)
                        {
                            temp = s.top();
                            s.pop();
                            ans.push_back(temp->val);
                        }
                    }
                    else root = temp;
                }
            } 
            return ans;
        }
};

int main()
{
    Iterative obj;
    tree* t;
    obj.init(t);
    obj.preorder(t);
    vector<int> ans = obj.postorder(t);
    cout << endl;
    for(auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}