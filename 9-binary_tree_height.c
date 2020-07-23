#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a bin tree using postorder traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_tree_height, left_tree_height;

	if (tree == NULL)
		return (0);

	left_tree_height = binary_tree_height(tree->left);
	right_tree_height = binary_tree_height(tree->right);
	if (left_tree_height > right_tree_height)
	{
/*		return (left_tree_height + 1); */
		left_tree_height += 1;
	}
	else
	{
/*		return (right_tree_height + 1); */
	}
}
