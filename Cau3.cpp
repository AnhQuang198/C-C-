#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b;
    float x;
    printf("\n Nhap a: ", a);
    scanf("%d",&a);
    printf("\n Nhap b: ", b);
    scanf("%d",&b);
    x = (!(( a/6 == 3) && ( b < 8)));
    printf("\n Gia tri cua bieu thuc la: %f",x);
    return 0;
}
