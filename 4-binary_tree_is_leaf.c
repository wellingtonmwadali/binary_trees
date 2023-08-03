#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether a node is a
 *	leaf of a binary tree.
 * @node: pointer to the node to check.
 *
 * Return: If the node is a leaf then - 1.
 *         Otherwise  - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);/*Not a leaf*/

	return (1);/*its a a leaf*/
}
