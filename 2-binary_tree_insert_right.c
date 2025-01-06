#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value of the new node
 *
 * Return: pointer to the new node, NULL if failure or parent is null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	if (!parent)
	{
		free(new_node);
		return (NULL);
	}
	if (parent->right == NULL)
	{
		new_node->parent = parent;
		new_node->right = NULL;
		parent->right = new_node;
	}
	else
	{
		new_node->parent = parent;
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	new_node->n = value;
	new_node->left = NULL;

	return (new_node);
}
