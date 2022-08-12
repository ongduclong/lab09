#include <stdio.h>
#include <stdlib.h>
int a, b;
int nhap(){
    printf("Nhap 2 so a va b: \n");
    scanf("%d%d", &a,&b);

}
int sum(){
    int sum = a+b;
    printf("Tong cua 2 so la: %d\n", sum);
}
int sub(){
    int sub = a-b;
    printf("Hieu cua 2 so la: %d\n", sub);
}
int multi(){
    int multi = a*b;
    printf("Tich cua 2 so la: %d\n", multi);
}
double diva(){
    if (b==0){
        printf("Khong the thuc hien!\n");
    } else {
        double div = (double) a / b;
        printf("Thuong cua 2 so la: %f\n", div);
    }
}
void menu() {
    int ch;
    while (1) {
        printf("TINH TOAN\n");
        printf("=======================\n");
        printf("1. Nhap so\n");
        printf("2. Tinh tong \n");
        printf("3. Tinh hieu\n");
        printf("4. Tinh tich\n");
        printf("5. Tinh thuong\n");
        printf("6. Thoat\n");
        printf("=======================\n");
        printf("Chon: \n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                nhap();
                break;
            case 2:
                sum();
                break;
            case 3:
                sub();
                break;
            case 4:
                multi();
                break;
            case 5:
                diva();
                break;
            case 6:
                exit(0);
        }
    }
}
int main() {
    menu();
    return 0;
}


