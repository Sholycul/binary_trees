#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node.
 *         If node is NULL, the parent is NULL, or node has no sibling, return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL); /* Return NULL if node or parent is NULL */
	}

	if (node->parent->left->n == node->n)
	{
		return (node->parent->right);
		/* Return right child if node is the left child */
	}
	else if (node->parent->right->n == node->n)
	{
		return (node->parent->left);
		/*Return left child if node is the right child*/
	}

	return (NULL); /* Return NULL if node has no parent-child relationship */
}
