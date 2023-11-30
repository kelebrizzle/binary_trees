#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent of the new node
 * @value: value of the new node
 * Return: pointer to new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new != NULL)
	{
		new->parent = parent;
		new->n = value;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
