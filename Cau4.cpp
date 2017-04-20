#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n;
    int tong=1,tong2=1;
    printf("\n nhap n:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        tong=tong*i;
    for(int j=1;j<tong;j++)
        tong2=tong2*j;

    printf("\n n!! la:%d",tong2);

}
