#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaveCount = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaveCount++;
	leaveCount += binary_tree_leaves(tree->left);
	leaveCount += binary_tree_leaves(tree->right);
	return (leaveCount);
}
