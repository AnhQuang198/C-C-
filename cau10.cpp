#include<stdio.h>
#include<conio.h>
#include<string.h>

struct SANPHAM{
    char masp[50];
    char tensp[50];
    float dg;
    float sl;
};

void nhapSP(SANPHAM a[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        printf("\n Nhap ma san pham thu %d :",i);
        fflush(stdin);
        gets(a[i].masp);
        printf("\n Nhap ten san pham thu %d :",i);
        gets(a[i].tensp);
        printf("\n Nhap don gia :");
        scanf("%f",&a[i].dg);
        fflush(stdin);
        printf("\n Nhap so luong :");
        scanf("%f",&a[i].sl);
    }
}
void ghiFile(FILE *f, SANPHAM a[], int n)
{
	f = fopen("sp.dat", "wb");
	if(f!=NULL){
		fwrite(&n, sizeof(int), 1, f);
		for(int i=0; i<n; i++){
			fwrite(&a[i], sizeof(SANPHAM),1,f);
		}
		fclose(f);
	}else{
		printf("\n Mo file bi loi");
	}
}
void docFile(FILE *f,SANPHAM a[], int &n)
{

	f= fopen("sp.dat", "rb");
	if(f!=NULL)
    {
		fread(&n,sizeof(int),1,f);
		for(int i=0; i<n; i++)
        {
			fread(&a[i], sizeof(SANPHAM),1,f);
			printf("\n %s \t %s \t %2.2f \t %2.2f",a[i].masp,a[i].tensp,a[i].dg,a[i].sl);
		}
		fclose(f);
	}
	else
	{
		printf("\n Khong mo duoc file");
	}
}
void spnhohon5(SANPHAM a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].sl <= 5)
            printf("\n Cac san pham co so luong nho hon 5 la: %d",i);
    }
}

void sapxep(SANPHAM a[],int n)
{
    SANPHAM tg;
    for (int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(strcmp(a[i].tensp,a[j].tensp)==1)
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
    }
}
void hienmang (SANPHAM a[],int n)
{
	for (int i=0;i<n;i++)
	printf("\n %s \t %s \t %2.2f \t %2.2f",a[i].masp,a[i].tensp,a[i].dg,a[i].sl);
}
int main()
{
    SANPHAM a[100];
    int n;
    FILE *f;
    printf("\n Nhap so san pham: ");scanf("%d",&n);
    nhapSP(a,n);
    ghiFile(f,a,n);
    printf("\n danh sach san pham la:");
    docFile(f,a,n);
    printf("\n danh sach sau khi sap xep la:");
    sapxep(a,n);
    hienmang(a,n);
    spnhohon5(a,n);
}
