#include<stdio.h>
#include<math.h>
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
int TinhTongCacSoLe(int a[],int n) {
	int sum=0;
	for(int i=0; i<n; i++) {
		if(a[i]%2==1 && a[i]>0) {
			sum=sum+a[i];
		}
	}
	return sum;
}
void TimPhanTuAmNhoNhat(int a[],int n) {
	int dem=0;
	int min=a[0];
	for(int i=0; i<n; i++) {
		if(a[i]>0) {
			dem++;
		} else {
			if(min>a[i])
				min=a[i];
		}
	}
	if(dem==n) {
		printf("\nMang khong co so am");
	}
	if(dem<n) {
		printf("\nSo am nho nhat la: %d",min);
	}
}
int ktSoNT(int n){
	if (n<=1) return 0;
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)
			return 0;
		}
		return 1;
	}
}
void SoNT(int a[],int n) {
	int kt;
	int dem=0;
	for(int i=0; i<n; i++) {
		if(ktSoNT(a[i])==1) dem++;
	}
	printf("\nMang co %d so nguyen to",dem);
}
int main() {
	int n;
	do {
		printf("\nNhap so nguyen n>=1: ");
		scanf("%d",&n);
	} while(n<0);
	int a[n];
	NhapMang(a,n);
	printf("\nMang vua nhap: ");
	XuatMang(a,n);
	printf("\nTong cac so le duong = %d",TinhTongCacSoLe(a,n));
	TimPhanTuAmNhoNhat(a,n);
	SoNT(a,n);
	return 0;
}
