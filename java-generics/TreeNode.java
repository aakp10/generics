public class TreeNode<T>{
    T data;
    TreeNode<T> left;
    TreeNode<T> right;
    public TreeNode(T data)
    {
        this.data = data;
        this.left = null;
        this.right = null;
    }

    public T getData()
    {
        return this.data;
    }

    public TreeNode<T> getRight()
    {
        return right;
    }
    public void setRight(TreeNode<T> rightChild)
    {
        right = rightChild;
    }

    public TreeNode<T> getLeft()
    {
        return left;
    }

    public void setLeft(TreeNode<T> leftChild)
    {
        left = leftChild;
    }
} 