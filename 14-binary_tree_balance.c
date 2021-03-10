#include "binary_trees.h"

/**
 * height - measures height of a binary tree
 * @tree: pointer to root node
 * Return: height
 */

int height(binary_tree_t *tree)
{
	int height1 = 0, height2 = 0;

	if (!tree)
		return (0);

	height1 = height(tree->left);
	height2 = height(tree->right);

	if (height1 > height2)
		return (height1 + 1);
	else
		return (height2 + 1);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}
