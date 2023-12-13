#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int val;
    struct Node* left;
    struct Node* right;
    Node(int val): val(val), left(NULL), right(NULL) {};
}node;
class BFS_DFS
{
    public:
        void init(node*& head)
        {
            head = new Node(1);
            head->left = new Node(2);
            head->right = new Node(3);
            head->left->right = new Node(4);
            head->right->left = new Node(5);
        }
        void preorder(node* root)
        {
            if(!root) return;
            cout << root->val;
            preorder(root->left);
            preorder(root->right);
        }
        void inorder(node* root)
        {
            if(!root) return;
            preorder(root->left);
            cout << root->val;
            preorder(root->right);
        }
        void postorder(node* root)
        {
            if(!root) return;
            preorder(root->left);
            preorder(root->right);
            cout << root->val;
        }
        vector<vector<int>> DFS(node* root)
        {
            vector<vector<int>> ans;
            if(root == NULL) return ans;
            queue<node*> q;
            q.push(root);
            while(!q.empty())
            {
                int size = q.size();
                vector<int> level;
                for(int i = 0; i < size; i++)
                {
                    node* temp = q.front();
                    q.pop();
                    if(temp->left)  q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                    level.emplace_back(temp->val);
                }
                ans.emplace_back(level);
            }
            return ans;
        }
};
int main()
{
    BFS_DFS obj;
    node* n;
    obj.init(n);
    obj.preorder(n);
    cout << endl;
    obj.inorder(n);
    cout << endl;
    obj.postorder(n);
    cout << endl;
    vector<vector<int>> v = obj.DFS(n);
    for(auto i : v)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}