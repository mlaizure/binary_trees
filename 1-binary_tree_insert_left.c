#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node to the left of a binary tree
* @parent: parent node of the binary tree
* @value: value to initialize node with
*
* Return: NULL on fail, successful otherwise
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
		return (NULL);
	new_node->n = value;
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	new_node->parent = parent;
	parent->left = new_node;
	return (new_node);
}
