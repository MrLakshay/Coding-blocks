#include <iostream>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int d)
    {
        data = d;
        right = NULL;
        left = NULL;
    }
};
TreeNode *createTree()
{
    // Base Case
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    // Recursive Case
    TreeNode *root = new TreeNode(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}
void InOrder(TreeNode* root){
    if(root==NULL){
        return ;
    }
    InOrder(root->left);
    cout<<root->data<<endl;
    InOrder(root->right);

}
void PreOrder(TreeNode* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<endl;
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(TreeNode* root){
    if(root==NULL){
        return ;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<endl;

}
int main()
{
    
    createTree();
    return 0;
}