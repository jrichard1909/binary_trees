#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = right_node;
		right_node->right = parent->right;
	}
	parent->right = right_node;

	return (right_node);
}
