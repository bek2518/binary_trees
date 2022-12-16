#include "binary_trees.h"

bst_t *successor(bst_t *root) 
{
	bst_t *current = root;
	while (current && current->left != NULL)
	{
		current = current->left;
	}
	return (current);
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
		return (root);
	}
	if (value > root->n)
	{
		root->right = bst_remove(root->right, value);
	}
	else if (value < root->n)
	{
		root->left = bst_remove(root->left, value);
	}
	else
	{
		bst_t *temp;
		if (root->left == NULL)
		{
			bst_t *temp = root->right;
			free(root);
			return (temp);
		}
		if (root->right == NULL)
		{
			bst_t *temp = root->left;
			free(root);
			return (temp);
		}

		temp = successor(root->right);
		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}
