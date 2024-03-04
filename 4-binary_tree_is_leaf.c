#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if the node is a leaf
 * @node: Node to be checked
 * Return: 1 if node is a leaf 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
