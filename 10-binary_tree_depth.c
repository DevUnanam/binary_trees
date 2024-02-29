#include "binary_trees.h"
#include <stddef.h>


/**
 */

void binary_tree_depth_recurse(const binary_tree_t *tree, size_t *depth)
{
	if (!tree)
		return;
	*depth += 1;

	binary_tree_depth_recurse(tree->parent, depth);
}

/**
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	binary_tree_depth_recurse(tree, &depth);
	return (depth - 1);
}
