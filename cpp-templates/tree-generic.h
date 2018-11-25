#ifndef __TREE_GENERIC_H__
#define __TREE_GENERIC_H__

template <typename TREE_ELEMENT>
class Tree_node{
    public:
    Tree_node *left;
    Tree_node *right;
    TREE_ELEMENT data;
    
    Tree_node(TREE_ELEMENT data_v): left(nullptr), right(nullptr), data(data_v) {}
    TREE_ELEMENT tnode_get_data();
    void tnode_set_right(Tree_node<TREE_ELEMENT> *right_child);
    void tnode_set_left(Tree_node<TREE_ELEMENT> *left_child);
};

template <typename TREE_TYPE>
class Tree{
    Tree_node<TREE_TYPE> *root;
    Tree_node<TREE_TYPE> *tree_get_insert_pos(Tree_node<TREE_TYPE> *root);
    public:
    Tree(): root{nullptr}{}
    void tree_insert_node(TREE_TYPE node);
    void print_tree();
    void search_tree(TREE_TYPE node_to_find);
};


/*
    FOR TEST
class Tree_node{
    Tree_node *left;
    Tree_node *right;
    int data;
    public:
    Tree_node(int data_v): left(nullptr), right(nullptr), data(data_v) {}
    int tnode_get_data();
    int tnode_set_right(Tree_node *right_child);
    int tnode_set_left(Tree_node *left_child);
};*/


#endif 
