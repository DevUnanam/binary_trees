#include "binary_trees.h"


/**
 */

int is_perfect(const binary_tree_t *tree, int level, int depth)
{
	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (level + 1 == depth);
	return (is_perfect(tree->left, level + 1, depth) &&
			is_perfect(tree->right, level + 1, depth));
}


/**
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0, level = 0;
	const binary_tree_t *saved_tree = tree;

	if (!tree)
		return (0);
	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	tree = saved_tree;
	return (is_perfect(tree, level, depth));
}
