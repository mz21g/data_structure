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
    printf("����������ҵ����ڼ���λ�õ�ֵ: ");
    scanf_s("%d", &k);
    cout << endl;

    int key = search_reverse_k_loc(head, k);
    printf("������%d��λ�õ�ֵ��: %d\n", k, key);

    return 0;
}