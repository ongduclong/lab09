#include<stdio.h>
#include<stdlib.h>
int nhap(){
	int n;
	printf("Nhap so : ");
	scanf("%d",&n);
	return n;
}
void bang_cuu_chuong(int n){
	    if(n>0 && n<10) {
            printf("Bang cu chuong cua %d :\n", n);
            for (int i = 0; i <= 9; i++) {
               int a = n * i;
                printf("%d * %d = %d\n",n,i,a);
            }
        } else {
            printf("Sai so!!!");
        }
}
int main()
{
	int n;
	char ch;
	while(1){
		n=nhap();
		bang_cuu_chuong(n);
		printf("Ban co muon tiep tuc? Y/N\n");
		scanf("%s",&ch);
		if(ch!='y'&&ch!='Y'){
			exit(0);
		}
	}
	return 0;
}

