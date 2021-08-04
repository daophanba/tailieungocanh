#include<stdio.h>
#include<math.h>
void Nhap(float &x, int &n) {
	printf("\nNhap gia tri thuc x: ");
	scanf("%f",&x);
	do {
		printf("\nNhap gia nguyen n: ");
		scanf("%d",&n);
	} while(n<0);
}
float TinhF(float x,int n)
{
	float F=0,s=1,temp=x;
	int gt=1,i=1;
	if(n%2==0)
	{
		for(int i=1;i<=n;i++)
		{
			gt=gt*i;
			F=F+1+(x+i)/gt;
		}
	}
	else{
		while(temp>1e-10)
		{
			s=s+temp;
			i++;
			temp=temp*x/i;
		}
		F=2*x+s;
	}
	return F;
}
int main()
{
	float y;
	int m;
	Nhap(y,m);
	printf("\nGia tri F = %.2f",TinhF(y,m));
	return 0;
}

