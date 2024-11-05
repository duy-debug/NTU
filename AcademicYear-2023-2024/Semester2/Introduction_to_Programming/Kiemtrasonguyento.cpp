#include <stdio.h>
int kiemtrasonguyento(int n){
    for(int i=2; i<n-1; i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int n;
    int tongcacsonguyento = 0;
    do{
        printf("Nhap vao mot so nguyen duong(n>=2): ");
        scanf("%d", &n);
    }while(n<2);
    for(int i=2; i<=n; i++){
        if(kiemtrasonguyento(i))
        tongcacsonguyento += i;
    }
    printf("\nTong cac so nguyen to = %d", tongcacsonguyento);
}
