#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /*Do nothing if the tree or func is NULL*/
    if (tree == NULL || func == NULL)
        return;
    /*traverse the left subtree in post-order*/
    binary_tree_postorder(tree->left, func);

    /*traverse the right subtree in post-order*/
    binary_tree_postorder(tree->right, func);

    /*Call the function on the data of the current node*/
    func(tree->n);
}

