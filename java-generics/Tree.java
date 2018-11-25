import java.util.*;

public class Tree<T>{
    TreeNode<T> root;
    TreeNode<T> getInsertPos(TreeNode<T> root)
    {
        Queue<TreeNode<T>> traversalQueue = new LinkedList<TreeNode<T>>();
        traversalQueue.add(root);
        while(!traversalQueue.isEmpty())
        {
            TreeNode<T> temp = traversalQueue.element();
            traversalQueue.remove();
            if(temp.getLeft() == null) {
            return temp;
        }
        else
            traversalQueue.add(temp.getLeft());
        if(temp.getRight() == null) {
            return temp;
        }
        else
            traversalQueue.add(temp.getRight());
        }
        return null;
    }

    public Tree()
    {
        root = null;
    }

    public void insertNode(T node)
    {
        TreeNode<T> newNode = new TreeNode<T>(node);
        if(root == null) {
            root = newNode;
        }
        else {
            TreeNode<T> insertAt = getInsertPos(root);
            if(insertAt == null) {
                System.out.println("insertion failed");
            }
            if(insertAt.getLeft() == null)
                insertAt.setLeft(newNode);
            else if(insertAt.getRight() == null)
                insertAt.setRight(newNode);
        }
    }

    public void printTree()
    {
        Queue<TreeNode<T>> traversalQueue = new LinkedList<>();
        traversalQueue.add(root);
        while(!traversalQueue.isEmpty())
        {
            TreeNode<T> temp = traversalQueue.element();
            System.out.println(temp.getData());
            traversalQueue.remove();
            if(temp.getLeft() != null) {
                traversalQueue.add(temp.getLeft()); 
            }

            if(temp.getRight() != null) {
                traversalQueue.add(temp.getRight());
            }
        }
    }

    public void searchTree(T nodeToFind)
    {
        Queue<TreeNode<T>> traversalQueue = new LinkedList<>();
        traversalQueue.add(root);
        while(!traversalQueue.isEmpty())
        {
            TreeNode<T> temp = traversalQueue.element();
            if(temp.getData() == nodeToFind) {
                System.out.println("Found"+nodeToFind);
                return;
            }
            traversalQueue.remove();
            if(temp.getLeft() != null) {
                traversalQueue.add(temp.getLeft()); 
            }

            if(temp.getRight() != null) {
                traversalQueue.add(temp.getRight());
            }
        }
        System.out.println("NotFound"+nodeToFind);
    }
}