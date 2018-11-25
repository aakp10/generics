
#include <iostream>
#include "tree-generic.h"
#include "tree-generic.cpp"

template class Tree_node<int>;
using namespace std;
void
test_int_tree()
{
    //get input;
    int count, ele_to_search;
    Tree<int> my_int_tree;
    cout<<"enter number of ele present in tree\n";
    cin>>count;
    while(count--)
    {
        //read one ele
        int ele;
        cin>>ele;
        //keep inserting
        my_int_tree.tree_insert_node(ele);
    }

    //print
    my_int_tree.print_tree();
    //search true
    cout<<"enter ele to search\n";
    cin>>ele_to_search;
    my_int_tree.search_tree(ele_to_search);
    cout<<"enter ele to search\n";
    cin>>ele_to_search;
    my_int_tree.search_tree(ele_to_search);
}

void
test_float_tree()
{
    //get input;
    int count;
    float ele_to_search;
    Tree<float> my_float_tree;
    cout<<"enter number of ele present in tree\n";
    cin>>count;
    while(count--)
    {
        //read one ele
        float ele;
        cin>>ele;
        //keep inserting
        my_float_tree.tree_insert_node(ele);
    }

    //print
    my_float_tree.print_tree();
    //search true
    cout<<"enter ele to search\n";
    cin>>ele_to_search;
    my_float_tree.search_tree(ele_to_search);
    cout<<"enter ele to search\n";
    cin>>ele_to_search;
    my_float_tree.search_tree(ele_to_search);
}


int main(int argc, char const *argv[])
{
    //Test float
    test_float_tree();
    //Test int
    test_int_tree();
    //Test {length, breadth}
    //Test string
    return 0;
}
