#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node
 * @tree: A pointer to the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;
	binary_tree_t *current = (binary_tree_t *)tree;

	while (current->parent)
	{
		current = current->parent;
		i++;
	}

	return (i);
}
