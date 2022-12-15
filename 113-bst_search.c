#include "binary_trees.h"

/**
 * bst_search - searches for a value in Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: the value to search int the tree
 * Return: pointer to the node containing a value equal to the value
 * or NULL if tree is NULL or nothing is found
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
		{
			return ((bst_t *)tree);
		}

		if (tree->n < value)
		{
			return (bst_search(tree->right, value));
		}

		if (tree->n > value)
		{
			return (bst_search(tree->left, value));
		}
	}
	return (NULL);

}
