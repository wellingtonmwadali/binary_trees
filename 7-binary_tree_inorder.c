#include "binary_trees.h"

/**
 * binary_tree_inorder - sets an in-order traversal through binary tree.
 * @tree: The root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
