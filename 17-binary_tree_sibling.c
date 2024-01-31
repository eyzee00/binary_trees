#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of the given node
 * @node: pointer to the node to find its sibling
 * Return: NULL if node is NULL or there is no sibling
 * a pointer to the sibling otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
