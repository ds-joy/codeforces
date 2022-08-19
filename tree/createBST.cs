using System;

public class BST
{
    public class Node 
    {
        public int value;
        public Node left;
        public Node right;

        public Node(int data)
        {
            value = data;
        }
    }

    public static  Node insert(Node root, int val)
    {
        if(root == null) {
            root = new Node(val);
            return root;
        }
        if(root.value > val) {
            root.left = insert(root.left, val);
        }
        else {
            root.right = insert(root.right, val);
        }
        return root;
    }

    public static void inorder(Node root)
    {
        if(root == null)
        {
            return;
        }
        inorder(root.left);
        Console.Write(root.value + " ");
        inorder(root.right);
    }
    public static void Main(string[] args)
    {
        int[] values = {10,5,3,4,2,7,1};

        Node root = null;

        for (int i=0; i<values.Length; i++)
        {
            root = insert(root, values[i]);
        }

        inorder(root);
    }
}