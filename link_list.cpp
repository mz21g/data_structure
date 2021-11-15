//
// Created by yanzhichen on 2021/11/15.
//

#include "link_list.h"
#include <iostream>

using namespace std;

const int NUM = 10;

struct link_list{
    int data;
    link_list* next;
};

link_list* gene_link_list(int num){
    auto* head = new link_list;
    head->data = -1;
    head->next = nullptr;
    link_list* current = head;
    srand(time(NULL));
    for (int i = 0; i < 10; i++){
        int num = rand() % 100;
        auto* new_node = new link_list;
        new_node->data = num;
        new_node->next = nullptr;
        current->next = new_node;
        current = current->next;
    }
    return head;
}



int main(){
    link_list* head = gene_link_list(NUM);

    return 0;
}
