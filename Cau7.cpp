#include<stdio.h>
#include<conio.h>

void nhap(int a[], int n)
{
    int i;
    for( int i=0; i < n; i++)
    {
        printf("\n Nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
}

void hien(int a[], int n)
{
    int i;
    for(int i=0; i<n; i++)
    {
        printf("\n a[%d]=%d",i,a[i]);
    }
}

void sochiacho3(int a[], int n)
{
    int i,dem;
    dem = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%3 == 0)
            dem++;
    }
    printf("\n So cac so chia het cho 3 trong mang la: %d",dem);
}

void giatritrongkhoang(int a[], int n)
{
    int m,b,dem=0;
    printf("\n nhap gia tri a:");
    scanf("%d",&m);
    printf("\n nhap gia tri b:");
    scanf("%d",&b);
    if(m>b)
    {
        printf("\n loi");
    }
    else
    {
        for(int i=0;i<n;i++)
            {
            if(a[i] >= m && a[i] <= b)
                dem++;
            }
                printf("\n so phan tu trong khoang [a,b] la: %d",dem);
    }
}

void tongptuduong(int a[], int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            tong+=a[i];
    }
    printf("\n tong cac so duong trong mang la: %d",tong);
}
void sapxep(int a[],int n)
{
	int t,m,k,i,j;
	for(i=0;i<n;i++)
	{
		m=a[i];
		k=i;
		for(j=i+1;j<n;j++)
			if(m>a[j])
			{
				m=a[j];
				k=j;
			}
			t=a[i];
			a[i]=a[k];
			a[k]=t;
	}
	printf("\n Mang sau khi sap xep la: ");
        for(i=0;i<n;i++)
        	printf("%d",a[i]);
}

int main()
{
    int n;
    int a[100];
    printf("\n nhap so phan tu cua mang:");
    scanf("%d",&n);
    nhap(a,n);
    hien(a,n);
    sochiacho3(a,n);
    sapxep(a,n);
    tongptuduong(a,n);
    giatritrongkhoang(a,n);
}
