#include "binary_trees.h"
#include <stddef.h>


/**
 */

void binary_tree_size_recurse(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;
	*size += 1;

	binary_tree_size_recurse(tree->left, size);
	binary_tree_size_recurse(tree->right, size);
}

/**
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_size_recurse(tree, &size);
	return (size);
}
