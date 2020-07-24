#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a tree
 * @tree: pointer to the root node of the tree to calculate
 *
 * Return: Balance of the tree
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
/**
 * binary_tree_balance - calculates the balance of a tree
 * @tree: pointer to the root node of the tree to calculate
 *
 * Return: height of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		left = 0;
		right = 0;
	}
	if (tree->parent == NULL)
	{
		left += 1;
		right += 1;
	}
	if (tree->parent != NULL && tree->right != NULL)
		right += 1;
	if (tree->parent != NULL && tree->left != NULL)
		left += 1;
	return (left - right);
	}
