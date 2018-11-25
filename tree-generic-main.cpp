

#include <iostream>
#include "tree-generic.h"
#include "tree-generic.cpp"
template class Tree_node<int>;
//using namespace std;

int main(int argc, char const *argv[])
{
    Tree_node<int> root(2);
    std::cout<<root.tnode_get_data();
    return 0;
}
