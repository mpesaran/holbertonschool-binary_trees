#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is null, otherwise size of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (left + right + 1);

	return (left + right);
}
