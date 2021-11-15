//
// Created by yanzhichen on 2021/11/15.
//
#include <link_list/link_list.h>
#include <iostream>
using namespace std;

int main(){
    int num, k, val;
    printf("��������������ɵ������С: ");
    cin >> num;
    link_list* head = gene_link_list(num);
    show(head);

    int link_list_length = get_length(head);
    printf("��ǰ����ĳ���Ϊ: %d\n", link_list_length);

    printf("����������ҵ����ڼ���λ�õ�ֵ: ");
    cin >> k;
    is_valid_k(head, k);
    int key = search_reverse_k_loc(head, k);
    printf("������%d��λ�õ�ֵ��: %d\n", k, key);

    printf("���������ȡ�ڼ���λ�õĽ��: ");
    cin >> k;
    is_valid_k(head, k);
    link_list* node = get_node(head, k);
    printf("��ȡ��%d��λ�õĽ�㣬�ý��Ԫ�ص�ֵ��: %d\n", k, node->data);

    printf("���������ڵڼ���λ�ò����½��(�����ֵС��1��������ͷ���룬�������������������β����): ");
    cin >> k;
    printf("�����½���ֵ: ");
    cin >> val;
    insert(head, val, k);
    show(head);

    printf("��������ɾ���ڼ���λ�õĽ��(�����ֵС��1��ɾ������ͷ��㣬������������ɾ�������β���): ");
    cin >> k;
    remove(head, k);
    show(head);

    return 0;
}