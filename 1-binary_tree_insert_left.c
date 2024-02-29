#include "binary_trees.h"

/**
 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = parent->left;
	if (newnode->left)
		newnode->left->parent = newnode;
	parent->left = newnode;

	return (newnode);
}
