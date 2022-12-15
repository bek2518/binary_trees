#include "binary_trees.h"

/**
 * height - finds height of the binary tree
 * @tree: pointer to the root node of the tree to find height for
 * Return: height of the tree or 0 if tree is NULL
*/
int height(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int lheight = height(tree->left);
		int rheight = height(tree->right);

		if (lheight > rheight)
		{
			return (lheight + 1);
		}
		else
		{
			return (rheight + 1);
		}
	}
}

/**
 * current_level - calls function on the current level and node
 * @tree: pointer to the tree
 * @level: current level to be used on the func
 * @func: pointer to a function to call for each node
*/
void current_level(binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	if (level == 1)
	{
		func(tree->n);
	}
	else if (level > 1)
	{
		current_level(tree->left, level - 1, func);
		current_level(tree->right, level - 1, func);
	}
}

/**
 * level_order - traverses throughh the tree using level order traversal
 * @tree: pointer to the root node of the tree to be traversed
 * @func: pointer to a function to call for each node
*/
void level_order(binary_tree_t *tree, void (*func)(int))
{
	int h = height(tree) + 1;
	int i;

	for (i = 1; i <= h; i++)
	{
		current_level(tree, i, func);
	}
}

/**
 * binary_tree_levelorder - goes throught the binary tree
 * using level order traversal
 * @tree: pointer to the root node of the tree to be traversed
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	level_order((binary_tree_t *)tree, func);
}
