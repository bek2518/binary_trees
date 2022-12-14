#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two nodes
 * Null if no common ancestor found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *tempNodefirst = first->parent;
	binary_tree_t *tempNodesecond = second->parent;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	if (first == tempNodesecond || tempNodefirst == NULL ||
		(tempNodefirst->parent == NULL && tempNodesecond != NULL))
	{
		return (binary_trees_ancestor(first, tempNodesecond));
	}
	else if (tempNodefirst == second || tempNodesecond == NULL ||
		(tempNodesecond->parent == NULL && tempNodefirst != NULL))
	{
		return (binary_trees_ancestor(tempNodefirst, second));
	}

	return (binary_trees_ancestor(tempNodefirst, tempNodesecond));
}
