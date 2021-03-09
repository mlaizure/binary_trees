#include "binary_trees.h"
/**
* binary_tree_is_root - checks if a given node is a root
* @node: node given from a binary tree
*
* Return: 0 on fail, 1 on success
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return(1);
	return (0);
}
