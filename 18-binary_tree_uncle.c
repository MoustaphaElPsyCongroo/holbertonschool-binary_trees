#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: the sibling of a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: The node to find uncle's of
 *
 * Return: A pointer to the uncle node, or NULL if not found or no node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	return (binary_tree_sibling(parent));
}
