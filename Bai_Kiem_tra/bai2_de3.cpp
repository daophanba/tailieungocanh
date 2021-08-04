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
void SapXep(int a[],int n) {
	int tg;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i]<a[j]) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
int TimMaxDuong(int a[],int n) {
	int max=a[0];
	{
		for(int i=0; i<n; i++) {
			if(max<a[i])
				max=a[i];
		}
	}
	if(max>0)
		printf("\nMax= %d",max);
	else printf("\nMang khong co phan tu duong");
	return max;
}
void chenso(int a[],int n,int x)
{
	int vt;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			vt=i+1;
			break;
		}else 
		vt=1;
	}
	for(int i=n-1;i>=vt-1;i--)
	{
		a[i+1]=a[i];
	}
	a[vt-1]=x;
}
int main()
{
	int n;
	do{
		printf("\nNhap n: ");
		scanf("%d",&n);
	}while(n<5 || n>50);
	int a[n];
	NhapMang(a,n);
	printf("\nMang vua nhap: ");
	XuatMang(a,n);
	SapXep(a,n);
	printf("\nMang vua sap xep giam dan: ");
	XuatMang(a,n);
	TimMaxDuong(a,n);
	int x;
	printf("\nNhap x: ");
	scanf("%d",&x);
	chenso(a,n,x);
	n++;
	printf("\nMang sau khi chen: ");
	XuatMang(a,n);
}
