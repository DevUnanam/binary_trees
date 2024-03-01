#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node, NULL if node is NULL or has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	const binary_tree_t *parent, *grandparent;

	if (!node)
		return (NULL);

	parent = node->parent;
	if (!parent)
		return (NULL);
	grandparent = parent->parent;
	if (!grandparent)
		return (NULL);
	if (grandparent->left == parent)
		return (grandparent->right);
	return (grandparent->left);
}
