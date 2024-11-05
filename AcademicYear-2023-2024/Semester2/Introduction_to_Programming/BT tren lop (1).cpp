#include<stdio.h>
void NhapMang(int a[], int &n){
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void XuatMang(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
int KT_tangdan(int a[], int n){
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1])
        return 0;
    }
    return 1;
}
int Tim_min(int a[], int n){
    int min=0;
    for(int i=0; i<n; i++){
        if(a[i]<a[min])
        min = i;
    }
    return min;
}
void hoanvi(int &x, int &y){
    int tam=x;
    x=y;
    y=tam;
}
void Sapxepgiam(int a[], int n){
    for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
           if(a[i]<a[j])
           hoanvi(a[i],a[j]);
       } 
    }
        printf("\nMang xap sep giam dan la: ");
        XuatMang(a,n);
}
void TachMang(int a[], int n){
    int A[1000], B[1000];
    int j=0, k=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            A[j]=a[i];
            j++;
        }
        else{
            B[k]=a[i];
            k++;
        }
    }
    printf("\nMang chua phan tu so chan: ");
    for(int i=0; i<j; i++){
        printf("%d ", A[i]);
    }
    printf("\nMang chua phan tu le: ");
    for(int i=0; i<k; i++){
        printf("%d ", B[i]);
    }
}
int Tim_max(int a[], int n){
    int max=0;
    for(int i=0; i<n; i++){
        if(a[i]>a[max])
        max=i;
    }
    return max;
}
void ChenPT(int a[], int &n, int x, int vtmax){
        for(int i=n; i>vtmax; i--){
            a[i] = a[i-1];
    	}
        a[vtmax] = x;
        n++;
    printf("\nMang sau khi chen phan tu x vao vi tri chua phan tu lon nhat: ");
    XuatMang(a,n);
}
void XoaPT(int a[], int &n, int vtmax){
    for(int i=vtmax; i<n-1; i++){
        a[i] = a[i+1];
    }
    n--;
    printf("\nMang sau khi xoa vi tri co phan tu lon nhat:");
    XuatMang(a,n);
}
int main(){
    int a[1000], n;
    NhapMang(a,n);
    printf("Mang vua nhap la: ");
    XuatMang(a,n);
    if(KT_tangdan(a,n))
    printf("\nMang chua cac phan tu tang dan!");
    else printf("\nMang chua cac phan tu khong tang dan!");
    int min=Tim_min(a,n);
    printf("\nMang co phan tu nho nhat la: %d", a[min]);
    TachMang(a,n);
    int x;
    printf("\nNhap phan tu x can chen: ");
    scanf("%d", &x);
    int vtmax=Tim_max(a,n);
    ChenPT(a,n,x,vtmax);
    XoaPT(a,n,vtmax);
    Sapxepgiam(a,n);
    return 0;
}
