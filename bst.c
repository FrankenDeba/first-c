//find the second largest element in bst
#include<stdio.h>
struct node{
int data;
struct node* left;
struct node* right;
}root;
void insert(struct node*,int);
struct node* inorder(struct node*);
int 2nd_largest();


root=NULL;
void main()
{
printf("enter the number of nodes in bst: \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&x);
insert(x);
}
inorder(root);
}

void insert(struct node* tree,int x)
{
if(tree==NULL)
tree=(struct node*)malloc(sizeof(struct node))
tree->left=tree->right=NULL;

else if(x>tree->data)
{
insert(tree->right,x);
}
else
insert(tree->left,x);
}

struct node* inorder(struct node* tree)
{
max=0;
max2=0;
if(tree!=NULL)
{
inorder(tree->left);
printf("%d",tree->data);
inorder(tree->right);
if(max>tree->data)
{
max=tree->data;
if((2nd_max>tree->data)&&(tree->data<max)
{
2nd_max=tree->data;
}
}
}
}





