#include "binary_trees.h"


/**
 * binary_tree_height_dfss - measures the height of a binary tree using DFS.
 * @tree: a pointer to the root node of the tree.
 *
 * Return: the height of the binary tree.
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
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree.
 *
 * Return: the balance factor of the binary tree.
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
