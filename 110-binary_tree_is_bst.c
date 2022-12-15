#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is BST other wise 0, 0 if tree is NULL
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int checker_right, checker_left;
	if (tree == NULL)
	{
		return (0);
	}

	if (((tree->left->n < tree->n && tree->right->n > tree->n) ||
		(tree->left == NULL && tree->right->n > tree->n) ||
		(tree->left->n < tree->n && tree->right == NULL)))
		/*(tree compared with all values of nodes on the right and left))*/
	{
		return (1);
	}
	
	checker_left = binary_tree_is_bst(tree->left);
	checker_right = binary_tree_is_bst(tree->right);

	return (checker_left && checker_right);
}