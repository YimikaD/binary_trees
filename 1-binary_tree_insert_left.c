#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left-child of another node
 *
 * @parent: Pointer to parent node.
 * @value: Value stored in new node.
 * Return: Pointer to new node, or NULL on fail or if `parent` is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
		new->left = NULL;
	new->right = NULL;
	parent->left = new;

	return (new);
}
