#include "binary_trees.h"
/**
* binary_tree_inorder - prints the data in a binary tree with inorder traversal
* @tree: given binary tree to traverse through
* @func: function to call for each nose
*
* Return: none
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
