#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node,
 * in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: if tree is NULL, return 0,
 *	otherwise return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* check if tree is not NULL*/
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	/* if tree is NULL*/
	else
	{
		return (0);
	}
}

