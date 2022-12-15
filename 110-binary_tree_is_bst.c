#include "binary_trees.h"

/**
 * isBST - checks if a binary tree is BST
 * @tree: pointer to the root node of the tree to check
 * @min: minimum value of the node visited
 * @max: maximum value of the node visited
 * Return: True if the tree is BST or false if not
*/
bool isBST(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
	{
		return (true);
	}

	if (tree->n <= min || tree->n >= max)
	{
		return (false);
	}
	return (isBST(tree->right, tree->n, max) &&
		isBST(tree->left, min, tree->n));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is BST other wise 0, 0 if tree is NULL
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (isBST(tree, INT_MIN, INT_MAX));

}
