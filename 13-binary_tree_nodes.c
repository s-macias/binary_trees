#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a tree
 * @tree: pointer to the root node of the tree to calculate
 *
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t left_tree_size = 0, right_tree_size = 0;

	if (tree == NULL)
		return (0);

	left_tree_size = binary_tree_size(tree->left);
	right_tree_size = binary_tree_size(tree->right);

	return (left_tree_size + right_tree_size + 1);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to calculate
 *
 * Return: number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t leaves;

	if (tree == NULL)
		return (0);

	leaves = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		leaves += 1;

	return (leaves);
}

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: pointer to the root node of the tree to calculate
 *
 * Return: number of nodes in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes, size, leaves;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);
	nodes = size - leaves;
	return (nodes);
}
