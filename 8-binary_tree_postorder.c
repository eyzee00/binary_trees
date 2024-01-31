#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using
 * post-order traversal
 * @tree: pointer to the root of the tree
 * @func: pointer to a fucntion to execute on each node
 * Return: (void)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_postorder(tree->right, func);
	binary_tree_postorder(tree->left, func);
}
