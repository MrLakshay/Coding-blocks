#include <iostream>
#include <math.h>
#include <queue>
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
int TreeHeight(TreeNode *root)
{
    if (!root)
        return 0;
    return max(TreeHeight(root->left), TreeHeight(root->right)) + 1;
}
/*sd8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 */
void mirror(TreeNode *root)
{
    if (root == NULL)
        return;
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}
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
int pre[]={8,10,1,6,4,7,3,14,13};
int in[]={1,10,4,6,7,8,3,13,14};
int k=0;
TreeNode* makeTree(int *in,int s,int e){
    if(s>e) return NULL;
    TreeNode* root=new TreeNode(pre[k++]);
    int i=-1;
    for (int j = s; j <=e; j++)
    {
        if(in[j]==root->data){
            i=j;
            break;
        }
    }
    root->left=makeTree(in,s,i-1);
    root->right=makeTree(in,i+1,e);
    return root;
}
TreeNode* levelInput(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    TreeNode* root=new TreeNode(x);
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty())  
    {
        TreeNode* f=q.front();
        q.pop();
        cout<<"Enter data of : "<<f->data<<" ";
        int l,r;
        cin>>l>>r;
        if(l!=-1){
            f->left=new TreeNode(l);
            q.push(f->left);
       }
        if(r!=-1){
            f->right=new TreeNode(r);
            q.push(f->right);
        }

    }
    return root;
    
}
TreeNode* InsertBST(TreeNode* root,int x){
    if(!root){
        root=new TreeNode(x);
        return root;
    }
    if(root->data>=x){
        root->left=InsertBST(root->left,x);
    }
    else{
        root->right=InsertBST(root->right,x);
    }
    return root;
}
int main()
{
    // TreeNode* root=levelInput();
    // TreeNode *root = createTree();
    // mirror(root);
    // InOrder(root);
    int n;
    cin>>n;
    TreeNode* root=NULL;
    while(n!=-1){
        root=InsertBST(root,n);
        cin>>n;
    }
    // TreeNode* root=makeTree(in,0,9);
    levelOrder(root);
    cout<<endl;
    return 0;
}