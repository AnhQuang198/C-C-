#include<stdio.h>
#include<conio.h>

struct VEP{
    int soghe;
    char tenphim[20];
    float gio;
    int gia;
    int loaive;
    char tt[20];
};

void nhap(VEP a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n nhap so ghe %d:",i);
        scanf("%d",&a[i].soghe);
        fflush(stdin);
        printf("\n nhap ten phim %d:",i);
        gets(a[i].tenphim);
        printf("\n nhap gio chieu %d:",i);
        scanf("%f",&a[i].gio);
        printf("\n nhap gia ve %d:",i);
        scanf("%d",&a[i].gia);
        printf("\n nhap loai ve:");
        scanf("%d",&a[i].loaive);
        fflush(stdin);
        printf("\n tinh trang:");
        gets(a[i].tt);
    }
}

void hien(VEP a[],int n)
{
    for(int i=0;i<n;i++)
        printf("\n %-10d%-20s%2.2f\t%-10d%-10d%-10s",a[i].soghe,a[i].tenphim,a[i].gio,a[i].gia,a[i].loaive,a[i].tt);
}
void giave(VEP a[],int n)
{
    int x,y;
    printf("\nnhap vao gia tri x:");
    scanf("%d",&x);
    printf("\nnhap vao gia tri y:");
    scanf("%d",&y);
    if(x>y)
        printf("\ngia ve khong hop le");
    else
        for(int i=0;i<n;i++)
    {
        if(a[i].gia>=x&&a[i].gia<=y)
            printf("\n %-10d%-20s%2.2f\t%-10d%-10d%-10s",a[i].soghe,a[i].tenphim,a[i].gio,a[i].gia,a[i].loaive,a[i].tt);
    }
}
void tbc(VEP a[],int n)
{
    int tong=0,dem=0;
    for(int i=0;i<n;i++)
        {
            tong+=a[i].gia;dem++;
        }
        printf("\n gia tri tbc la: %2.2f",(float)tong/dem);


}

void ghiFile(FILE *f, VEP a[],int n)
{
    f=fopen("veban.dat","wb");
    if(f!=NULL)
    {
        fwrite(&n,sizeof(int),1,f);
        for(int i=0;i<n;i++)
        {
            fwrite(&a,sizeof(VEP),1,f);
        }
    }fclose(f);
}

int main()
{
    VEP a[100];
    int n;
    printf("\n nhap so ve:");
    scanf("%d",&n);
    nhap(a,n);
    printf("\n danh sach sau khi nhap la:");
    hien(a,n);
    printf("\ncac ve nam trong khoang gia");
    giave(a,n);
    tbc(a,n);
    return 0;
}
