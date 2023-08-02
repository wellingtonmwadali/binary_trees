# Binary Tree README

![Binary Tree](binary_tree.jpg)

## Table of Contents
- [Introduction](#introduction)
- [Difference between Binary Tree and Binary Search Tree](#difference-between-binary-tree-and-binary-search-tree)
- [Time Complexity Gain compared to Linked Lists](#time-complexity-gain-compared-to-linked-lists)
- [Depth, Height, and Size of a Binary Tree](#depth-height-and-size-of-a-binary-tree)
- [Traversal Methods in Binary Tree](#traversal-methods-in-binary-tree)
- [Types of Binary Trees](#types-of-binary-trees)

## Introduction
A binary tree is a fundamental data structure used in computer science to organize data in a hierarchical manner. It consists of nodes, where each node can have at most two children, referred to as the left child and the right child. The topmost node of the tree is called the root.

## Difference between Binary Tree and Binary Search Tree
The key difference between a binary tree and a Binary Search Tree (BST) lies in their organization and constraints. While both are binary trees, a BST follows a specific rule: the value of the nodes in the left subtree of any node must be less than or equal to the value of the node itself, and the value of the nodes in the right subtree must be greater than or equal to the node's value. This property allows for efficient searching, insertion, and deletion operations with a time complexity of O(log n) on average, making BSTs highly suitable for data retrieval tasks.

## Time Complexity Gain compared to Linked Lists
Compared to linked lists, binary trees offer significant time complexity gains, especially in search and retrieval operations. In linked lists, searching for a specific element requires traversing the list sequentially, resulting in a time complexity of O(n). In contrast, binary trees allow for faster search operations, with a time complexity of O(log n) in balanced trees. This logarithmic gain becomes more pronounced as the number of elements (n) grows, making binary trees more efficient for large datasets.

## Depth, Height, and Size of a Binary Tree
- **Depth of a Node:** The depth of a node in a binary tree is the distance from the root node to that particular node.
- **Height of a Node:** The height of a node is the distance from that node to the deepest leaf node in its subtree.
- **Height of a Binary Tree:** The height of a binary tree is the height of its root node, representing the longest path from the root to a leaf node.
- **Size of a Binary Tree:** The size of a binary tree is the total number of nodes in the tree, including the root and all internal and leaf nodes.

## Traversal Methods in Binary Tree
Traversal refers to visiting each node in a binary tree in a specific order. The most common traversal methods are:
- **In-Order Traversal:** Visit left subtree, current node, then right subtree.
- **Pre-Order Traversal:** Visit current node, left subtree, then right subtree.
- **Post-Order Traversal:** Visit left subtree, right subtree, then the current node.

## Types of Binary Trees
- **Complete Binary Tree:** All levels are filled from left to right, except possibly the last level.
- **Full Binary Tree:** Each node has either zero or two children (no nodes with only one child).
- **Perfect Binary Tree:** Both a complete and a full binary tree, with all levels filled, and each node having either zero or two children.
- **Balanced Binary Tree:** The height difference between the left and right subtrees of any node is small, ensuring efficient search and insertion operations.

Binary trees have various applications in computer science and data processing, providing efficient data organization and access for various tasks. Understanding their properties and traversal methods is essential for solving problems and designing efficient algorithms.
