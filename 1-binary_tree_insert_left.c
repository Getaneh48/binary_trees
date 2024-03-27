#include "binary_trees.h"

/**
 * binary_tree_insert_left- a function that inserts
 * a node as the left-child of another node
 *
 * @parent: parent node
 * @value: integer value for a node
 * Return: a new node inserted or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Create the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);  /* Indicate memory allocation failure */
	}

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;

	/* Handle existing left child (if any) */
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;  /* Update old left child's parent */
	}

	/* Set the new node as the left child of the parent */
	parent->left = new_node;
	new_node->left = NULL;  /* New node's left child is initially NULL */
	new_node->right = NULL;  /* New node's right child is initially NULL */

	return (new_node);
}
