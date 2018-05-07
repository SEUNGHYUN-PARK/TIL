#include <stdio.h>
#include <stdlib.h>

typedef struct TREENODE {
	int data;
	struct TREENODE *left, *right;
}treenode;

void preorder_traversal(treenode *node)
{
	if (node != NULL)
	{
		printf("%d ", node->data);
		preorder_traversal(node->left);
		preorder_traversal(node->right);
	}
	
}
void inorder_traversal(treenode *node)
{
	if (node != NULL)
	{
		inorder_traversal(node->left);
		printf("%d ", node->data);
		inorder_traversal(node->right);
	}
}
void postorder_traversal(treenode *node)
{
	if (node != NULL)
	{
		postorder_traversal(node->left);
		postorder_traversal(node->right);
		printf("%d ", node->data);
	}
}

int main(void)
{
	treenode *node = (treenode *)malloc(sizeof(treenode));
	treenode *node1 = (treenode *)malloc(sizeof(treenode));
	treenode *node2 = (treenode *)malloc(sizeof(treenode));
	treenode *node3 = (treenode *)malloc(sizeof(treenode));
	treenode *node4 = (treenode *)malloc(sizeof(treenode));
	treenode *node5 = (treenode *)malloc(sizeof(treenode));
	treenode *node6 = (treenode *)malloc(sizeof(treenode));
	treenode *node7 = (treenode *)malloc(sizeof(treenode));
	treenode *node8 = (treenode *)malloc(sizeof(treenode));

	node->data = 10;
	node->left = node1;
	node->right = node2;
	node1->data = 20;
	node1->left = node3;
	node1->right = node4;
	node2->data = 30;
	node2->left = node5;
	node2->right = node6;
	node3->data = 40;
	node3->left = node7;
	node3->right = node8;
	node4->data = 50;
	node4->left = NULL;
	node4->right = NULL;
	node5->data = 60;
	node5->left = NULL;
	node5->right = NULL;
	node6->data = 70;
	node6->left = NULL;
	node6->right = NULL;
	node7->data = 80;
	node7->left = NULL;
	node7->right = NULL;
	node8->data = 90;
	node8->left = NULL;
	node8->right = NULL;



	preorder_traversal(node);
	printf("\n");
	inorder_traversal(node);
	printf("\n");
	postorder_traversal(node);
	printf("\n");

}