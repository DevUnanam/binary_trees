#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth_recurse - recursively measures the depth of the tree node.
 * @tree: a pointer to the current node.
 * @depth: a pointer to the depth counter.
 * Return: void.
 */

void binary_tree_depth_recurse(const binary_tree_t *tree, size_t *depth)
{
	if (!tree)
		return;
	*depth += 1;

	binary_tree_depth_recurse(tree->parent, depth);
}

/**
 * binary_tree_depth - measures the depth of a node in the binary tree.
 * @tree: a pointer to the node to measure depth.
 *
 * Return: the depth of the node or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	binary_tree_depth_recurse(tree, &depth);
	return (depth - 1);
}
