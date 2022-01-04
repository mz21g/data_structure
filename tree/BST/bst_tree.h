//
// Created by yanzhichen on 2022/1/4.
//

#ifndef DATA_STRUCTURE_BST_TREE_H
#define DATA_STRUCTURE_BST_TREE_H
#include <iostream>

// 二叉搜索树的构造
struct BST {
    int key;
    BST *left, *parent, *right;
};

// 将关键字插入到BST中
int insert(BST &T, int k, BST* parent=nullptr);

// 构造BST
void creat(BST &t, int arr[], int n);

// 搜索指定关键字对应节点
BST* search(BST &T, int k);

// 搜索关键字最小的节点
BST* bst_minimum(BST &t);

// 搜索关键字最大的节点
BST* bst_maximum(BST &t);


#endif //DATA_STRUCTURE_BST_TREE_H
