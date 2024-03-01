#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_size_recurse - resursively measures the size of a binary tree.
 * @tree: a pointer to the current node.
 * @size: pointer to the size counter.
 *
 * Return: void.
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
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size.
 *
 * Return: size of the binary tree, 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_size_recurse(tree, &size);
	return (size);
}
