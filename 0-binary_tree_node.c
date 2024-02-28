#include "binary_trees.h"

/**
 * binary_tree_t - create binary node.
 * @parent - a pointer to the parent of the node to create.
 * @value - the value to put in the node
 * return NULL if an effor ocurrs
 *	otherwise - a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->value = value;
	new->parent = parent;
	new->left = left;
	new->right = right;
	return  (new);
}
