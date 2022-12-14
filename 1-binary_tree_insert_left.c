#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left child of another
* @parent: pointer to the noce to insert the left child
* @value: value to be inserted as a new node
* Return: pointer to the created node or NULL if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	tempNode = binary_tree_node(parent, value);

	if (tempNode == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		tempNode->left = parent->left;
		parent->left->parent = tempNode;
	}
	parent->left = tempNode;

	return (tempNode);
}
