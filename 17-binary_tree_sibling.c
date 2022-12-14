#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: Pointer to sibling node or NULL if node or parent is NULL
 * or if node has no sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || (node->parent == NULL))
	{
		return NULL;
	}
	
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else if (node != node->parent->left)
	{
		return (node->parent->left);
	}
	return NULL;
}