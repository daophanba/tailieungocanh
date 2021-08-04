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
void Ktr(int a[],int n,int x) {
	int dem=0, tong=0;
	printf("\nPhan tu chan duong nho hon x: ");
	for(int i=0; i<n; i++) {
		if(a[i]%2==0 && a[i]<x) {
			printf("%4d",a[i]);
			dem++;
			tong=tong +a[i];
		}
	}
	if(dem>0) {
		printf("\nTBC phan tu duong nho hon %d la %.2f",x,(float)tong/dem);
	} else {
		printf("\nTrong mang khong co phan tu duong chan nho hon %d",x);
	}
}
void XoaSo(int a[],int n,int x) {
	int vt;
	int kt=1;
	for(int i=n-1; i>=0; i--) {
		if(a[i]==x) {
			kt=1;
			vt=i+1;
			break;
		} else {
			kt=0;
		}
	}
	if(kt==1) {
		for(int i=vt; i<n; i++) {
			a[i-1]=a[i];
		}
		n--;
		printf("\nMang sau khi xoa: ");
		XuatMang(a,n);
	} else {
		printf("\nTrong mang khong co phan tu nao = %d",x);
	}
}
int main() {
	int n;
	do {
		printf("\nNhap gia tri nguyen n: ");
		scanf("%d",&n);
	} while(n<1 || n>30 && printf("\nNhap lai n trong doan [1;30]"));
	int a[n];
	NhapMang(a,n);
	printf("\nMang vua nhap la: ");
	XuatMang(a,n);
	int x;
	printf("\nNhap gia tri nguyen x: ");
	scanf("%d",&x);
	Ktr(a,n,x);
	XoaSo(a,n,x);
	return 0;
}
