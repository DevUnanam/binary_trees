#include "binary_trees.h"

/**
 * binary_tree_height_dfs - measures the height of a binary tree with DFS.
 * @tree: a pointer to the root node of the tree being measured,
 *
 * Return: height of the binary tree measured.
 */

size_t binary_tree_height_dfs(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height_dfs(tree->left);
	right = binary_tree_height_dfs(tree->right);
	return ((left > right) ? left + 1 : right + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree being measured.
 *
 * Return: the height of the binary tree, 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height_dfs(tree) - 1);
}
