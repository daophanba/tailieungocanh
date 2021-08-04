#include<stdio.h>
void nhapmang(int a[],int n) {
	printf("\nNhap mang: ");
	for(int i=0; i<n; i++) {
		printf("\na[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n) {
	for(int i=0; i<n; i++) {
		printf("%5d",a[i]);
	}
}
void TBCsole(int a[],int n) {
	int s=0,dem=0;
	float TBC;
	for(int i=0; i<n; i++) {
		if(a[i]%2==1) {
			s=s+a[i];
			dem++;
		}
	}
	TBC=(float)s/dem;
	if(dem>0)
		printf("\nTBC so le = %.2f",TBC);
	else
		printf("\nMang khong co so le nao");
}
int min(int a[],int n) {
	int min=a[0], dem=0;
	for(int i=1; i<n; i++) {
		if(min>a[i]) {
			min=a[i];
		}
	}
	for(int i=0; i<n; i++) {
		if(min==a[i]) {
			dem++;
		}
	}
	printf("\nCo %d chu so nho nhat trong mang",dem);
	return min;
}
void chenso(int a[],int n,int x) {
	int vtri;
	printf("\nVi tri: ");
	for(int i=0; i<n; i++) {
		if(x<a[i]) {
			vtri=i+1;
			break;
		} else
			vtri=n;
	}
	if(vtri<n) {
		for(int i=n-1; i>=vtri-1; i--) {
			a[i+1]=a[i];
		}
		a[vtri-1]=x;
	} else a[n]=x;
}
int main() {
	int n;
	do {
		printf("\nNhap n: ");
		scanf("%d",&n);
	} while(n<5);
	int a[n];
	nhapmang(a,n);
	printf("\nMang vua nhap: ");
	xuatmang(a,n);
	TBCsole(a,n);
	printf("\nSo nho nhat la %d",min(a,n));
	int x;
	printf("\nNhap x: ");
	scanf("%d",&x);
	chenso(a,n,x);
	n++;
	printf("\nMang sau khi chen: ");
	xuatmang(a,n);
	return 0;
}
