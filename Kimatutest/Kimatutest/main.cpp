
//第一問
//11010
//11100

//第二問
//26
//28

//第三問
//char   1バイト
//int    4バイト
//float  4バイト
//double 8バイト

//第四問
//char *    4バイト
//int *     4バイト
//float *   4バイト
//double *  4バイト

//第五問
//3

//第六問,第七問
#include <iostream>

int main()
{
    int a,b;
    
    printf("1つ目の整数: a = ");
    scanf("%d", &a);
    printf("2つ目の整数: b = ");
    scanf("%d", &b);
    if( a % 2 == 0 )
    {
        printf("a - b = %d\n", a-b);
    }else if(a % 2 == 1)
    {
        printf("a + b = %d\n", a+b);
    }
    return 0;
}

// 第八問


