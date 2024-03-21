#include <stdio.h>

int main()

{

    int i;          // 정수형 변수 선언

    int *ptr;       // 정수형 포인터 ptr 선언

    int **dptr;     // 이중 포인터 dptr 선언

    i = 1234;       // i에 값 1234 할당

    printf("[----- [son seung hye] [2023078010] -----]\n");

    // ptr이 i의 주소를 할당하기 전 변수들의 값 출력

    printf("[checking values before ptr = &i] \n");

    printf("value of i == %d\n", i);            // i의 값 출력

    printf("address of i == %p\n", &i);          // i의 주소 출력

    printf("value of ptr == %p\n", ptr);         // ptr의 값 출력

    printf("address of ptr == %p\n", &ptr);      // ptr의 주소 출력

    ptr = &i;       // ptr이 i의 주소 가리킴

   

    printf("\n[checking values after ptr = &i] \n");

    printf("value of i == %d\n", i);            // i의 값 출력

    printf("address of i == %p\n", &i);          // i의 주소 출력

    printf("value of ptr == %p\n", ptr);         // ptr의 값 출력

    printf("address of ptr == %p\n", &ptr);      // ptr의 주소 출력

    printf("value of *ptr == %d\n", *ptr);       // ptr이 가리키는 값 출력 

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");

    printf("value of i == %d\n", i);            // i의 값 출력

    printf("address of i == %p\n", &i);          // i의 주소 출력

    printf("value of ptr == %p\n", ptr);         // ptr의 값 출력

    printf("address of ptr == %p\n", &ptr);      // ptr의 주소 출력

    printf("value of *ptr == %d\n", *ptr);       // ptr이 가리키는 값 출력

    printf("value of dptr == %p\n", dptr);       // dptr의 값 출력

    printf("address of dptr == %p\n", &dptr);    // dptr의 주소 출력

    printf("value of *dptr == %p\n", *dptr);     // dptr이 가리키는 값 출력

    printf("value of **dptr == %d\n", **dptr);   // dptr이 가리키는 값의 값 출력

    

    *ptr = 7777;    //*ptr의 값 변경

    printf("\n[after *ptr = 7777] \n");

    printf("value of i == %d\n", i);            // i의 값 출력

    printf("value of *ptr == %d\n", *ptr);       // *ptr의 값 출력

    printf("value of **dptr == %d\n", **dptr);   // **dptr의 값 출력

   

    **dptr = 8888;  //**dptr의 값을 변경

    printf("\n[after **dptr = 8888] \n");

    printf("value of i == %d\n", i);            // i의 값 출력

    printf("value of *ptr == %d\n", *ptr);       // *ptr의 값 출력

    printf("value of **dptr == %d\n", **dptr);   // **dptr의 값 출력

    return 0;

}