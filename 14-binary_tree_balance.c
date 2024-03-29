#include "binary_trees.h"


#ifndef LAG_INT
#define LAG_INT

/**
 * lag_int - checks the larger int
 * @a: first int
 * @b: second int
 * Return: largest int, if equal value of both int
 */
inline int lag_int(int a, int b)
{
	return ((a > b) ? a : b);
}

#endif


/**
 * binary_tree_balance_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: count of root and levels below, or 0 if `tree` is NULL
 */
int binary_tree_balance_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (1 + lag_int(binary_tree_balance_height(tree->left),
			    binary_tree_balance_height(tree->right)));
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node from which to measure
 * Return: height of `tree` left subtree minus height of right subtree,
 * or 0 if `tree` is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_balance_height(tree->left);
	right_h = binary_tree_balance_height(tree->right);

	return (left_h - right_h);
}
