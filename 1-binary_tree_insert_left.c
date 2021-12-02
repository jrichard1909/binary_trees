#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * 
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 * 
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = left_node;
		left_node->left = parent->left;
	}

	parent->left = left_node;

	return (left_node);
}
