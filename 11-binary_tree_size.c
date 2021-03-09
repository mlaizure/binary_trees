#include "binary_trees.h"
/**
* binary_tree_size - measures the size of a tree
* @tree: given tree/root to measure
*
* Return: 0 on fail, otherwise on success
*/
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (1 + ((binary_tree_size(tree->left) + binary_tree_size(tree->right))));
}
