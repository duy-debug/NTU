#include<stdio.h>
// Ham chuyen doi tu dia chi logic sang dia chi vat ly
int DCLGSDCVL(int PS, int a, int Thututrang[]){
    int p, A, d, f;
    p = a/PS; // Xac dinh thu tu trang
    d = a%PS; // Xac dinh vi tri byte trong trang
    f = Thututrang[p]; // tu thu tu trang (p)-> khung trang (f)
    A = f*PS + d; // Tinh dia chi vat ly
    return A;
}
// Ham chuyen doi tu dia chi vat ly sang dia chi logic
int DCVLSDCLG(int PS, int A, int Thututrang[]){
    int a, d, f; 
    d = A%PS; // Xac dinh vi tri byte trong trang
    for(int p=0; p<PS; p++){ // Duyet qua kich thuoc moi khung trang
        f=Thututrang[p];
        if(A==f*PS +d){ // Kiem tra trung khop voi dia chi vat ly, neu thoa man thi tu khung trang(f) -> thu tu trang (p)
        a = p*PS + d;// Tinh dia chi logic
        break; 
        }
    }
    return a;
}
int main(){
    int PS, Sotrang, Thututrang[100], a, A, kq;
    printf("Nhap kich thuoc trang: "); 
    scanf("%d", &PS);
do{
    printf("Nhap so trang trong bang: "); 
    scanf("%d", &Sotrang);
}while(Sotrang<1);
for(int i=0; i<Sotrang; i++){
    printf("Trang thu [%d]: ", i);
    scanf("%d", &Thututrang[i]);
}
        printf("\n1. Chuyen tu dia chi logic sang dia chi vat ly: ");
        printf("\nNhap dia chi logic: ");
        scanf("%d", &a);
        kq = DCLGSDCVL(PS,a,Thututrang);
        printf("Dia chi logic %d se duoc chuyen thanh dia chi vat ly la %d", a, kq);
        printf("\n2. Chuyen tu dia chi vat ly sang dia chi logic: ");
        printf("\nNhap dia chi vat ly: ");
        scanf("%d", &A);
        kq = DCVLSDCLG(PS, A, Thututrang);
        printf("Dia chi vat ly %d se duoc chuyen thanh dia chi logic la %d", A, kq);
    return 0;
}
