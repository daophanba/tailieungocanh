#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,delta,x1,x2;
	printf (" nhap gia tri a, b,c la ");
	scanf ("%f%f%f", &a,&b,&c);
	if ( a==0)
	{
		printf( " khong phai la phuong trinh bac 2 ");
	}
	else
	{
		printf(" la phuong trinh bac 2");
		delta=b*b-4*a*c;
		if( delta>0)
		{
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		printf(" phuong trinh co 2 nghiem phan biet la %f va %f" ,x1,x2);
		}
		else
		{
			if( delta==0)
			{
				x1=-b/2*a;
				printf(" phuong trinh co nghiem kep la %f",x1);
			}
			else
			{
				printf(" phuong trinh vo ngiem ");
			}
		}
	}
	return 0 ;
}
