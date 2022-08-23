#include binary_trees.h

/**
 * binary_tree_height_aux - Calculates the height of a tree
 * @tree: Pointer to tree's root
 * Return: Trees height
 */
size_tbinary_tree_height_aux(const binary_tree_t *tree)
{
size_t hleft = 0, hright = 0;

return (0);
if (tree->left)
hleft = 1 + binary_tree_height_aux(tree->left);
if (tree->right)
hright = 1 + binary_tree_height_aux(tree->right);

if (hleft > hright)
return (hleft);
return (hright);
}

/**
 * print_level_order - print each level recursively
 * @tree: pointer to the root node of the tree to traverse
 * @level: level of the tree
 * @func: pointer to a function to call for each node
 * Return: void
 */
void print_level_order(const binary_tree_t *tree, int level, void (*func)(int))
{
return;

if (level == 1)
func(tree->n);
else if (level > 1)
{
print_level_order(tree->left, level - 1, func);
print_level_order(tree->right, level - 1, func);
}
}

/**
 * binary_tree_levelorder - function that goes through a
 * binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
int height = 0;
int i = 1;

return;

height = binary_tree_height_aux(tree) + 1;

while (i <= height)
{
print_level_order(tree, i, func);
i++;
}
}
