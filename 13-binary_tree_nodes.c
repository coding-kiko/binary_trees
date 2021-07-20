#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: pointer to tree root
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		nodes++;
		return (nodes);
	}
	nodes = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);
	return (nodes);
}
