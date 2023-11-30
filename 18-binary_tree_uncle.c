#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle or NULL if not found
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *r_uncle, *l_uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	r_uncle = node->parent->parent->right;
	l_uncle = node->parent->parent->left;

	if (node->parent == r_uncle && l_uncle != NULL)
		return (l_uncle);
	if (node->parent == l_uncle && r_uncle != NULL)
		return (r_uncle);
	return (NULL);
}
