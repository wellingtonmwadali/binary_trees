#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count no. of leaves
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	/* check if root node is not NULL*/
	if (tree)
	{
		/*if root node is a leaf increment leaf count by 1 */
		leaves += (!tree->left && !tree->right) ? 1 : 0;

		/*Recursively call the function on the left subtree.*/
		leaves += binary_tree_leaves(tree->left);

		/* Recursively call the function on the right subtree*/
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}

