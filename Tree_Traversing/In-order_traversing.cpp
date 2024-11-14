#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node *left,*right;
Node(int v)
{
    data=v;
    left=right=nullptr;
}
};
void inorder(struct Node* node)
{
    if(node==nullptr)
      return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);


}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
     root->right->right=new Node(6);
     cout<<"The inorder traversing of the binary tree:";
     inorder(root);

}
