#include<stdio.h>
#include<math.h>
int main() {
	float a;
	float cuocphi;
	printf("nhap khoang cach van tai: ");
	scanf("%f", &a);
	if(a>=0&&a<=99) {
		cuocphi= a*5;
	}
	if(a>=100&&a<=299) {
		cuocphi= a*8.00;
	}
	if(a>=300&&a<=599) {
		cuocphi= a*10.00;
	}
	if(a>=600&&a<=999) {
		cuocphi= a*12.00;
	}
	printf("cuoc phi la %.2f ", cuocphi);
	return 0;
}
