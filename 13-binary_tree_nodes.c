#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at
 * least 1 child in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: number of nodes in a binary tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree);
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += (tree->left || tree->right) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
