#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of the tree
 * @tree: Root node
 *
 * Return: The number of leaves in the tree, or 0 if no leaf or NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else
		return (
		    binary_tree_leaves(tree->left) +
		    binary_tree_leaves(tree->right));
}
