#include "binary_trees.h"

/**
 * binary_tree_node - function that creates
 * a binary tree node.
 * @parent: This is a pointer to the root
 * @value: new node value.
 *
 * Return: Incase of error - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newValue;

	newValue = malloc(sizeof(binary_tree_t));
	if (newValue == NULL)
		return (NULL);

	newValue->n = value;
	newValue->parent = parent;
	newValue->left = NULL;
	newValue->right = NULL;

	return (newValue);
}
