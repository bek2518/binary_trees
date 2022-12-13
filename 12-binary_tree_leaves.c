#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter_left = 0, counter_right = 0, counter = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	counter_left = binary_tree_leaves(tree->left);
	counter_right = binary_tree_leaves(tree->right);

	counter = counter_left + counter_right;
	return (counter);
}
