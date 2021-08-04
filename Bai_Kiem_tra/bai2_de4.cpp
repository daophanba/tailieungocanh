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
int min(int a[],int n) {
	int min=a[0],dem=0;
	for(int i=0; i<n; i++) {
		if(min>a[i])
			min=a[i];
	}
	printf("\nPhan tu nho nhat la %d",min);
	for(int i=0; i<n; i++) {
		if(min==a[i])
			dem++;
	}
	printf("\nSo %d co %d phan tu",min,dem);
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
void chenso(int a[],int n,int x) {
	int vt;
	for(int i=0; i<n; i++) {
		if(x<=a[i]) {
			vt=a[i];
			break;
		}else
		vt=n;
	}
	if(vt<n) {
		for(int i=n-1; i>=vt-1; i--) {
			a[i+1]=a[i];
		}
		a[vt-1]=x;
	} else
		a[n]=x;
}
int main() {
	int n;
	do {
		printf("\nNhap n: ");
		scanf("%d",&n);
	} while(n<=0 || n>30);
	int a[n];
	NhapMang(a,n);
	printf("\nMang vua nhap: ");
	XuatMang(a,n);
	min(a,n);
	sapxep(a,n);
	printf("\nMang sap xep tang dan: ");
	XuatMang(a,n);
	int x;
	printf("\nNhap x: ");
	scanf("%d",&x);
	chenso(a,n,x);
	n++;
	printf("\nMang sau khi chen la: ");
	XuatMang(a,n);
	return 0;
}
