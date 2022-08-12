#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float s_tam_giac(){
	float s;
	int h,d;
	printf("Nhap chieu cao: ");
	scanf("%d",&h);
	printf("\nNhap do dai day: ");
	scanf("%d",&d);
	s=(float)h*d/2;
	return s;
}
int s_chu_nhat(){
	int s,d,r;
	printf("Nhap chieu dai: ");
	scanf("%d",&d);
	printf("Nhap chieu rong: ");
	scanf("%d",&r);
	s=d*r;
	return s;
}
float s_hinh_tron(){
	int r;
	float s;
	printf("Nhap ban kinh: ");
	scanf("%d",&r);
	s=(float)r*r*3.14;
	return s;	
}
float s_hinh_thang(){
	int a,b,h;
	float s;
	printf("Nhap do dai day be: \n");
	scanf("%d",&a);
	printf("Nhap do dai day lon: \n");
	scanf("%d",&b);
	printf("Nhap chieu cao: \n");
	scanf("%d",&h);
	s=(float)((a+b)/2)*h;
	return s;
}

int main()
{
	int ch;
	while(1){
	printf("TINH DIEN TICH\n");
	printf("==================\n");
	printf("1. Tam giac\n");
	printf("2. Chu nhat\n");
	printf("3. Hinh thang\n");
	printf("4. Hinh tron\n");
	printf("5. Thoat\n");
	printf("==================\n");
	printf("Chon: ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1: printf("Dien tich tam giac la: %.2f\n",s_tam_giac());
			break;
		case 2: printf("Dien tich hinh chu nhat la: %d\n",s_chu_nhat());
			break;	
		case 3: printf("Dien tich hinh thang la: %.2f\n",s_hinh_thang());
			break;	
		case 4:printf("Dien tich hinh tron la: %.2f\n",s_hinh_tron());
			break;	
		case 5: exit(0);
				
		}
	}

	return 0;
}

