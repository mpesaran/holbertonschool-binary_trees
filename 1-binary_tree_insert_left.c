#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: value of the new node
 *
 * Return: pointer to the new node, NULL if failure or parent is null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	if (!parent)
		return (NULL);
	if (parent->left == NULL)
	{
		new_node->parent = parent;
		new_node->left = NULL;
		parent->left = new_node;
	}
	else
	{
		new_node->parent = parent;
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	new_node->n = value;
	new_node->right = NULL;

	return (new_node);
}
