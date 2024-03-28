#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as right child of another node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 * Return: pointer to the new node or NULL on failure/parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		node->right->parent = node;
		parent->right = node;
		node->parent = parent;
	}
	else
	{
		node->right = NULL;
		parent->right = node;
		node->parent = parent;
	}

	node->n = value;
	node->left = NULL;

	return (node);
}
