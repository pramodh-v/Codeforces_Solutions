#include<stdio.h>
#include<cstdlib>
#include<climits>

struct TreeNode
{
	int data;
	struct TreeNode *left,*right;
	bool isThreaded;
};
struct TreeNode* newTreeNode(int data)
{
	struct TreeNode *root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	root->data = data;
	root->left = NULL;
	root->right = NULL;
	root->isThreaded = false;
	return root;
}
struct TreeNode* dummy = NULL;//Dummy Node for Leftmost and Right most nodes
void inOrder(struct TreeNode *root)
{
	if(!root)
		return ;
	inOrder(root->left);
	printf("%d ",root->data);
	inOrder(root->right);
}
void convertToThreaded(TreeNode* child,TreeNode *par)
{
	if (child == NULL)
		return;
	convertToThreaded(child->left, par);
	if (par&&!par->right)
	{
		par->right = child;
		par->isThreaded = true;
	}
	par = child;
	convertToThreaded(child->right, par);
}
void rightNode(struct TreeNode **root)
{
	struct TreeNode *temp = *root;
	while(temp&&temp->right)
		temp = temp->right;
	temp->right = dummy;
	dummy = *root;
}
int main()
{

			// 	   5
			//     /\
			//    /  \
			//   2    7
			//  / \  / \
			// /   \6   9
		 //   1     4  / \
		 //        /  8   10
		 //       3
	TreeNode* root = newTreeNode(5);
	root->left = newTreeNode(2);
	root->right = newTreeNode(7);
	root->left->left = newTreeNode(1);
	root->left->right = newTreeNode(4);
	root->right->left = newTreeNode(6);
	root->right->right = newTreeNode(9);
	root->left->right->left = newTreeNode(3);
	root->right->right->left = newTreeNode(8);
	root->right->right->right = newTreeNode(10);
	inOrder(root);
	printf("\n");
	TreeNode* par = NULL;
	convertToThreaded(root,par);
	printf("After Adding Threads\n");
	rightNode(&root);
	inOrder(root);
	printf("\n");
	return 0;	
}