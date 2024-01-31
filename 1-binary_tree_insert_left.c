#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of the given node
 * @parent: the given node(the parent of the node to be created)
 * @value: the value to store in the new node
 * Return: the value of the created node,
 * NULL if the parent is NULL or malloc failed
 * If parent already has a left child, the new node takes its place
 * and insted becomes the left-child of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *placeholder = NULL;

	if (parent == NULL)
		return NULL;
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode != NULL)
	{
		newnode->parent = parent;
		newnode->n = value;
		newnode->right = NULL;
		if (parent->left == NULL)
		{
			newnode->left = NULL;
			parent->left = newnode;
		}
		else
		{
			placeholder = parent->left;
			newnode->left = placeholder;
			parent->left = newnode;
		}
	}
	return (newnode);
}
