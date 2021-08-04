#include<stdio.h>
int main()
{
	float a;
	printf (" nhap diem trung binh la ");
	scanf ("%f",&a);
	if ( a>=0&&a<=10)
	{
		printf (" diem trung binh hop le ");
		if (a>=5)
		{
		    printf (" hoc sinh duoc len lop ");
	    }	
	    else
	    {
	    	printf (" hoc sinh khong duoc len lop ");
		}
	}
	else
	{
		printf (" diem trung binh khong hop le ");
	}
	return 0;
}
