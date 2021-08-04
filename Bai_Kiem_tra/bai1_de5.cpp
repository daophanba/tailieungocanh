#include<stdio.h>
#include<math.h>
float nhap() {
	float x;
	printf("\nNhap gia tri thuc x: ");
	scanf("%f",&x);
	return x;
}
int Nhap() {
	int n;
	do {
		printf("\nNhap gia tri nguyen n>0: ");
		scanf("%d",&n);
	} while(n<=0);
	return n;
}
float tinh_fx(float x) {
	float f = 0, s ,gt = 1;
	float sum = 1;
	if(x<0) {
		int i = 1;
		float temp = x;
		while ( temp > 1e-10 ) {
			sum = sum + temp;
			i++;
			temp = temp * (x/i);
		}
		s = 2*x + sum;
	} else s = log(x)/log(15);
	return s;
}
float tinh_fn(int n) {
	float s=0;
	for(int i=0; i<=n; i++) {
		s=s+1/pow(3,i);
	}
	return s;
}
int main() {
	float y;
	int m;
	y=nhap();
	m=Nhap();
	printf("\nf(y,m) = %f",tinh_fx(y)+tinh_fn(m));
	return 0;
}

