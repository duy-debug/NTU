#include<stdio.h>
#define MAX 100
void Nhap(int a[MAX][MAX], int &n, int &m){
    do{
        printf("Nhap n: ");
        scanf("%d", &n);
        printf("Nhap m: ");
        scanf("%d", &m);
    }while(!(n>=2 && n<=10 && m>=2 && m<=10));
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){
        printf("a[%d][%d] = ", i, j);
        scanf("%d", &a[i][j]);
    }
}
void Xuat(int a[MAX][MAX], int n, int m){
    for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
            printf("%3d", a[i][j]);
       
        }   
        printf("\n");
    }
}
int KT_phantu(int a[MAX][MAX], int n, int m, int x){
    int dem=0;
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){
        if(a[i][j]==x)
        dem++;
    }
    return dem;
}
int KT_Dongchan_PTduong(int a[MAX][MAX], int n, int m){
    for(int i=0; i<n; i+=2)
    for(int j=0; j<n; j++){
        if(a[i][j]<0)
        return 0;
    }
    return 1;
}
int main(){
    int a[MAX][MAX], n, m, x;
    Nhap(a,n,m);
    printf("Ma tran vua nhap: \n");
    Xuat(a,n,m);
    printf("\nNhap x: ");
    scanf("%d", &x);
    printf("\nCo tat ca %d phan tu x trong ma tran", KT_phantu(a,n,m,x));
    if(KT_Dongchan_PTduong(a,n,m)==0)
    printf("\nMa tran khong chua tat ca phan tu duong tren dong chan!");
    else printf("\nMa tran chua tat ca phan tu duong tren dong chan!");
}
