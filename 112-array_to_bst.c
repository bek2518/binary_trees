#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of elements in the array
 * Return: pointer to the root node of the created BST or NULL if failure
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;
	int value;

	for (i = 0; i < size; i++)
	{
		value = array[i];
		bst_insert(&root, value);
	}

	return (root);
}
