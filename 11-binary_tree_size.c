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
