#include "binary_trees.h"

/**
 * binary_tree_balance -  a function that measures the
 * balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: balance factor or 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
