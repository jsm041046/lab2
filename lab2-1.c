#include <stdio.h>
int main()
{
    char charType; //문자형 변수 charType을 선언
    int integerType; //정수형 변수 integerType을 선언
    float floatType; //실수형 변수 floatType을 선언
    double doubleType; //8바이트 실수형 변수 doubleType을 선언

    printf("Size of char: %ld byte\n",sizeof(charType)); //문자형 변수 charType의 자료형 크기를 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //정수형 변수 integerType의 자료형 크기를 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //실수형 변수 floatType의 자료형 크기를 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //8바이트 실수형 변수 doubleType의 자료형 크기를 출력

    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); //문자형의 자료형 크기를 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); //정수형의 자료형 크기를 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); //실수형의 자료형 크기를 출력
    printf("Size of double: %ld bytes\n",sizeof(double)); //8바이트 실수형의 자료형 크기를 출력
    printf("-----------------------------------------\n");
    
    printf("Size of char*: %ld byte\n",sizeof(char*)); //문자의 포인터형 크기를 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //정수의 포인터형 크기를 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //실수의 포인터형 크기를 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //8바이트 실수의 포인터형 크기를 출력
    printf("[----- 전설민 2021041046 -----]"); //이름, 학번 출력
    return 0;
}

//요약 : 각각의 자료형이 가지는 메모리 용량을 출력하는 프로그램이다.