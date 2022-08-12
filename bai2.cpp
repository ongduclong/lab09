#include<stdio.h>
#include<math.h>

int inputNumber(){
	int n;
	scanf("%d",&n);
	return n;
}
void checkNumber(int n){
    int check=1;
    if(n < 2){
        check=0;
        
    }
	else{
   	 	for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            check=0;
        }
    }
}
    if(check == 1){
        printf("%d la so nguyen to\n", n);
    }else{
        printf("%d khong phai so nguyen to\n", n);
    }
}
int main()
{
	while(1){
	
	int n = inputNumber();
	checkNumber(n);
}
	return 0;
}

