#include<stdio.h>
void NhapMang(int a[],int n) {
	printf("\nNhap mang: ");
	for(int i=0; i<n; i++) {
		printf("\na[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[],int n) {
	for(int i=0; i<n; i++) {
		printf("%5d",a[i]);
	}
}
// tinh tong cac so duong la boi cua 5
void TinhTong(int a[], int n) {
	int s=0,dem=0;
	for(int i=0; i<n; i++) {
		if(a[i]%5==0 && a[i]>0) {
			s=s+a[i];
			dem++;
		}
	}
	if(dem>0)
		printf("\nTong cac so duong la boi cua 5 = %d",s);
	else
		printf("\nMang khong co so duong la boi cua 5");
}
void ktsoNT(int a[],int n) {
	int kt=1;

	for(int i=0; i<n; i++) {
		if(a[i]<2) {
			kt=0;
		} else {
			for(int j=2; j<n/2; j++) {
				if(a[i]%j==0)
					kt=0;
			}
		}
	}
	if(kt==1)
		printf("\nTrong mang co so nguyen to %d",a[i]);
	else
		printf("\nMang khong co so nguyen to nao");
	for(int i=0; i<n; i++) {
		if(a[i]==1)
			printf("\nSo nguyen to dau tien trong mang la: %d",a[i]);
		break;
	}
}
void xoaso(int a[],int n,int x) {
	for(int i=n-1; i>=0;i--)
	{
		if(x==a[i])
		{
			for(int j=i;j<n-1;j++)
			{
				a[j]=a[j+1];
				n--;
			}
		}
	}
//	int vt;
//	for(int i=0; i<n; i++) {
//		if(x==a[i]) {
//			vt=i+1;
//		}
//	}
//	for(int i=vt; i<n; i++) {
//		a[i-1]=a[i];
//	}
}
int main() {
	int n;
	do {
		printf("\nNhap n: ");
		scanf("%d",&n);
	} while(n<1);
	int a[n];
	NhapMang(a,n);
	printf("\nMang vua nhap: ");
	XuatMang(a,n);
	TinhTong(a,n);
	ktsoNT(a,n);
	int x;
	printf("\nNhap x= ");
	scanf("%d",&x);
	xoaso(a,n,x);
	printf("\nMang sau khi xoa la: ");
	XuatMang(a,n);
	return 0;
}
