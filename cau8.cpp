#include<stdio.h>
#include<conio.h>
int b[100],c[100],n, a[100][100];
void Nhap(int a[100][100],int &n){
	printf("so doi bong N= ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			if(i==j){
				a[i][j]=-1;
			}else{
				printf("so ban doi %d ghi vao luoi doi %d ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
}
void Xuat(int a[100][100],int n){
	printf("Bang ket qua: \n");
for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) printf("%5d",a[i][j]);
		printf("\n");
	}
}
void kq(int a[100][100], int n){
	for(int i=1; i<=n;i++){
		b[i]=0;
		c[i]=0;
		for(int j=1;j<=n;j++){
			if(i!=j&& a[i][j]>a[j][i] ){
				b[i]++;
				c[i]++;
			}
			}
		}
		for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(b[i]<b[j]){
				int h = b[i];
				b[i]= b[j];
				b[j]=h;

			}
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=n;j++){
			if(b[i]==c[j]){
				printf(" \n doi co thanh tich tot thu %d la doi: %d", i, j);
			}
		}

	}


}
main(){
	Nhap(a,n);
	Xuat(a,n);
	kq(a,n);
}
