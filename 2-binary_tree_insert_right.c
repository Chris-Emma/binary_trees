#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to insert a node as a right child
 * @parent: The Parent to new node
 * @value: value to be added
 * Return: pointer to created node or NULL on ailure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_To;

	node_To = malloc(sizeof(binary_tree_t));
	if (node_To == NULL)
		return (NULL);

	node_To->n = value;
	node_To->parent = parent;
	node_To->left = NULL;
	node_To->right = NULL;
	if (parent == NULL)
	{
		free(node_To);
		return (NULL);
	}
	if (parent->right == NULL)
		parent->right = node_To;
	else
	{
		node_To->right = parent->right;
		parent->right = node_To;
		node_To->right->parent = node_To;
	}
	return (node_To);
}
