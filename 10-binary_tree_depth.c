#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depht of a node in binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is null, otherwise depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->parent != NULL)
	{
		count = binary_tree_depth(tree->parent) + 1;
	}
	return (count);
}
