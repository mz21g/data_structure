//
// Created by yanzhichen on 2021/11/15.
//

#ifndef DATA_STRUCTURE_LINK_LIST_H
#define DATA_STRUCTURE_LINK_LIST_H

const unsigned int NUM = 10; // 链表元素的个数
const unsigned int MAX_UINT = 10; //链表元素的最大值

struct link_list{
    int data;
    link_list* next;
};

// 随机生成一个链表
link_list* gene_link_list(int num);
// 展示当前链表元素
void show(link_list* head);
// 查询倒数第k个元素的值
int search_reverse_k_loc(link_list* head, int k);

// TODO:(chenyanzhi): 需要实现的功能
// 在第k个位置插入一个元素
int insert(int val, int k);
// 删除第k个位置的元素
int remove(int k);


#endif //DATA_STRUCTURE_LINK_LIST_H
