#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: A pointer to the root node
 *
 * Return: The height of the tree, or NULL if no tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_ht;
	size_t right_ht;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
		return (0);

	left_ht = binary_tree_height(tree->left);
	right_ht = binary_tree_height(tree->right);

	if (left_ht > right_ht)
		return (left_ht + 1);
	else
		return (right_ht + 1);
}
