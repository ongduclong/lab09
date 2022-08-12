//giai thua cua n nhap vao tu ban phim
#include<stdio.h>

int n;
int nhap(){
	printf("Nhap so : ");
	scanf("%d",&n);
	return n;
}
int giai_thua(int){
	int factorial=1;
	if(n!=0)
	{
		for(int i=1;i<=n;i++)
		{
		factorial=factorial*i;	
		}
		printf("Giai thua cua %d la: %d",n,factorial);
	}
	else
	{
		printf("Sai so!!!");
	}

//	return factorial;
}
int main()
{
	int n = nhap();
	giai_thua(n);
}

