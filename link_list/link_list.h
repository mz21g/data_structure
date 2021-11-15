//
// Created by yanzhichen on 2021/11/15.
//

#ifndef DATA_STRUCTURE_LINK_LIST_H
#define DATA_STRUCTURE_LINK_LIST_H
const unsigned int MAX_UINT = 10; //链表元素的最大值

struct link_list{
    int data;
    link_list* next;
};

// 随机生成一个链表
link_list* gene_link_list(int num);

// 在第k个位置插入一个元素
void insert(link_list* head, int val, int k);

// 删除第k个位置的元素
void remove(link_list* head, int k);

// 查询倒数第k个元素的值
int search_reverse_k_loc(link_list* head, int k);

// 查找第k个位置的节点
link_list* get_node(link_list* head, int k);

// 校验输入的值是否合法(大于1,小于链表长度)
void is_valid_k(link_list* head, int k);

// 展示当前链表元素
void show(link_list* head);

// 获取链表长度
int get_length(link_list* head);


#endif //DATA_STRUCTURE_LINK_LIST_H
