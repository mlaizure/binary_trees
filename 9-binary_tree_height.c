#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: node or root of tree to measure
*
* Return: height or 0 on fail
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1 = 0, height2 = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height1 = binary_tree_height(tree->left);
	height2 = binary_tree_height(tree->right);

	if (height1 > height2)
		return (height1 + 1);
	else
		return (height2 + 1);
}
