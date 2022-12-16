#include "binary_trees.h"

/**
bst_t inorder_traversal(bst_t *root)
{
	while (root != NULL)
	{
		root = root->left;
	}
	return (root);
}
*/


/**
 * bst_remove - removes a node from the binary search tree
 * @root: pointer to the root node of the tree where you remove a node
 * @value: value to remove in the tree
 * Return: pointer to the new root node of the tree after removal

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *value_to_remove, *tempNode;

	value_to_remove = bst_search(root, value);
	
	tempNode = value_to_remove;


}
*/