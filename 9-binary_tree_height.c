#include "binary_trees.h"
/**
 * binary_tree_height - function that returnns the height of a binary tree
 * @tree: Tree to be used
 * Return: height of tree or NULL if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right, padding;

	if (tree == NULL)
		return (0);
	padding = 0;
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		padding = 1;

	if (height_left > height_right)
		return (padding + height_left);
	return (padding + height_right);
}
