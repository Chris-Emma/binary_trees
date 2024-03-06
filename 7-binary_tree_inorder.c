#include "binary_trees.h"
/**
 * binary_tree_inorder - function to use in-order traversal on the tree
 * @tree: This is the tree to be traversed
 * @func: a pointer to function call on each node
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
