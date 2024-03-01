#include "binary_trees.h"
/**
 * binary_tree_insert_left -  function to insert a node as a left child
 * @parent: The Parent to new node
 * @value: The value to be added
 * Return: The pointer to created node or NULL on failure of NULL if parent is NUL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
		parent->left = node_To;
	else
	{
		node_To->left = parent->left;
		parent->left = node_To;
		node_To->left->parent = node_To;
	}
	return (node_To);
}
