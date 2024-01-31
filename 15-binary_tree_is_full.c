#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root of the binary tree
 * Return: 1 if true, 0 if false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left != NULL && tree->right == NULL) ||
	    (tree->left == NULL && tree->right != NULL) ||
	    binary_tree_is_full(tree->left) == 0 ||
	    binary_tree_is_full(tree->right) == 0)
		return (0);
	return (1);
}
