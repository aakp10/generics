#include <iostream>
#include "tree-generic.h"

template <typename TREE_ELEMENT>
TREE_ELEMENT Tree_node<TREE_ELEMENT>::tnode_get_data()
{
    return data;
}
