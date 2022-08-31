#include "binary_trees.h"
#include <stdio.h>

/**
 * get_first_leaf_depth - Gets the depth of the first leaf
 * @tree: Root node
 *
 * Return: The depth of the first leaf
 */
int get_first_leaf_depth(binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	if (depth > 0)
		depth--;

	return (depth);
}

/**
 * check_perfect - Checks if a binary tree is perfect
 * @tree: The tree to check
 * @leaf_d: The depth of the first leaf
 * @cur_d: The depth of the current leaf
 *
 * Return: 1 if perfect, 0 otherwise or null tree
 */
int check_perfect(binary_tree_t *tree, int leaf_d, int cur_d)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (leaf_d == cur_d);

	if (!tree->left || !tree->right)
		return (0);

	return (check_perfect(tree->left, leaf_d, cur_d + 1) &&
		check_perfect(tree->right, leaf_d, cur_d + 1));
}

/**
 * binary_tree_is_perfect - Starts the check
 * @tree: The tree to check
 *
 * Return: 1 if perfect, 0 otherwise or null tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaf_depth;

	leaf_depth = get_first_leaf_depth((binary_tree_t *)tree);
	return (check_perfect((binary_tree_t *)tree, leaf_depth, 0));
}
