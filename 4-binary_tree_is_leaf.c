#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: The node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise or no node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
