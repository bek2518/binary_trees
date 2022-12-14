#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs left rotation on a binary tree
 * @tree: ponter to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tempNode_root = NULL;
	binary_tree_t *tempNode_right = NULL;
	binary_tree_t *tempNode_right_left = NULL;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}

	tempNode_root = tree;
	tempNode_right = tempNode_root->right;
	tempNode_right_left = tempNode_root->right->left;

	tempNode_root->right = tempNode_right_left;
	tempNode_right->left = tempNode_root;
	tempNode_root->parent = tempNode_right;
	tempNode_right->parent = NULL;

	return (tempNode_right);

}
