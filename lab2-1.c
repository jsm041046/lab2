#include <stdio.h>
int main()
{
    char charType; //������ ���� charType�� ����
    int integerType; //������ ���� integerType�� ����
    float floatType; //�Ǽ��� ���� floatType�� ����
    double doubleType; //8����Ʈ �Ǽ��� ���� doubleType�� ����

    printf("Size of char: %ld byte\n",sizeof(charType)); //������ ���� charType�� �ڷ��� ũ�⸦ ���
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //������ ���� integerType�� �ڷ��� ũ�⸦ ���
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //�Ǽ��� ���� floatType�� �ڷ��� ũ�⸦ ���
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //8����Ʈ �Ǽ��� ���� doubleType�� �ڷ��� ũ�⸦ ���

    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); //�������� �ڷ��� ũ�⸦ ���
    printf("Size of int: %ld bytes\n",sizeof(int)); //�������� �ڷ��� ũ�⸦ ���
    printf("Size of float: %ld bytes\n",sizeof(float)); //�Ǽ����� �ڷ��� ũ�⸦ ���
    printf("Size of double: %ld bytes\n",sizeof(double)); //8����Ʈ �Ǽ����� �ڷ��� ũ�⸦ ���
    printf("-----------------------------------------\n");
    
    printf("Size of char*: %ld byte\n",sizeof(char*)); //������ �������� ũ�⸦ ���
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //������ �������� ũ�⸦ ���
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //�Ǽ��� �������� ũ�⸦ ���
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //8����Ʈ �Ǽ��� �������� ũ�⸦ ���
    printf("[----- ������ 2021041046 -----]"); //�̸�, �й� ���
    return 0;
}

//��� : ������ �ڷ����� ������ �޸� �뷮�� ����ϴ� ���α׷��̴�.