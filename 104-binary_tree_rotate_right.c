#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs left rotation on a binary tree
 * @tree: ponter to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree oce rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tempNode_root = NULL;
	binary_tree_t *tempNode_right = NULL;
	binary_tree_t *tempNode_right_left = NULL;

	tempNode_root = tree;
	tempNode_right = tempNode_root->right;
	tempNode_right_left = tempNode_root->right->left;

	tempNode_root->right = tempNode_right_left;
	tempNode_right->left = tempNode_root;
	tempNode_root->parent = tempNode_right;

	return (tempNode_right);

}
