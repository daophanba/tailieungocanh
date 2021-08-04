#include<stdio.h>
#include<math.h>
void nhap(float &x, int &n) {
	printf("\nNhap so thuc x: ");
	scanf("%f",&x);
	do {
		printf("\nNhap so nguyen duong n: ");
		scanf("%d",&n);
	} while(n<0);
}
float Tinh(float x, int n) {
	float f,s=0;
	if(n%2==0) {
		for(int i=1; i<=n; i++) {
			s=s+(i/pow(2,i));
		}
		f=s + (200*x);
	}
	if(n%2==1)f=sqrt(pow(n,2)+1)+fabs(x);
	return f;
}
int main() {
	float y;
	int m;
	nhap(y,m);
	printf("\nf = %.2f",Tinh(y,m));
	return 0;
}
