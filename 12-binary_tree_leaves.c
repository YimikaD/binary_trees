#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in the binary
 * @tree: Pointer to the root node of he tree to count the number of leaves
 * Return: 0 if tree is NULL, numbeer of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right) + 1);
}
