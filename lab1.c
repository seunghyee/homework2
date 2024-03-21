#include <stdio.h>

int main() {

    char charType;       // 문자형 변수 선언

    int integerType;     // 정수형 변수 선언

    float floatType;     // 실수형 변수 선언

    double doubleType;   // 더블형 변수 선언


    printf("[----- [son seung hye]] [2023078010] -----]\n");

    // 각 변수의 크기 출력

    printf("Size of char: %ld byte\n", sizeof(charType));      // charType의 크기 출력한다.

    printf("Size of int: %ld bytes\n", sizeof(integerType));   // integerType의 크기 출력한다.

    printf("Size of float: %ld bytes\n", sizeof(floatType));   // floatType의 크기 출력한다.

    printf("Size of double: %ld bytes\n", sizeof(doubleType)); // doubleType의 크기 출력힌디.

    

    printf("-----------------------------------------\n");

    // 기본 데이터 유형의 크기를 출력

    printf("Size of char: %ld byte\n", sizeof(char));     // char의 크기 출력한다.

    printf("Size of int: %ld bytes\n", sizeof(int));      // int의 크기 출력한다.

    printf("Size of float: %ld bytes\n", sizeof(float));  // float의 크기 출력한다.

    printf("Size of double: %ld bytes\n", sizeof(double));// double의 크기 출력한다.

   

    printf("-----------------------------------------\n");

    // 포인터 크기

    printf("Size of char*: %ld byte\n", sizeof(char*));      // char 포인터의 크기 출력한다.

    printf("Size of int*: %ld bytes\n", sizeof(int*));       // int 포인터의 크기 출력한다.

    printf("Size of float*: %ld bytes\n", sizeof(float*));   // float 포인터의 크기 출력힌다.

    printf("Size of double*: %ld bytes\n", sizeof(double*)); // double 포인터의 크기 출력한다.

    return 0;

}
