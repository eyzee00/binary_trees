#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if the given node is a leaf
 * @node: the node to be checked
 * Return: if the given node is a lead, the return value
 * would be 1, otherwise its 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
