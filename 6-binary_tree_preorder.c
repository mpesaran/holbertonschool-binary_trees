#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse a binary tree using a preorder method
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || *func == NULL)
		return;
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, *func);
		binary_tree_preorder(tree->right, *func);
	}
}
