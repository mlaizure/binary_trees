#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: the node to check off a given binary tree
*
* Return: 0 on fail, 1 on success.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
