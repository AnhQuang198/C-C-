#include <conio.h>
#include <stdio.h>
#include <string.h>
typedef char Xau[200];

int main(){
    Xau x, tu;
    int i, j, daucach, k;
    printf("Nhap 1 xau: ");
    gets(x);
    i=strlen(x);
    while(x[i-1]!=' ' && i>0)
        i--;
        j=0;
    while(i<=strlen(x)){
        tu[j]=x[i];
        i++;
        j++;
    }
    printf("\nTu cuoi cung cua xau: %s", tu);
    getch();
}
