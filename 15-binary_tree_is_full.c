#include "binary_trees.h"
/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: - node/root given to check
*
* Return: 0 on fail, 1 on success
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	if (!tree->left)
		lh = 0;
	else
		lh = binary_tree_is_full(tree->left);

	if (!tree->right)
		rh = 0;
	else
		rh = binary_tree_is_full(tree->right);

	if (lh - rh != 0)
		return (0);
	return (1);
}
