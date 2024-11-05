#include<stdio.h>
#include<math.h>
#define MAX 100
void Nhap(int a[MAX][MAX], int &n){
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
        printf("a[%d][%d] = ", i, j);
        scanf("%d", &a[i][j]);
    }
}
void Xuat(int a[MAX][MAX], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
}
int KT_sochinhphuong(int n){
    if(n==0)
    return 0;
    int can=sqrt(n);
    if(pow(can,2)==n)
    return 1;
    else return 0;
}
int Dem_soPTchinhphuong(int a[MAX][MAX], int n){
    int dem=0;
    for(int i=0; i<n; i++){
    if(KT_sochinhphuong(a[i][i])==1)
        dem++;
    }
    return dem;
}
int tinhTong(int a[MAX][MAX], int n, int p){
    int tong=0;
    for(int i=0; i<n; i++){
        tong+=a[i][p];
    }
    return tong;
}
int timMin(int a[MAX][MAX], int n){
    int min=a[0][0];
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
        if(min>a[i][j])
        min=a[i][j];
    }
    return min;
}
int main(){
    int a[MAX][MAX], n, p;
    Nhap(a,n);
    printf("Ma tran vua nhap: \n");
    Xuat(a,n);
    printf("\nCo %d so chinh phuong nam tren duong cheo chinh!", Dem_soPTchinhphuong(a,n));
    do{
        printf("\nNhap cot muon tinh tong: ");
        scanf("%d", &p);
    }while(p>n-1);
    printf("Tong cac phan tu cot %d = %d", p, tinhTong(a,n,p));
    printf("\nGia tri phan tu nho nhat trong ma tran la: %d", timMin(a,n));
    return 0;
}
