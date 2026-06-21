#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
int main() {

    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(4);
    root->right = new TreeNode(6);

    if(root->left->val + root->right->val == root->val){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
