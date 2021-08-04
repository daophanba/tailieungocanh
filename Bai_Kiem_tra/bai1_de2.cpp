#include<stdio.h>
#include<math.h>
float nhap(float x) {
	printf("\nNhap so thuc x: ");
	scanf("%f",&x);
	return x;
}
int nhap(int n) {
	do {
		printf("\nNhap so nguyen n: ");
		scanf("%d",&n);
	} while(n<=0);
	return n;
}
float tinhf(float x) {
	float f;
	if(x>0) f=2*x+1;
	else f=log(15)/log(x);
	return f;
}
int tinhF(int n)
{
	int F=1;
	for(int i=1;i<=n;i++)
	F=F+pow(3,i);
	return F;
}
int main()
{
	float y;
	int m;
	y=nhap(y);
	m=nhap(m);
	printf("\nGia tri cua f(y,m)= %.2f",tinhf(y)+tinhF(m));
	return 0;
}
