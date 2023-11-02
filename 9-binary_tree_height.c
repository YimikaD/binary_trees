#include "binary_trees.h"
/**
 * size_t_height - Checks for largest size
 * @a: first size
 * @b: second size
 * Return: largest size_t, or size of both if equal
 */
size_t size_t_height(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - Measures the height of a tree
 * @tree: Pointer to the root node of the tree to measures the height
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	
	return (1 + size_t_height(binary_tree_height(tree->left),
			       binary_tree_height(tree->right)));
}
