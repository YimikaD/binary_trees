#include "binary_trees.h"

/**
 * binary_tree_nodes -Counts the node with at least 1 child in the binary
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
}