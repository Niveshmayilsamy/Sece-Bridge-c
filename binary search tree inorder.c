// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node*left;
    struct node*right;
};

struct node* newNode(int item)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp-> val = item;
    temp-> left = temp->right;
    return temp;
}

void inorder(struct node* root)
{
    if (root!=NULL)
    {
        inorder(root->left);
        printf(" %d ",root->val);
        inorder(root->right);
    }
}
struct node* insert(struct node* node,int val)
{
    if (node==NULL)
    {
        return newNode(val);
    }
    if(val<node->val)

        node->left=insert(node->left,val);

    else if(val>node->val)

        node->right=insert(node->right,val);

    return node;
}
int main() {
    struct node*root=NULL;
    root=insert(root,30);
    insert(root,60);
    insert(root,240);
    insert(root,120);
    insert(root,480);
    insert(root,960);
    inorder(root);
    return 0;
}
