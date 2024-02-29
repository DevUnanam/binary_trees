#include "binary_trees.h"

/**
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
