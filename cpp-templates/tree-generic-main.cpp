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
    cout<<"INT\n";
    cout<<"enter number of ele present in tree\n";
    cin>>count;
    while(count--)
    {
        //read one ele
        int ele;
        cout<<"Enter int\n";
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
    cout<<"FLOAT\n";
    cout<<"enter number of float ele present in tree\n";
    cin>>count;
    while(count--)
    {
        //read one ele
        float ele;
        cout<<"enter floats\n";
        cin>>ele;
        //keep inserting
        my_float_tree.tree_insert_node(ele);
    }

    //print
    cout<<"PRINTING\n";
    my_float_tree.print_tree();
    //search true
    cout<<"enter ele to search\n";
    cin>>ele_to_search;
    my_float_tree.search_tree(ele_to_search);
    cout<<"enter ele to search\n";
    cin>>ele_to_search;
    my_float_tree.search_tree(ele_to_search);
}

struct area{
    int length;
    float breadth;
};

bool operator ==(struct area a, struct area b) {
    return (a.length == b.length) && (a.breadth == b.breadth);
}


std::ostream& operator <<(std::ostream &o, struct area a) {
    return o << "length: " << a.length << "\ty: " << a.breadth << std::endl;
}
void
test_area_tree()
{
    //get input;
    int count;
    struct area  ele_to_search;
    Tree<struct area> my_struct_tree;
    cout<<"STRUCT";
    cout<<"enter number of ele present in tree\n";
    cin>>count;
    while(count--)
    {
        //read one ele
        cout<<"enter length breadth\n";
        struct area ele;
        cin>>ele.length>>ele.breadth;
        //keep inserting
        my_struct_tree.tree_insert_node(ele);
    }

    //print
    cout<<"printing tree\n";
    my_struct_tree.print_tree();
    //search true
    cout<<"enter ele to search\n";
    cin>>ele_to_search.length>>ele_to_search.breadth;
    my_struct_tree.search_tree(ele_to_search);
}

int main(int argc, char const *argv[])
{
    //Test float
    test_float_tree();
    //Test int
    test_int_tree();
    //test custom datatype.
    test_area_tree();
    return 0;
}