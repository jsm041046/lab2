#include <stdio.h>
int main()
{
    int i; //������ i ����
    int *ptr; //������ ������ ptr ����
    int **dptr; //������ ���������� dptr ����

    i = 1234; //i�� 1234 ����
    
    printf("[checking values before ptr = &i] \n"); //�ȳ� : �����Ϳ� ������ �ּҸ� �Է��ϱ� ���� �� üũ
    printf("value of i == %d\n", i); //i �� ���
    printf("address of i == %p\n", &i); //i �ּҰ� ���
    printf("value of ptr == %p\n", ptr); //ptr �� ���
    printf("address of ptr == %p\n", &ptr); //ptr �ּҰ� ���

    ptr = &i; /* ptr is now holding the address of i */ //������ ptr�� ������ i�� �ּҸ� �Է�

    printf("\n[checking values after ptr = &i] \n"); //�ȳ� : �����Ϳ� ������ �ּҸ� �Է��� �� �� üũ
    printf("value of i == %d\n", i); //i �� ���
    printf("address of i == %p\n", &i); //i �ּҰ� ���
    printf("value of ptr == %p\n", ptr); //ptr �� ���
    printf("address of ptr == %p\n", &ptr); //ptr �ּҰ� ���
    printf("value of *ptr == %d\n", *ptr); //ptr ���� ���

    dptr = &ptr; /* dptr is now holding the address of ptr */ //���������� dptr�� ������ ptr�� �ּҰ��� �Է�

    printf("\n[checking values after dptr = &ptr] \n"); //�ȳ� : ���������Ϳ� �������� �ּҸ� �Է��� �� �� üũ
    printf("value of i == %d\n", i); //i �� ���
    printf("address of i == %p\n", &i); //i �ּҰ� ���
    printf("value of ptr == %p\n", ptr); //ptr �� ���
    printf("address of ptr == %p\n", &ptr); //ptr �ּҰ� ���
    printf("value of *ptr == %d\n", *ptr); //ptr ���� ���
    printf("value of dptr == %p\n", dptr); //dptr �� ���
    printf("address of ptr == %p\n", &dptr); //dptr �ּҰ� ���
    printf("value of *dptr == %p\n", *dptr); //dptr ���� ���
    printf("value of **dptr == %d\n", **dptr); //dptr �������� ���

    *ptr = 7777; /* changing the value of *ptr */ //ptr�������� 7777�� ����

    printf("\n[after *ptr = 7777] \n"); //�ȳ� : �������� 7777�� ������ ��
    printf("value of i == %d\n", i); //i �� ���
    printf("value of *ptr == %d\n", *ptr); //ptr ���� ���
    printf("value of **dptr == %d\n", **dptr); //dptr �������� ���

    **dptr = 8888; /* changing the value of **dptr */ //dptr ������������ 8888�� ����

    printf("\n[after **dptr = 8888] \n"); //�ȳ� : ������������ 7777�� ������ ��
    printf("value of i == %d\n", i); //i�� ���
    printf("value of *ptr == %d\n", *ptr); //ptr ���� ���
    printf("value of **dptr == %d\n", **dptr); //dptr ���� ���� ���

    printf("[----- ������ 2021041046 -----]"); //�̸�, �й� ���
    return 0;
}

//��� : �����Ϳ� ������������ �ּҰ��� �������� �ٲپ� ����غ��� �ּҰ��� ����, ���������� ������ �ִ� ������ ���� ���α׷��̴�.