#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, return 0,
 *	else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		/* Calculate the height of the left subtree.*/
		size_t l = tree->left ? 1 + binary_tree_height(tree->left) : 1;

		/*Calculate the height of the right subtree.*/
		size_t r = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		/* Return the maximum height between left and right subtrees.*/
		return ((l > r) ? l : r);
	}

	/* Return 0 if the tree is NULL.*/
	return (0);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0,
 *	else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		/* Calculate the height of the left subtree.*/
		int left_height = binary_tree_height(tree->left);

		/* Calculate the height of the right subtree.*/
		int right_height = binary_tree_height(tree->right);

		/*Calculate and return the balance factor of the tree.*/
		return (left_height - right_height);
	}
	return (0);
}
