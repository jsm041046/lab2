#include <stdio.h>
int main()
{
    int i; //정수형 i 선언
    int *ptr; //정수형 포인터 ptr 선언
    int **dptr; //정수형 이중포인터 dptr 선언

    i = 1234; //i에 1234 대입
    
    printf("[checking values before ptr = &i] \n"); //안내 : 포인터에 변수의 주소를 입력하기 전에 값 체크
    printf("value of i == %d\n", i); //i 값 출력
    printf("address of i == %p\n", &i); //i 주소값 출력
    printf("value of ptr == %p\n", ptr); //ptr 값 출력
    printf("address of ptr == %p\n", &ptr); //ptr 주소값 출력

    ptr = &i; /* ptr is now holding the address of i */ //포인터 ptr에 정수형 i의 주소를 입력

    printf("\n[checking values after ptr = &i] \n"); //안내 : 포인터에 변수의 주소를 입력한 후 값 체크
    printf("value of i == %d\n", i); //i 값 출력
    printf("address of i == %p\n", &i); //i 주소값 출력
    printf("value of ptr == %p\n", ptr); //ptr 값 출력
    printf("address of ptr == %p\n", &ptr); //ptr 주소값 출력
    printf("value of *ptr == %d\n", *ptr); //ptr 참조 출력

    dptr = &ptr; /* dptr is now holding the address of ptr */ //이중포인터 dptr에 포인터 ptr의 주소값을 입력

    printf("\n[checking values after dptr = &ptr] \n"); //안내 : 이중포인터에 포인터의 주소를 입력한 후 값 체크
    printf("value of i == %d\n", i); //i 값 출력
    printf("address of i == %p\n", &i); //i 주소값 출력
    printf("value of ptr == %p\n", ptr); //ptr 값 출력
    printf("address of ptr == %p\n", &ptr); //ptr 주소값 출력
    printf("value of *ptr == %d\n", *ptr); //ptr 참조 출력
    printf("value of dptr == %p\n", dptr); //dptr 값 출력
    printf("address of ptr == %p\n", &dptr); //dptr 주소값 출력
    printf("value of *dptr == %p\n", *dptr); //dptr 참조 출력
    printf("value of **dptr == %d\n", **dptr); //dptr 이중참조 출력

    *ptr = 7777; /* changing the value of *ptr */ //ptr참조값에 7777을 대입

    printf("\n[after *ptr = 7777] \n"); //안내 : 참조값에 7777을 대입한 후
    printf("value of i == %d\n", i); //i 값 출력
    printf("value of *ptr == %d\n", *ptr); //ptr 참조 출력
    printf("value of **dptr == %d\n", **dptr); //dptr 이중참조 출력

    **dptr = 8888; /* changing the value of **dptr */ //dptr 이중참조값에 8888을 대입

    printf("\n[after **dptr = 8888] \n"); //안내 : 이중참조값에 7777을 대입한 후
    printf("value of i == %d\n", i); //i값 출력
    printf("value of *ptr == %d\n", *ptr); //ptr 참조 출력
    printf("value of **dptr == %d\n", **dptr); //dptr 이중 참조 출력

    printf("[----- 전설민 2021041046 -----]"); //이름, 학번 출력
    return 0;
}

//요약 : 포인터와 이중포인터의 주소값과 참조값을 바꾸어 출력해보고 주소값과 참조, 이중참조의 변경이 주는 영향을 보는 프로그램이다.