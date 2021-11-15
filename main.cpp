//
// Created by yanzhichen on 2021/11/15.
//
#include <link_list/link_list.h>
#include <iostream>
using namespace std;

int main(){
    link_list* head = gene_link_list(NUM);
    show(head);
    int k;
    printf("输入你想查找倒数第几个位置的值: ");
    scanf_s("%d", &k);
    cout << endl;

    int key = search_reverse_k_loc(head, k);
    printf("倒数第%d个位置的值是: %d\n", k, key);

    return 0;
}