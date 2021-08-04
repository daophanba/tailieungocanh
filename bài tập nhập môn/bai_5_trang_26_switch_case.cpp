#include<stdio.h>
int main() {
	int month,year;
	printf ("nhap thang la");
	scanf ("%d",&month);
	printf ("nhap nam la");
	scanf ("%d",&year);
	switch(month) {
		case 1:
			printf("thang 1 nam %d co 31 ngay",year);
			break;
		case 2:
			printf("thang 2 nam %d co 28 hoac 29 ngay",year);
			break;
		case 3:
			printf("thang 3 nam %d co 31 ngay",year);
			break;
		case 4:
			printf("thang 4 nam %d co 30 ngay",year);
			break;
		case 5:
			printf("thang 5 nam %d co 31 ngay",year);
			break;
		case 6:
			printf("thang 6 nam %d co 30 ngay",year);
			break;
		case 7:
			printf("thang 7 nam %d co 31 ngay",year);
			break;
		case 8:
			printf("thang 8 nam %d co 31 ngay",year);
			break;
		case 9:
			printf("thang 9 nam %d co 30 ngay",year);
			break;
		case 10:
			printf("thang 10 nam %d co 31 ngay",year);
			break;
		case 11:
			printf("thang 11 nam %d co 30 ngay",year);
			break;
		case 12:
			printf("thang 12 nam %d co 31 ngay",year);
			break;
		default:
			printf("khong phai la thang trong nam");
			break;
	}
	return 0;
}
