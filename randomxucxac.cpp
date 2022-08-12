//Gieo xuc xac
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void xuc_xac(){
	srand((unsigned)time(NULL));
	printf("Ket qua gieo xuc xac: ");
	printf("%d points\n",rand()%6+1);
}
int main()
{
	char ch;
	while(1){
		xuc_xac();	
		printf("Ban co muon tiep tuc: Y/N\n");
		scanf("%s",&ch);
		if(ch!='y'&& ch!='Y'){
			exit(0);
		}
	}
	return 0;
}

