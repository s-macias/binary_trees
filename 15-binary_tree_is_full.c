#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0. If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL && node != NULL)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to calculate
 *
 * Return: height of the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left, full_right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);

	if (full_left == 0 || full_right == 0)
		return (0);
	else
		return (1);
}
