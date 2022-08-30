#include "binary_trees.h"

/**
 * child_height - Calculates the height of a binary tree's child
 * @tree: A pointer to the child node
 *
 * Return: The height of the tree, or NULL if no tree
 */
int child_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
		return (0);
	left_height = 1 + child_height(tree->left);

	right_height = 1 + child_height(tree->right);

	if (left_height < right_height)
		return (right_height);
	return (left_height);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: A pointer to the root node
 *
 * Return: The balance factor of the tree, or 0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_ht;
	int right_ht;

	if (!tree)
		return (0);

	left_ht = child_height(tree->left);
	right_ht = child_height(tree->right);
	return (left_ht - right_ht);
}

