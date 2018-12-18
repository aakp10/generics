#ifndef __TREE_GENERIC_H__
#define __TREE_GENERIC_H__

template <typename TREE_ELEMENT>
class Tree_node{

    Tree_node *left;
    Tree_node *right;
    TREE_ELEMENT data;
    public:
    Tree_node(TREE_ELEMENT data_v): left(nullptr), right(nullptr), data(data_v) {}
    TREE_ELEMENT tnode_get_data();
    void tnode_set_right(Tree_node<TREE_ELEMENT> *right_child);
    void tnode_set_left(Tree_node<TREE_ELEMENT> *left_child);
    Tree_node *get_left(){return left;}
    Tree_node *get_right(){return right;}
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

#endif 