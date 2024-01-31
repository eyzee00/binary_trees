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
	return (1);
}

/**
 * is_full_recursive - Checks if a binary tree is full
 * @tree: A pointer to the root node of the binary tree
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */
int is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if ((tree->left != NULL && tree->right == NULL) ||
	    (tree->left == NULL && tree->right != NULL) ||
	    is_full(tree->left) == 0 ||
	    is_full(tree->right) == 0)
		return (0);
	return (1);
}

