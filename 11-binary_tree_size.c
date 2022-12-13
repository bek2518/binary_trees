#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter_left = 0, counter_right = 0, counter = 0;

	if (tree == NULL)
	{
		return (0);
	}

	counter_left = binary_tree_size(tree->left);
	counter_right = binary_tree_size(tree->right);

	counter = counter_left + counter_right + 1;
	return (counter);
}
