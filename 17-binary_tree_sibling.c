#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling or NULL if not found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *r_child, *l_child;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	r_child = node->parent->right;
	l_child = node->parent->left;

	if (node == r_child && l_child != NULL)
		return (l_child);
	if (node == l_child && r_child != NULL)
		return (r_child);
	return (NULL);
}
