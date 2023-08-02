#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node,
 * as the left-child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store the new node
 *
 * Return: pointer to created node,
 *	NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	/*check if parent node is not new*/
	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new node*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* If the parent already has a left child, adjust the pointers*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/* Set the new node as the left child of the parent*/
	parent->left = new_node;

	/* Return the new node*/
	return (new_node);
}
