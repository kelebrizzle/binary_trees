#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes counted or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int r_nodes, l_nodes;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	r_nodes = binary_tree_nodes(tree->right);
	l_nodes = binary_tree_nodes(tree->left);
	return (r_nodes + l_nodes + 1);
}
