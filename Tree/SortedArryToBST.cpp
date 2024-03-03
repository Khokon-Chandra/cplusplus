#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution
{
public:

    TreeNode *buildTree(vector<int> &nums, int start, int end)
    {
        if(start > end) return NULL;

        int mid = (start+end)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = buildTree(nums, start, mid-1);
        root->right = buildTree(nums, mid+1, end);
        return root;
    }


    TreeNode *sortedArrayToBST(vector<int> &nums)
    {

        return buildTree(nums, 0, nums.size()-1);
    }

    void display(TreeNode *root)
    {
        if (root == NULL)
            return;
        cout << root->val << " ";
        display(root->left);
        display(root->right);
    }
};

int main()
{
    vector<int> array = {10, 20, 30, 40, 50};
    Solution solution;
    TreeNode *root = solution.sortedArrayToBST(array);
    solution.display(root);
    cout <<endl;
    return 0;
}
