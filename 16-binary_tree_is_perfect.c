#include "binary_trees.h"

/**
 * depth - function that returns the depth of a given node in a binary tree.
 * @tree: pointer to the node to measure the depth of.
 *
 * Return: depth of the node.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * is_leaf - function that checks if a node is a leaf of a binary tree.
 * @node: pointer to the node to check.
 *
 * Return: If the node is a leaf, return 1,
 *      otherwise, 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * get_leaf - function that returns a leaf of a binary tree.
 * @tree: pointer to the root node of the tree to find a leaf in.
 *
 * Return: pointer to the first leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - function that Checks if a binary tree
 * is perfect recursive
 * @tree: pointer to the root node of the tree to check
 * @leaf_depth: The depth of one leaf in the binary tree
 * @level: Level of the current node
 *
 * Return: If the tree is perfect, return 1,
 *	otherwise, 0.
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t leaf_depth,
			size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: if tree is not perfect return 0'
 *	otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
