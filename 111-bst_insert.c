#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to
 * insert the value to
 * @value: the value to store in the node to be inserted
 * Return: pointer to created node or NULL if failure
 * tree is NULL
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root;
	bst_t *tempNode;

	if (tree != NULL)
	{
		root = *tree;
		tempNode = binary_tree_node(root, value);

		if (tempNode == NULL)
		{
			return (NULL);
		}
		if (root == NULL)
		{
			return (*tree = tempNode);
		}

		if (tempNode->n < root->n)
		{
			if (root->left != NULL)
				return (bst_insert(&root->left, value));
			return (root->left = tempNode);
		}
		if (tempNode->n > root->n)
		{
			if (root->right != NULL)
				return (bst_insert(&root->right, value));
			return (root->right = tempNode);
		}
	}
	return (NULL);
}
