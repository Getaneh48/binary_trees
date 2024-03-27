#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - a function that creates a binary tree
 * @parent: Pointer to the parrent node
 * @value: integer to be stored to the node
 * Return: a tree node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	/* Check for allocation failure */

	if (new_node == NULL)
	{
		return (NULL);  /* Indicate failure */
	}

	/* Initialize node fields */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
