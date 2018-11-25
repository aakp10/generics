import java.util.Scanner;

public class GenericTree{
    public static void main(String args[])
    {
        //test int
        Tree<Integer> myIntTree = new Tree<>();
        int eleToSearch, count;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of input");
        count = sc.nextInt();
        while(count > 0 )
        {
            int ele = sc.nextInt();
            myIntTree.insertNode(ele);
            count--;
        }
        myIntTree.printTree();
        System.out.println("Enter the number to search");
        eleToSearch = sc.nextInt();
        myIntTree.searchTree(eleToSearch);
        //test float
        Tree<Float> myFloatTree = new Tree<>();
        float floatToSearch;
        System.out.println("Enter the number of input");
        count = sc.nextInt();
        while(count > 0)
        {
            float ele = sc.nextFloat();
            myFloatTree.insertNode(ele);
            count--;
        }
        myFloatTree.printTree();
        System.out.println("Enter the number of input");
        floatToSearch = sc.nextFloat();
        myFloatTree.searchTree(floatToSearch);
    }
}