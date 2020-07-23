#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a tree
 * @tree: pointer to the root node of the tree to calculate
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_tree_height = 0, left_tree_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		left_tree_height = binary_tree_height(tree->left) + 1;
		right_tree_height = binary_tree_height(tree->right) + 1;
	}
	if (left_tree_height >= right_tree_height)
		return (left_tree_height);
	else
		return (right_tree_height);
}
