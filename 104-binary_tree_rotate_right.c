#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs right rotation on a binary tree
 * @tree: ponter to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tempNode_root = NULL;
	binary_tree_t *tempNode_left = NULL;
	binary_tree_t *tempNode_left_right = NULL;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}

	tempNode_root = tree;
	tempNode_left = tempNode_root->left;
	tempNode_left_right = tempNode_root->left->right;

	tempNode_root->left = tempNode_left_right;
	tempNode_left->right = tempNode_root;
	tempNode_root->parent = tempNode_left;
	tempNode_left->parent = NULL;

	return (tempNode_left);

}
