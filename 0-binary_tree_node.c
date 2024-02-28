#include "binary_trees.h"
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
