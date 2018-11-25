

#include <iostream>
#include "tree-generic.h"
//using namespace std;

int main(int argc, char const *argv[])
{
    Tree_node<int> root(2);
    std::cout<<root.tnode_get_data();
    return 0;
}
