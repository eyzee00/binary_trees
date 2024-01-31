#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: the height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 1, rightHeight = 1;

	if (tree == NULL)
		return (0);
	leftHeight += binary_tree_height(tree->left);
	rightHeight += binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return leftHeight;
	else
		return rightHeight;
}
