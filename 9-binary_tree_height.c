#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: the height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftHeight = binary_tree_height(tree->left) + 1;
	else
		leftHeight = 0;

	if (tree->right != NULL)
		rightHeight = binary_tree_height(tree->right) + 1;
	else
		rightHeight = 0;

	if (leftHeight > rightHeight)
		return leftHeight;
	else
		return rightHeight;
}
