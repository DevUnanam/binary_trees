#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_nodes_recurse - recursively counts the nodes in the binary tree.
 * @tree: a pointer to the current node.
 * @size: a pointer to the node counter.
*/

void binary_tree_nodes_recurse(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;

	if (tree->left || tree->right)
		*size += 1;
	binary_tree_nodes_recurse(tree->left, size);
	binary_tree_nodes_recurse(tree->right, size);
}

/**
 * binary_tree_nodes - counts the number of nodes in the binary tree.
 * @tree: a pointer to the root node of the binary tree.
 *
 * Return: number of nodesin the binary tree otherwise, 0 is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_nodes_recurse(tree, &size);
	return (size);
}
