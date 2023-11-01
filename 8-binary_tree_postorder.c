#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through binary tree using postorder traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node,
 * The value in the node must be passed as a parameter to this function.
 * Return: Nothing if @tree or @fuunc is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}