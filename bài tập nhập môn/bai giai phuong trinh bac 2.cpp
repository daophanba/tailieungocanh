#include<stdio.h>
#include<math.h>
int main() {
	float delta,x1,x2,a,b,c;
	printf(" nhap a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	if (a==0)
	{
		printf("khong phai la phuong trinh bac 2 ");
	}
	if (a!=0)
	{
		printf("la phuong trinh bac 2");
		delta = b*b-4*a*c;
		printf("\nvalue delte is %f",delta);
		if(delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("\nphuong trinh co 2 nghiem phan biet la %f va %f ",x1,x2);
		}
		if( delta==0)
		{
			x1=(-b)/(2*a);
			printf("\nphuong trinh co nghiem kep là %f ",x1);
		}
		if(delta<0)
		{
			printf("\nphuong trinh vo nghiem ");
		}
	}
	return 0;
}
	
