#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree post-order, calling a
 * function on each node
 * @tree: A pointer to the root node
 * @func: The function to call on each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
