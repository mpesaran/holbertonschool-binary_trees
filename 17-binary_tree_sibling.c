#include "binary_trees.h"
/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
