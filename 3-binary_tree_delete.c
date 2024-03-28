#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: This function deletes an entire binary tree starting from the
 * root node specified by 'tree'. If 'tree' is NULL, the function does nothing.
 */



void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return; /* Do nothing if the tree is NULL */
	}

	/* Delete the left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}
