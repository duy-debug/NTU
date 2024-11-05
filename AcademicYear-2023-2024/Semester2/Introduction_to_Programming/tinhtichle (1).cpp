#include <stdio.h>
int tinhtichle(int n){
    int tichsole = 1;
    for(int i=1; i<=n; i+=2){
        tichsole *= i;
    }
    return tichsole;
}
int main(){
    int n;
    float giatribieuthuc = 0;
    do{
        printf("Nhap vao mot so nguyen duong le n(n<=15): ");
        scanf("%d", &n);
    }while(n>15);
    for(int i=1; i<=n; i+=2){
        giatribieuthuc += (float)(i+1)/tinhtichle(i);
    }
    printf("Gia tri bieu thuc = %.2f", giatribieuthuc);
}
