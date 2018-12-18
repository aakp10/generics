#include <iostream>
#include "tree-generic.h"
#include <queue>
using namespace std;
template <typename TREE_ELEMENT>
TREE_ELEMENT 
Tree_node<TREE_ELEMENT>::tnode_get_data()
{
    return data;
}

template <typename TREE_ELEMENT>
void
Tree_node<TREE_ELEMENT>::tnode_set_right(Tree_node<TREE_ELEMENT> *right_child)
{
    right = right_child;
}

template <typename TREE_ELEMENT>
void
Tree_node<TREE_ELEMENT>::tnode_set_left(Tree_node<TREE_ELEMENT> *left_child)
{
    left = left_child;
}

/**
 * Tree class' functions
 */

template <typename TREE_TYPE>
Tree_node<TREE_TYPE>*
Tree<TREE_TYPE>::tree_get_insert_pos(Tree_node<TREE_TYPE> *root)
{
    queue<Tree_node<TREE_TYPE>* > traversal_queue;
    traversal_queue.push(root);
    while(!traversal_queue.empty())
    {
        Tree_node<TREE_TYPE> *temp = traversal_queue.front();
        traversal_queue.pop();
        if(!temp->get_left()) {
            return temp;
        }
        else
            traversal_queue.push(temp->get_left());
        if(!temp->get_right()) {
            return temp;
        }
        else
            traversal_queue.push(temp->get_right());
    }
    return nullptr;
}

template <typename TREE_TYPE>
void
Tree<TREE_TYPE>::tree_insert_node(TREE_TYPE node)
{
    Tree_node<TREE_TYPE> *new_node =  new Tree_node<TREE_TYPE>(node);
    if (!root)
        root = new_node;
    else {
        Tree_node<TREE_TYPE> *insert_at = tree_get_insert_pos(root);
        if(!insert_at) {
            std::cout<<"insertion failed";
        }
        if(!insert_at->get_left())
            insert_at->tnode_set_left(new_node);
        else if(!insert_at->get_right())
            insert_at->tnode_set_right(new_node);
    }        
}

template <typename TREE_TYPE>
void
Tree<TREE_TYPE>::print_tree()
{
    queue<Tree_node<TREE_TYPE>*> traversal_queue;
    traversal_queue.push(root);
    while(!traversal_queue.empty())
    {
        Tree_node<TREE_TYPE> *temp = traversal_queue.front();
        std::cout<<temp->tnode_get_data()<<std::endl; //TREE_ELEMENT should have << defined
        traversal_queue.pop();
        if(temp->get_left()) {
            traversal_queue.push(temp->get_left()); 
        }

        if(temp->get_right()) {
            traversal_queue.push(temp->get_right());
        }
    }
}

template <typename TREE_TYPE>
void
Tree<TREE_TYPE>::search_tree(TREE_TYPE node_to_find)
{
    queue<Tree_node<TREE_TYPE>*> traversal_queue;
    traversal_queue.push(root);
    while(!traversal_queue.empty())
    {
        Tree_node<TREE_TYPE> *temp = traversal_queue.front();
        if(node_to_find == temp->tnode_get_data()) {//TREE_ELEMENT should have == defined 
            std::cout<<node_to_find<<"Found";
            return;
        }
        traversal_queue.pop();
        if(temp->get_left()) {
            traversal_queue.push(temp->get_left()); 
        }
        if(temp->get_right()) {
            traversal_queue.push(temp->get_right());
        }
    }
    cout<<node_to_find<<"NOT Found";
}