#include "binary_trees.h"

/**
* binary_tree_node - creates a new binary tree node
* @parent: the parent node
* @value: value to be added to the new node
* Return: pointer to the newly created node or NULL if failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = malloc(sizeof(binary_tree_t));

	if (tempNode == NULL)
	{
		return (NULL);
	}
	tempNode->parent = parent;
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;

	return (tempNode);
}
