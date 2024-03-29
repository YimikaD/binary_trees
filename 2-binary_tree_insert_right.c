#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 * Return: Pointer to created node, NULL on failure or, if @parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;
	new->left = NULL;
	parent->right = new;

	return (new);
}
