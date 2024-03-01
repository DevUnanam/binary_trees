#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the siblings of a node.
 * @node: a pointer to the node to find the sibling.
 *
 * Return: a pointer to the sibling node, NULL if node or parent is NULL or
 * node has no sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	const binary_tree_t *sibling_parent;

	if (!node)
		return (NULL);

	sibling_parent = node->parent;

	if (!sibling_parent)
		return (NULL);

	if (sibling_parent->left == node)
		return (sibling_parent->right);
	return (sibling_parent->left);
}
