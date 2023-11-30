#include "binary_trees.h"
/**
 * count_height - counts the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of a tree or 0 if tree is NULL
*/
size_t count_height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);
	l_height = count_height(tree->left);
	r_height = count_height(tree->right);
	if (l_height >= r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}
/**
 * binary_tree_balance - meaasures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);
	l_height = count_height(tree->left);
	r_height = count_height(tree->right);

	return (l_height - r_height);
}
