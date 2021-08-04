#include<stdio.h>
int main() {
	float a,b,c,d,e;
	float max=a;
	printf("nhap 5 so a,b,c,d,e la");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	if(b>max) {
		max=b;
	}
	if(c>max) {
		max=c;
	}
	if(d>max) {
		max=d;
	}
	if(e>max) {
		max=e;
	}
	printf("gia tri lon nhat la %f", max);
	return 0;
}
