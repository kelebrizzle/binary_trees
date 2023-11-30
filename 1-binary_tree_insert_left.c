#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new != NULL && parent != NULL)
	{
		new->parent = parent;
		new->n = value;
		new->right = NULL;

		if (parent->left != NULL)
		{
			temp = parent->left;
			parent->left = new;
			temp->parent = new;
			new->left = temp;
		}
		else
		{
			parent->left = new;
			new->left = NULL;
		}
		return (new);
	}
	free(new);
	return (NULL);
}
