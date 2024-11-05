//nhap theo kieu prototype
#include<stdio.h>
#include<math.h>
void Nhapso(int &n);// n la tham chieu
int Kiemtrasochan(int n);
int KT_Sohoanhao(int n);
int KT_Songuyento(int n);
void Tongsochan(int n); //tinh tong cac so duong chan nho hon n
void Demsonguyento(int n);
int KT_Sochinhphuong(int n);
///////////////////////////////////////////////
int main(){
	int n;
	Nhapso(n); //tham so hinh thuc
	if(Kiemtrasochan(n)==1)
		printf("%d la so chan", n);
	else
		printf("%d khong phai la so chan", n);
//cau b cach 2
//	kq=Kiemtrasochan(n);
//	printf("%d la so chan", kq);
//	return 0;

//cau c
	if(KT_Sohoanhao(n)==1)
		printf("\n%d la so hoan hao", n);
	else 
		printf("\n%d khong la so hoan hao", n);

//cau d
	if(KT_Songuyento(n)==1)
		printf("\n%d la so nguyen to", n);
	else 
		printf("\n%d khong la so nguyen to", n);
// cau e
	Tongsochan(n);
//cau f
	Demsonguyento(n);
//cau g
	if(KT_Sochinhphuong(n)==1)
		printf("\n%d la so chinh phuong", n);
	else 
		printf("\n%d khong la so chinh phuong", n);

}
//////////////////////////////////////////////
//cau a
void Nhapso(int &n){
	do{
		printf("Nhap so nguyen n: ");
		scanf("%d", &n);
	}while(n<=10 || n>=1000);
}
////////////////////////////////
//cau b

//cach 1
  int Kiemtrasochan(int n){
	if(n % 2 ==0)
		return 1;
	//else
		return 0;
}
//cach 2
//		return(n%2==0)? 1:0;
////////////////////////////////////
//cau c
int KT_Sohoanhao(int n){
	int tong=0;
	for(int i=1; i<=n-1;i++){
		if(n%i==0)
		tong = tong +i;
	}
	if(tong==n)
		return 1; // n la so hoan hao
	else
		return 0;
}
// cau d
int  KT_Songuyento(int n){
	int dem = 0;
	for (int i=1;i<=n; i++){
				if(n%i==0)
			dem++;
	}
	if(dem==2) return 1;
	else		return 0;
}
//cau e
void Tongsochan(int n){
	int tong=0;
	for (int i =1;i<=n;i++)
	if(Kiemtrasochan(i))
	tong = tong + i;
	printf("\nTong so chan < %d =%d", n, tong);
	}
	//cau f
void Demsonguyento(int n){
	int dem = 0;
	for(int i=1;i<=n;i++){
		if(KT_Songuyento(i)==1)
			dem++;
	}
	printf("\nCac so nguyen to < %d =%d", n, dem);
}
//cau g
int KT_Sochinhphuong(int n){
	int socan = sqrt(n); // ham sqrt tinh can bac 2
	if(n=pow(socan,2)) // ham pow tinh luy thua
		return 1; //n la so chinh phuong
		return 0;
}
