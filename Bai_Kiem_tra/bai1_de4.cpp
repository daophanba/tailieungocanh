#include<stdio.h>
#include<math.h>
void nhap(float &x,int &n)
{
	printf("\nNhap gia tri thuc x: ");
	scanf("%f",&x);
	do{
		printf("\nNhap gia tri nguyen n: ");
	scanf("%d",&n);
	}while(n<=0);
}
float tinh(float x,int n)
{
	float f=0,s=0;
	int temp=n;
	if(x>1)
	{
		for(int i=1;i<=n;i++)
		{
			s=s+(x-i)/(temp+i);
		}
		f=s+1;
	}else{
		f=sqrt(temp)+2016*x;
	}
	return f;
}
int main()
{
	float y;
	int m;
	nhap(y,m);
	printf("\nF(y,m) = %.2f",tinh(y,m));
	return 0;
}
