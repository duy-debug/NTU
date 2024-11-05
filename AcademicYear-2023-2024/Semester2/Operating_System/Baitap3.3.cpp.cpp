#include<stdio.h>
// Ham chuyen doi tu dia chi logic sang dia chi vat ly
int DCLGSDCVL(int PS, int a, int Bangtrang[]){
    int f, A, d;
    f = a/PS; // Xac dinh trang
    d = a%PS; // Xac dinh vi tri trong trang
    A = Bangtrang[f]*PS + d; // Tinh dia chi vat ly
    return A;
}
// Ham chuyen doi tu dia chi vat ly sang dia chi logic
int DCVLSDCLG(int PS, int A, int Bangtrang[]){
    int a, d; 
    d = A%PS; // Xac dinh vi tri trong trang
    for(int i=0; i<PS; i++){ // Duyet qua bang trang
        if(A==Bangtrang[i]*PS +d){ // Kiem tra trung khop voi dia chi vat ly
        a = i*PS + d;
        break;
        }
    }
    return a;
}
int main(){
    int PS, Sotrang, Bangtrang[1000], Chon;
    printf("Nhap kich thuoc trang: ");
    scanf("%d", &PS);
do{
    printf("Nhap so trang trong bang: ");
    scanf("%d", &Sotrang);
}while(Sotrang<1);
for(int i=0; i<Sotrang; i++){
    printf("Bang trang thu [%d]: ", i);
    scanf("%d", &Bangtrang[i]);
}
    printf("Day so vua nhap trong bang la: ");
    for(int i=0; i<Sotrang; i++){
        printf("%d ", Bangtrang[i]);
    }
    printf("\n1. Chuyen tu dia chi logic sang dia chi vat ly: ");
    printf("\n2. Chuyen tu dia chi vat ly sang dia chi logic: ");
    printf("\nChon 1 hoac 2: ");
    scanf("%d", &Chon);
   
    int a, A, kq;
    switch(Chon){
        case 1:
        printf("Nhap dia chi logic: ");
        scanf("%d", &a);
        kq = DCLGSDCVL(PS,a,Bangtrang);
        printf("Dia chi logic %d se duoc chuyen thanh dia chi vat ly la %d", a, kq);
        break;
        case 2:
        printf("Nhap dia chi vat ly: ");
        scanf("%d", &A);
        kq = DCVLSDCLG(PS, A, Bangtrang);
        printf("Dia chi vat ly %d se duoc chuyen thanh dia chi logic la %d", A, kq);
        break;
        default: 
        printf("Lua chon khong hop le!");
    }
    return 0;
}
