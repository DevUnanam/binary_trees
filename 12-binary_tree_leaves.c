#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_leave_recurse - recursively counts the leaves in the binary tree
 * @tree: a pointer to the current node.
 * @size: a pointer to the leaf count.
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
 * binary_tree_leaves - counts the number of leaves in the binary tree.
 * @tree: a pointer to the root node of the tree.
 *
 * Return: number of the leaves in the binary tree, otherwise 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_leave_recurse(tree, &size);
	return (size);
}
