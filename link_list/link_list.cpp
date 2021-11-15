//
// Created by yanzhichen on 2021/11/15.
//

#include "link_list.h"
#include <iostream>
using namespace std;

void is_valid_k(link_list* head, int k){
    int length = get_length(head);
    if (k < 0 || k > length){
        cout << "Ô½½ç" << endl;
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