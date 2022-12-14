#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if the tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t counter_left, counter_right, counter;

	if (tree == NULL)
	{
		return (0);
	}

	counter_left = binary_tree_size(tree->left);
	counter_right = binary_tree_size(tree->right);

	if (counter_left == counter_right)
	{
		counter = counter_left + counter_right + 1;
	}
	else
	{
		counter = 0;
	}

	if (counter != 0)
	{
		return (1);
	}

	return (0);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
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
