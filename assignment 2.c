#include<stdio.h>
int main()
{
    printf("1)\n");
    int a1=4>3>2;
    printf(" 4>3>2 : %d \n", a1);
    int a2=2+3>4+5;
    printf(" 2+3>4+5 : %d \n", a2);
    int a3=6>3+2<5;
    printf(" 6>3+2<5 : %d \n", a3);


    printf("2)\n");
    int b = ((5+3*5) >= (25 % 2)) && ((8 >= (5 - 3 * 2)) && ((8 + 3) != 5));
    printf(" 5+3*5>=25%2<=8=5-3*2>=8+3!=5    : %d \n\n", b);

    printf("3)\n");
    int c1 = 10 && 8;
    printf(" 10&&8 : %d \n", c1);

    int c2 = 0 && 8;
    printf(" 0&&8  : %d \n", c2);

    int c3 = 0 && 0;
    printf(" 8&&0  : %d \n", c3);

    int c4 = 8 && 0;
    printf(" 8&&0  : %d \n\n", c4);

    printf("4)\n");
    int d1 = !-8;
    printf(" ! -8  : %d \n", d1);

    int d2 = ! 100;
    printf(" ! 100 : %d \n", d2);

    int d3 = ! 0;
    printf(" ! 0   : %d \n", d3);

    int d4 = ! 0.0;
    printf("  ! 0.0 : %d \n\n", d4);

    printf("5)\n");
    int e = 4;
    e<<=4;
    printf(" <<=4  : %d \n", e);
    e>>=3;
    printf(" >>=3  : %d \n\n", e);

    printf("6)\n");
    printf(" 4>5   : %d \n", 4>5);
    printf(" 4<5   : %d \n", 4>5);
    printf(" 4>=5  : %d \n", 4>=5);
    printf(" 4==5  : %d \n", 4==5);
    printf(" 5==5  : %d \n\n", 5==5);

    printf("7)\n");
    printf(" 4>3&&3>2 : %d \n\n", 4>3&&3>2);

    printf("8)\n");
    int a;
    printf(" !!!!a : %d \n\n", !!!!a);

    printf("9)\n");
    printf(" No. of tokens : 37 \n\n");
    printf("They are: #include \n <stdio.h> \n int \n main \n ( \n ) \n { \n int \n num \n = \n 10 \n , \n num2 \n = \n 20 \n , \n num3 \n = \n 0 \n ; \n num3 \n = \n num1 \n + \n num2 \n ; \n printf \n ( \n , \n num3 \n ) \n ; \n return \n 0 \n ; \n } \n");

    printf("10)\n");
    int dividend = 40, divisor = 8, quotient =0;
    printf(" Quotient : %d \n", quotient);

}
