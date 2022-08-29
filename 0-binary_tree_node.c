#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_h - Creates a binary tree node
 * @parent: The parent node of the node to create
 * @value: The created node's value
 *
 * Return: A pointer to the new node, or NULL if fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        new_node = malloc(sizeof(binary_tree_t));

        if (!new_node)
                return (NULL);

        new_node->n = value;
        new_node->parent = parent;
        new_node->left = NULL;
        new_node->right = NULL;

        return (new_node);
}