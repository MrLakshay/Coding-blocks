#include <iostream>
#include <math.h>
#include <queue>
#include <climits>
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
    TreeNode *root = new TreeNode(d);
    root->left = createTree();
    root->right = createTree();
    return root;
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

class Pair
{
public:
    bool isBal;
    int ht;
};
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
// s8 3 10 1 6 14 7 13 -1
void levelOrder(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}
int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
int k = 0, k1, k2;
bool isBst(TreeNode* root,int minn,int maxx){
    if(root==NULL){
        return true;
    }
    if(root->data>=minn and root->data<=maxx){
        return isBst(root->left,minn,root->data) and isBst(root->right,root->data,maxx);
    }
    return false;
}
Pair htbaltree(TreeNode *root)
{
    Pair p;
    if (root == NULL)
    {
        p.isBal = true;
        p.ht = 0;
        return p;
    }
    Pair lft=htbaltree(root->left);
    Pair rgt=htbaltree(root->right);
    if(lft.isBal and rgt.isBal and abs(lft.ht-rgt.ht<=1)){
        p.isBal=true;
    }
    else{
        p.isBal=false;
    }
    p.ht=max(lft.ht,rgt.ht)+1;
    return p;
}
TreeNode *search(TreeNode *root, int &key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
TreeNode *makeTree(int *in, int s, int e)
{
    if (s > e)
        return NULL;
    TreeNode *root = new TreeNode(pre[k++]);
    int i = -1;
    for (int j = s; j <= e; j++)
    {
        if (in[j] == root->data)
        {
            i = j;
            break;
        }
    }
    root->left = makeTree(in, s, i - 1);
    root->right = makeTree(in, i + 1, e);
    return root;
}
TreeNode *levelInput()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    TreeNode *root = new TreeNode(x);
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *f = q.front();
        q.pop();
        cout << "Enter data of : " << f->data << " ";
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            f->left = new TreeNode(l);
            q.push(f->left);
        }
        if (r != -1)
        {
            f->right = new TreeNode(r);
            q.push(f->right);
        }
    }
    return root;
}
TreeNode *InsertBST(TreeNode *root, int x)
{
    if (!root)
    {
        root = new TreeNode(x);
        return root;
    }
    if (root->data >= x)
    {
        root->left = InsertBST(root->left, x);
    }
    else
    {
        root->right = InsertBST(root->right, x);
    }
    return root;
}
void printinrange(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    printinrange(root->left);
    if (root->data > k1 and root->data < k2)
    {
        cout << root->data << " ";
    }
    printinrange(root->right);
}
int main()
{
    // TreeNode* root=levelInput();
    // TreeNode *root = createTree();
    // mirror(root);
    // InOrder(root);
    int n;
    cin >> n;
    TreeNode *root = NULL;
    while (n != -1)
    {
        root = InsertBST(root, n);
        cin >> n;
    }
    // TreeNode* root=makeTree(in,0,9);
    levelOrder(root);
    cout << endl;
    k1 = 4;
    k2 = 10;
    printinrange(root);
    int key = 14;
    TreeNode *src = search(root, key);
    cout << endl;
    if (src != NULL)
        cout << src->data<<endl;
    else
        cout << "Not Found" << endl;
    Pair x=htbaltree(root);
    cout<<x.isBal<<endl;
    cout<<isBst(root,INT_MIN,INT_MAX)<<endl;
    return 0;
}