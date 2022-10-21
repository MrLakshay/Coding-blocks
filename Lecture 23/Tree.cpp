#include <iostream>
#include <math.h>
using namespace std;
class Pair
{
public:
    int h;
    int d;
};
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
    TreeNode *root = new TreeNode(d);
    root->left = createTree();
    root->right = createTree();
    return root;
}
Pair FastDia(TreeNode *root)
{
    Pair ans;
    if (!root)
    {
        ans.h = 0;
        ans.d = 0;
        return ans;
    }
    Pair left = FastDia(root->left);
    Pair right = FastDia(root->right);
    int op1, op2, op3;
    op1 = left.h + right.h;
    op2 = left.d;
    op3 = right.d;
    ans.h = max(left.h, right.h) + 1;
    ans.d = max(op1, max(op2, op3));
    return ans;
}
void InOrder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}
void PreOrder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}
TreeNode *search(TreeNode *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    TreeNode *l = search(root->left, key);
    if (l != NULL)
    {
        return l;
    }
    return search(root->right, key);
}
int TreeHeight(TreeNode *root)
{
    if (!root)
        return 0;
    return max(TreeHeight(root->left), TreeHeight(root->right)) + 1;
}
int countNodes(TreeNode *root)
{
    // Base Case
    if (root == NULL)
    {
        return 0;
    }
    // Recursive Case
    return 1 + countNodes(root->left) + countNodes(root->right);
}
int Diameter(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int op1 = TreeHeight(root->left) + TreeHeight(root->right);
    int op2 = Diameter(root->left);
    int op3 = Diameter(root->right);
    return max(op1, max(op2, op3));
}
/* sd 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 */

int main()
{

    TreeNode *root = createTree();
    // PreOrder(root);
    // cout << endl;
    // InOrder(root);
    // cout << endl;
    // PostOrder(root);
    // cout << endl;
    cout << "Total Node : " << countNodes(root) << endl;
    cout << "Total Height : " << TreeHeight(root) << endl;
    cout << "Diameter of tree is : " << Diameter(root) << endl;
    Pair x = FastDia(root);
    cout << "Fast Total Height : " << x.h << endl;
    cout << "Fast Diameter of tree is : " << x.d << endl;
    TreeNode *srh = search(root, 13);
    if(srh==NULL){
        cout<<"Node not present"<<endl;
    }
    else {
        cout<<"Node present"<<endl;
    }
    return 0;
}