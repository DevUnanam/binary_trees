#include "binary_trees.h"


/**
 */

size_t binary_tree_height_dfss(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height_dfss(tree->left);
	right = binary_tree_height_dfss(tree->right);
	return ((left > right) ? left + 1 : right + 1);
}
/**
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height_dfss(tree->left);
	right = binary_tree_height_dfss(tree->right);

	return (left - right);
}
