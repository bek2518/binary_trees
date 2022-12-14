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

	counter_left = binary_tree_height(tree->left);
	counter_right = binary_tree_height(tree->right);

	counter = counter_left - counter_right;
	if (counter != 0)
	{
		return (0);
	}

	return (1);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter_left, counter_right, counter;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	counter_left = binary_tree_height(tree->left);
	counter_right = binary_tree_height(tree->right);

	if (counter_left > counter_right)
	{
		counter = counter_left;
	}
	else if (counter_left < counter_right)
	{
		counter = counter_right;
	}
	else
	{
		counter = counter_left;
	}
	return (counter + 1);
}
*/