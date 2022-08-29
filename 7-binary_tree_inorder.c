#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary three in-order, calling a function
 * on each element
 * @tree: The tree's root node
 * @func: A pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
