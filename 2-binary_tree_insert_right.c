#include "binary_trees.h"

/**
 * binary_tree_insert_right -actss as a function that inserts a node
 * as the right-child of another in a binary tree.
 * @parent: Acts as a pointer to the node where we insert
 * the right-child in.
 * @value: The new node value.
 *
 * Return:  parent is NULL or incase of error  - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
