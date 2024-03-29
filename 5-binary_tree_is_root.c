#include "binary_trees.h"

/**
 * binary_tree_is_root - Checs if a node is a root.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a root,otherwise 0 if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}
