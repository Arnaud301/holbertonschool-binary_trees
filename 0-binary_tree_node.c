#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_n = malloc(sizeof(binary_tree_t));

	if (new_n == NULL)
		return (NULL);

	node_n->n = value;
	node_n->parent = parent;
	node_n->left = NULL;
	node_n->right = NULL;

	return (node_n);
}
