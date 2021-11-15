//
// Created by yanzhichen on 2021/11/15.
//
#include <link_list/link_list.h>
#include <iostream>
using namespace std;

int main(){
    int num, k, val;
    printf("输入你想随机生成的链表大小: ");
    cin >> num;
    link_list* head = gene_link_list(num);
    show(head);

    int link_list_length = get_length(head);
    printf("当前链表的长度为: %d\n", link_list_length);

    printf("输入你想查找倒数第几个位置的值: ");
    cin >> k;
    is_valid_k(head, k);
    int key = search_reverse_k_loc(head, k);
    printf("倒数第%d个位置的值是: %d\n", k, key);

    printf("输入你想获取第几个位置的结点: ");
    cin >> k;
    is_valid_k(head, k);
    link_list* node = get_node(head, k);
    printf("获取第%d个位置的结点，该结点元素的值是: %d\n", k, node->data);

    printf("输入你想在第几个位置插入新结点(输入的值小于1则在链表开头插入，大于链表长度则在链表结尾插入): ");
    cin >> k;
    printf("输入新结点的值: ");
    cin >> val;
    insert(head, val, k);
    show(head);

    printf("输入你想删掉第几个位置的结点(输入的值小于1则删除链表开头结点，大于链表长度则删除链表结尾结点): ");
    cin >> k;
    remove(head, k);
    show(head);

    return 0;
}