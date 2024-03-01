#include "binary_trees.h"
/**
 * binary_tree_node - A function to create a binary tree node
 * @parent: The parent node
 * @value: THe key to the node being created
 * Return: A pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeTo;

	nodeTo =  malloc(sizeof(binary_tree_t));
	if (nodeTo == NULL)
		return (NULL);

	nodeTo->n = value;
	nodeTo->parent = parent;
	nodeTo->left = NULL;
	nodeTo->right = NULL;

	return (nodeTo);
}
