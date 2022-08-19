using System;
public class BST
{
    public class Node
    {
        public int value;
        public Node left;
        public Node right;

        public Node(int val)
        {
            value = val;
        }
    }

    public static Node insert(Node root, int val)
    {
        if(root == null)
        {
            root = new Node(val);
            return root;
        }

        if(root.value > val)
        {
            root.left = insert(root.left, val);
        }
        else
        {
            root.right = insert(root.right, val);
        }

        return root;
    }

    public static void inorder(Node root)
    {
        if(root == null) return;
        
        inorder(root.left);
        Console.Write(root.value + " ");
        inorder(root.right);
    }

    public static bool search(Node root, int val)
    {
        if(root == null) 
            return false;

        if(root.value == val) 
            return true;
        else if(root.value > val)
            return search(root.left, val);
        else 
            return search(root.right, val);
    }


    public static void Main(string[] args)
    {
        int[] values = {1,7,5,4,10,9,2,8,15};
        bool isFound;
        Node root = null;

        for(int i=0; i<values.Length; i++)
        {
            root = insert(root, values[i]);
        }

        inorder(root);

        isFound = search(root, 100);
        Console.WriteLine(isFound);

    }
}