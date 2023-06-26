#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int height(BinaryTreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

pair<int, bool> isBalancedHelper(BinaryTreeNode<int> *root){
    if(root == NULL){
        pair<int, bool> p;
        p.first = 0;
        p.second = true;
        return p;
    }
    pair<int, bool> leftAns = isBalancedHelper(root->left);
    pair<int, bool> rightAns = isBalancedHelper(root->right);

    pair<int, bool> ans;
    ans.first = 1+max(leftAns.first, rightAns.first);
    ans.second = (leftAns.second && rightAns.second && abs(leftAns.first - rightAns.first) <= 1);
    return ans;
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    
    return isBalancedHelper(root).second;
}