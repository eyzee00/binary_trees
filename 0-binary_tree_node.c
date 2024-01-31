#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the created node, NULL
 * if the process fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode != NULL)
	{
		newnode->parent = parent;
		newnode->n = value;
		newnode->left = newnode->right = NULL;
	}
	return (newnode);
}
