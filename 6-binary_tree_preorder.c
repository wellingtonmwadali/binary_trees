#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* check if root node and func are not NULL */
	if (tree && func)
	{
		/* perform the function on data of the root node */
		func(tree->n);
		/*Recursively traverse the left subtree in pre-order*/
		binary_tree_preorder(tree->left, func);
		/* Recursively traverse the left subtree in pre-order*/
		binary_tree_preorder(tree->right, func);
	}
}
