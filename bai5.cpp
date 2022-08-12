//bai 5 lab9
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void init(int *ary);
void disPlay(int *ary);
int getMax(int *ary);
float getAvg(int *ary);
void findValue(int *ary);

int main()
{
	int *arr,n;
	int ch;
	arr=(int*)malloc(20*sizeof(int));
	while(1){
		printf("------------------\n");
		printf("Menu\n");
		printf("------------------\n");
		printf("\n1. Init fuction");
		printf("\n2. Display all array");
		printf("\n3. Get Max value");
		printf("\n4. Get Avg value");
		printf("\n5. Find by value");
		printf("\n6. Exit");
		printf("\n------------------\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
            case 1: init(arr);
            break;
            case 2: disPlay(arr);
            break;
            case 3: printf("\nMax value is: %d\n",getMax(arr));
            break;
            case 4: printf("\nAvg value is: %f\n",getAvg(arr));
            break;
            case 5: findValue(arr);
            break;
            case 6: exit(0);
        }	
	}

	return 0;
}
void init(int *ary){
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<20;i++){
		ary[i]=rand()%100 +1;
	}
}
void disPlay(int *ary){
	int i;
	printf("\nDisplay all elements: ");
	for(i=0;i<20;i++){
		printf("\nPhan tu thu %d: %d\n",i+1,ary[i]);
	}
}
int getMax(int *ary){
	int i, max = ary[0];
    for(i=1; i<20; i++){
        if(max<ary[i])
            max = ary[i];
    }
    return max;
}
float getAvg(int *ary){
	int i;
	float Avg;
	long long sum = 0;
	for(i=0;i<20;i++){
		sum=sum+ary[i];
	}
	Avg=(float)sum/20;
	return Avg;
	
}
void findValue(int *ary){
	int f;
	int j=0;
    scanf("%d",&f);
    for(int i=0; i<20; i++){
        if(f ==ary[i]){
        	j=i+1;
            printf("phan tu thu %d co gia tri bang so vua nhap\n", j);
        }
 	}
 	if(j==0){
 		printf("Khong co phan tu nao thoa man\n");
	 }
}

