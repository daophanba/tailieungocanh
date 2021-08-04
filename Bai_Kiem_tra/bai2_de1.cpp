#include<stdio.h>
void NhapMang(int a[],int n) {
	printf("\nNhap mang: ");
	for(int i=0; i<n; i++) {
		printf("\na[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[],int n) {
	printf("\nMang vua nhap: ");
	for(int i=0; i<n; i++) {
		printf("%5d",a[i]);
	}
}
int max(int a[],int n) {
	int vtri,max=a[0];
	for(int i=1; i<n; i++) {
		if(max<a[i])
			max=a[i];
	}
	printf("\nVi tri max: ");
	for(int i=0; i<n; i++) {
		if(max==a[i]) {
			vtri=i+1;
			printf("%5d",vtri);
		}
	}
	return max;
}
void sapxep(int a[],int n) {
	int tg;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i]>a[j]) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
void XoaPhanTu(int a[],int n,int x) {
	int vtri;
	for(int i=n-1; i>=0; i--) {
		if(x==a[i]) {
			vtri=i+1;
			break;
		}
	}
	for(int i=vtri; i<n; i++) {
		a[i-1]=a[i];
	}
}
int main() {
	int n=0;
	do {
		printf("\nNhap n: ");
		scanf("%d",&n);
	} while(n<1 || n>30);
	int a[n];
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nSo lon nhat trong mang la %d",max(a,n));
	sapxep(a,n);
	printf("\nMang sap xep theo chieu tang dan: ");
	for(int i=0; i<n; i++)
		printf("%5d",a[i]);
	int x;
	printf("\nNhap x: ");
	scanf("%d",&x);
	XoaPhanTu(a,n,x);
	n--;
	printf("\nPhan tu sau khi xoa: ");
	for(int i=0; i<n; i++)
		printf("%5d",a[i]);
	return 0;
}
