#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the
 * depth of a node in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: depth of node or NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)

		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
