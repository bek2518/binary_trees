#include "binary_trees.h"

int successor(bst_t *root) 
{
  root = root->right;
  while (root->left != NULL)
  	{
		root = root->left;
	}
  return root->n;
}

int predecessor(bst_t *root)
{
	root = root->left;
	while (root->right!= NULL)
	{
		root = root->right;
	}
	return root->n;
}

/**
 * bst_remove - removes a node from the binary search tree
 * @root: pointer to the root node of the tree where you remove a node
 * @value: value to remove in the tree
 * Return: pointer to the new root node of the tree after removal
*/
bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
	{
		return (NULL);
	}
	if (value > root->n)
	{
		root = root->right;
		bst_remove(root, value);
	}
	else if (value < root->n)
	{
		root = root->left;
		bst_remove(root, value);
	}
	else
	{
		if (root->left == NULL && root->right == NULL)
		{
			root = NULL;
		}
		else if (root->right != NULL)
		{
			root->n = successor(root);
			bst_remove(root->right, root->n);
		}
		else
		{
			root->n = predecessor(root);
			bst_remove(root->left, root->n);
		}
	}
	return (root);
}
