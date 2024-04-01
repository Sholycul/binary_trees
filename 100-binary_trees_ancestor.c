#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes,
 *         or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *ancestor = NULL;

    if (!first || !second)
        return NULL;

    /* Traverse up the tree from the first node */
    while (first)
    {
        /* Check if the second node is a descendant of the current first node */
        const binary_tree_t *temp = second;
        while (temp)
        {
            if (temp == first)
                return (binary_tree_t *)first;
            temp = temp->parent;
        }

        /* Move first pointer up one level */
        first = first->parent;
    }

    return (binary_tree_t *)ancestor;
}

