#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if the tree is NULL
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int counter_left, counter_right, counter;

	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left != NULL && tree->right != NULL))
	{
		return (1);
	}
	counter_left = binary_tree_is_full(tree->left);
	counter_right = binary_tree_is_full(tree->right);

	counter = counter_left || counter_right;

	return (counter);
}
