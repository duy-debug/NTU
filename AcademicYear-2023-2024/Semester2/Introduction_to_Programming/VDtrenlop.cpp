#include<stdio.h>
void Nhapdayso(float a[], float &n); //NhapDS	
void Xuatdayso(float a[], float n);  //XuatDS
float TinhTong(float a[], float n){   
        float tong=0; 
        for(int i=0; i<n; i++){
    	tong += a[i];
	}
	return tong;
}
int Demsoduong(float a[], int n){
	int dem = 0;
	for(int i=0; i<n; i++){
		if(a[i]>0)
		dem++;
	}
	return dem;
}
int main(){
	float n;
	float a[1000];
	float tong = 0;
    Nhapdayso(a,n);
    printf("Day so vua nhap la: ");
    Xuatdayso(a,n);
    TinhTong(a,n);
    printf("\nTong = %.2f", TinhTong(a,n));
    Demsoduong(a,n);
    printf("\nCo %d so duong", Demsoduong(a,n));
}
void Nhapdayso(float a[], float &n){ //Nhap day so
	do{
		printf("Nhap n: ");
	scanf("%f", &n);
	}while(!(n>=3 && n<=50)); 
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
   }	
}
void Xuatdayso(float a[], float n){ //Xuat day so 
	for(int i=0; i<n; i++){
		printf("%.2f ", a[i]);
	}
}
