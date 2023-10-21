#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int preindex = 0;
    unordered_map<int, int> mp; //postorder index map
    
    TreeNode* construct(vector<int>& preorder, vector<int>& postorder, int l, int h) {
        if (l > h) return nullptr;
        
        TreeNode* node = new TreeNode(preorder[preindex]);
        preindex++;

        if (l == h) return node;

        int postindex = mp[preorder[preindex]];
        node->left = construct(preorder, postorder, l, postindex);
        node->right = construct(preorder, postorder, postindex + 1, h - 1);
        
        return node;
    }
    
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n = postorder.size();
        for(int i=0; i<n; i++)
        {
            mp[postorder[i]] = i;
        }
        return construct(preorder, postorder, 0, n - 1);
    }

    void print(queue<TreeNode*> q)
    {
        cout<<endl;
        while(q.empty()!=1)
        {
            TreeNode* t = q.front();
            cout<<t->val<<" ";
            q.pop();
        }
    }

    vector<int> final;
    void bfs(TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()!=1)
        {
            int size = q.size();
            print(q);
            while(size--)
            {    
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return;
    }
};

int main()
{
    Solution s;
    vector<int> a, b;

    a.push_back(1);
    a.push_back(2);
    a.push_back(4);
    a.push_back(5);
    a.push_back(3);
    a.push_back(6);
    a.push_back(7);

    b.push_back(4);
    b.push_back(5);
    b.push_back(2);
    b.push_back(6);
    b.push_back(7);
    b.push_back(3);
    b.push_back(1);

    TreeNode* root = s.constructFromPrePost(a, b);
    s.bfs(root);
    return 0;
}