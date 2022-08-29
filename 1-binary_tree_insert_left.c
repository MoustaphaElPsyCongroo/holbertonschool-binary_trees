#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: The parent of the new node
 * @value: The new node's value
 *
 * Return: A pointer to the created node, or NULL if fail or parent NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	if (!parent->left)
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		binary_tree_t *old_left = parent->left;
		binary_tree_t *new_node = binary_tree_node(parent, value);

		old_left->parent = new_node;
		new_node->left = old_left;

		parent->left = new_node;
	}

	return (parent->left);
}
