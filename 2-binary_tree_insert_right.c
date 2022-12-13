#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right child of another
* @parent: pointer to the noce to insert the right child
* @value: value to be inserted as a new node
* Return: pointer to the created node or NULL if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		tempNode->right = parent->right;
		parent->right->parent = tempNode;
	}
	parent->right = tempNode;

	return (tempNode);
}
