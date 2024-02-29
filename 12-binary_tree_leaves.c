#include "binary_trees.h"
#include <stddef.h>


/**
 */

void binary_tree_leave_recurse(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;

	if (!(tree->left) && !(tree->right))
		*size += 1;
	binary_tree_leave_recurse(tree->left, size);
	binary_tree_leave_recurse(tree->right, size);
}

/**
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_leave_recurse(tree, &size);
	return (size);
}
