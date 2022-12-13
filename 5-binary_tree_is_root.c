#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 * @node: pointer to the node to check
 * Return: 1 if node is a root, 0 if node is NULL or not a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	else if (node->parent == NULL)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
