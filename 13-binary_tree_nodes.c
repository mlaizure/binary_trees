#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes that have at least one child
* @tree: node/root given as a tree
*
* Return: 0 on fail, otherwise on success
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	else
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
