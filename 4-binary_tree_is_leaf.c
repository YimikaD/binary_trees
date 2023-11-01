#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf.
 * @node: Pointer to the node to check.
 * Return: 1 if node is leaf, otherwise 0, if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
