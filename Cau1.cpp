#include<stdio.h>
#include<conio.h>

int f(int a)
{
    if(a==1 || a==2)
        return a;
    else
        return (f(a-1)+f(a-2)); }
int main()
{
    int i,n;
    printf("Nhap vao gia tri cho n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",f(i));
    getch();
}



