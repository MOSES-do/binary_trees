#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to root node of tree to measure the height.
 * Return: 0 if tree is NULL, else tree height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t le, rt;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	le = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);

	if (le > rt)
		return (le + 1);
	else
		return (rt + 1);
}
