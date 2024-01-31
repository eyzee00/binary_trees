#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of the given node
 * @parent: the given node(the parent of the node to be created)
 * @value: the value to store in the new node
 * Return: the value of the created node,
 * NULL if the parent is NULL or malloc failed
 * If parent already has a right-child, the new node takes its place
 * and instead becomes the right-child of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *placeholder = NULL;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode != NULL)
	{
		newnode->parent = parent;
		newnode->n = value;
		newnode->left = NULL;
		if (parent->right == NULL)
			newnode->right = NULL;
		else
		{
			placeholder = parent->right;
			newnode->right = placeholder;
			placeholder->parent = newnode;
		}
		parent->right = newnode;
	}
	return (newnode);
}
