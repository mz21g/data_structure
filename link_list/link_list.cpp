//
// Created by yanzhichen on 2021/11/15.
//

#include "link_list.h"
#include <iostream>
using namespace std;

void is_valid_k(link_list* head, int k){
    int length = get_length(head);
    if (k < 0 || k > length){
        cout << "越界" << endl;
        return;
    }
}

int get_length(link_list* head){
    int count = 0;
    while (head->next){
        head = head->next;
        count++;
    }
    return count;
}

link_list* gene_link_list(int num){
    auto* head = new link_list;
    head->data = -1; head->next = nullptr;
    link_list* current = head;
    srand(time(NULL));
    for (int i = 0; i < num; i++){
        auto* new_node = new link_list;
        new_node->data = rand() % MAX_UINT; new_node->next = nullptr;
        current->next = new_node;
        current = current->next;
    }
    return head;
}

void show(link_list* head){
    link_list* current_node = head->next;
    while(current_node->next){
        cout << current_node->data << " ";
        current_node = current_node->next;
    }
    cout << current_node->data << endl;
}

int search_reverse_k_loc(link_list* head, int k){
    link_list* p = head->next;
    link_list* q = head->next;
    int count = 1;
    while (p->next){
        p = p->next;
        count++;
        if (count > k)
            q = q->next;
    }
    return q->data;
}

link_list* get_node(link_list* head, int k){
    while(k){
        head = head->next;
        k--;
    }
    return head;
}

void insert(link_list* head, int val, int k){
    auto* new_node = new link_list;
    new_node->data = val;
    new_node->next = nullptr;
    int length = get_length(head);
    if (k < 1){
        new_node->next = head->next;
        head->next = new_node;
    } else if (1 <= k && k <= length){
        link_list* node = get_node(head, k-1);
        new_node->next = node->next;
        node->next = new_node;
    } else{
        link_list* node = get_node(head, length);
        node->next = new_node;
    }
}

void remove(link_list* head, int k){
    int length = get_length(head);
    auto* delete_node = new link_list;
    if (k < 1){
        delete_node = head->next;
        head->next = delete_node->next;
    } else if (1 <= k && k <= length){
        link_list* node = get_node(head, k-1);
        delete_node = node->next;
        node->next = delete_node->next;
    } else {
        link_list* node = get_node(head, length-1);
        delete_node = node->next;
        node->next = nullptr;
    }
    delete delete_node;
}


//int main(){
//    int num, k, val;
//    printf("输入你想随机生成的链表大小: ");
//    cin >> num;
//    link_list* head = gene_link_list(num);
//    show(head);
//
//    int link_list_length = get_length(head);
//    printf("当前链表的长度为: %d\n", link_list_length);
//
//    printf("输入你想查找倒数第几个位置的值: ");
//    cin >> k;
//    is_valid_k(head, k);
//    int key = search_reverse_k_loc(head, k);
//    printf("倒数第%d个位置的值是: %d\n", k, key);
//
//    printf("输入你想获取第几个位置的结点: ");
//    cin >> k;
//    is_valid_k(head, k);
//    link_list* node = get_node(head, k);
//    printf("获取第%d个位置的结点，该结点元素的值是: %d\n", k, node->data);
//
//    printf("输入你想在第几个位置插入新结点(输入的值小于1则在链表开头插入，大于链表长度则在链表结尾插入): ");
//    cin >> k;
//    printf("输入新结点的值: ");
//    cin >> val;
//    insert(head, val, k);
//    show(head);
//
//    printf("输入你想删掉第几个位置的结点(输入的值小于1则删除链表开头结点，大于链表长度则删除链表结尾结点): ");
//    cin >> k;
//    remove(head, k);
//    show(head);
//
//    return 0;
//}
