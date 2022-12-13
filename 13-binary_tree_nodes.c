#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter_left = 0, counter_right = 0, counter = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	counter_left = binary_tree_nodes(tree->left);
	counter_right = binary_tree_nodes(tree->right);

	counter = counter_left + counter_right + 1;
	return (counter);
}
