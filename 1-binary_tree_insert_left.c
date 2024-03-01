#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child of another node.
 *
 * @parent: a pointer to the node to insert the left child in.
 * @value: the value to store in the new node.
 *
 * Return: a pointer to the created node or NULL on failure or parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

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
