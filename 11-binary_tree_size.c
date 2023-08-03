#include "binary_trees.h"

/**
 * binary_tree_size - function that calculates the size of a node
 * in binary tree.
 * @tree:pointer to the node to get depth.
 *
 * Return: If tree is NULL, return 0,
 * else return the depth.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/* If the tree is not NULL, add 1 to the size (counting the current node)*/
	if (tree)
	{
		size += 1;
		/*recursively calculate size of left and right subtrees*/
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	/* Return the final size of the binary tree.*/
	return (size);
}
