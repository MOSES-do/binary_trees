#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left child of another node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 * Return: pointer to the new node or NULL on failure/parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		node->left->parent = node;
		parent->left = node;
		node->parent = parent;
	}
	else
	{
		node->left = NULL;
		parent->left = node;
		node->parent = parent;
	}

	node->n = value;
	node->right = NULL;

	return (node);
}
