#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float x,y,S,V;
    printf("\n Nhap ban kinh R:",x);
    scanf("%f",&x);
    S = 4*M_PI*pow(x,2);
    V = (x*S)/3;
    printf("\n Dien tich cua hinh cau la: %f",S);
    printf("\n The tich cua hinh cau la: %f",V);
    return 0;
}
