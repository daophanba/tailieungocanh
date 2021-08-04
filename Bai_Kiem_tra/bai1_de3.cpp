#include<stdio.h>
#include<math.h>
void Nhap(float &x,int &n,int &m) {
	printf("\nNhap gia tri thuc x: ");
	scanf("%f",&x);
	do {
		printf("\nNhap gia tri nguyen n: ");
		scanf("%d",&n);
	} while(n<=0);
	do {
		printf("\nNhap gia tri nguyen m: ");
		scanf("%d",&m);
	} while( m<=0);
}
float TinhF(float x,int n,int m) {
	float f,s=0;
	if(x>0) {
		for(int i=0; i<=n; i++) {
			s=s+pow(x,i);
			printf("\ns=%d",s);
		}
		f=s+pow(sin(m),2);
	} else {
		for(int i=0; i<=m; i++) {
			s=s+pow(i,2);
		}
		f=210*x+(float)1/s;
	}
	return f;
}
int main() {
	int p,q;
	float y;
	Nhap(y,p,q);
	printf("\nf(y,p,q) = %.3f",TinhF(y,p,q));
	return 0;
}
