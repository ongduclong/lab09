#include<stdio.h>

int Power_n(int a, int n){
	int result=1;
	for(int i=0;i<n;i++){
		result=a*result;
	}
	return result;
}
int main()
{
	int a,n,z;
	printf("Nhap vao so nguyen a va n:\n");
	scanf("%d%d",&a,&n);
	z=Power_n(a,n);
	
	printf("%d",z);
	
	
	return 0;
}

