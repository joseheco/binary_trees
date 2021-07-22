#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int node_L, node_R;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	node_L = binary_tree_is_full(tree->left);
	node_R = binary_tree_is_full(tree->right);
	if (node_L == 1 && node_R == 1)
		return (1);
	return (0);
}
