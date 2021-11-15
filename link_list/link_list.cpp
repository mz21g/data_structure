//
// Created by yanzhichen on 2021/11/15.
//

#include "link_list.h"
#include <iostream>
using namespace std;


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
    if (k <= NUM){
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
    } else {
        cout << "Ô½½ç" << endl;
        return 0;
    }
}