#include "binary_trees.h"

/**
 * binary_tree_nodes2 - counts the number of nodes in the tree
 * @tree: pointer to the root node of the tree to check
 * Return: number of nodes in the tree
*/
size_t binary_tree_nodes2(const binary_tree_t *tree)
{
        size_t counter_left = 0, counter_right = 0, counter = 0;

        if (tree == NULL)
        {
                return (0);
        }

        counter_left = binary_tree_nodes2(tree->left);
        counter_right = binary_tree_nodes2(tree->right);

        counter = counter_left + counter_right + 1;
        return (counter);
}

/**
 * is_complete - checks if a tree is complete or not
 * @index: index of the tree to cke
 * @number_nodes: count of nodes in the tree
 * Return: true if the tree is complete or NULL and false otherwise
*/
bool is_complete(const binary_tree_t *tree, unsigned int index, unsigned int number_nodes)
{
	if (tree == NULL)
	{
		return (true);
	}
	if (index >= number_nodes)
	{
		return (false);
	}

	return ( is_complete(tree->left, 2*index + 1, number_nodes) && 
	is_complete(tree->right, 2*index + 2, number_nodes));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or is not complete and 1 if the tree is complete
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	unsigned int index, number_nodes;

	number_nodes = binary_tree_nodes2(tree);
	index = 0;

	if (tree == NULL)
	{
		return (0);
	}
	return(is_complete(tree, index, number_nodes));
}