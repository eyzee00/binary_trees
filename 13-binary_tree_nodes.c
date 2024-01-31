#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 * one child in a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: the number of nodes following the said rule
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nodeCount = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodeCount++;
	nodeCount += binary_tree_leaves(tree->left);
	nodeCount += binary_tree_leaves(tree->right);
	return (nodeCount);
}
