#include "binary_trees.h"

/**
 * tree_height - measures height of a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: height of tree
 */

int tree_height(const binary_tree_t *tree)
{
	int height1 = 0, height2 = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height1 = tree_height(tree->left);
	height2 = tree_height(tree->right);

	if (height1 > height2)
		return (height1 + 1);
	else
		return (height2 + 1);
}

/**
 * is_perfect - checks if binary tree is perfect
 * @tree: root of tree to check
 * @height: height of tree
 * @level: current level
 * Return: 1 if perfect, otherwise 0
 */

int is_perfect(const binary_tree_t *tree, int height, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
	{
		if (height == level)
			return (1);
		else
			return (0);
	}

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, height, level + 1) &&
		is_perfect(tree->right, height, level + 1));
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: 1 if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;

	if (!tree)
		return (0);

	height = tree_height(tree);
	return (is_perfect(tree, height, 0));
}
