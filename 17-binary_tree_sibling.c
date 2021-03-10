#include "binary_trees.h"
/**
* binary_tree_sibling - checks if a node has a sibling
* @node: node/root to be given for checking
*
* Return: NULL or binary tree node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left || node->parent->right)
	{
		if (node->parent->left->n == node->n)
			return (node->parent->right);
		if (node->parent->right->n == node->n)
			return (node->parent->left);
	}
	return (NULL);
}
