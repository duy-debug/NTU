#include<stdio.h>
#include<math.h>
void Nhapso (int &n){
	do{
		printf("Nhap n:");
		scanf("%d", &n);
	}while(!(n>10 && n<1000)); //while(n<10 ||n>1000)
}
/////////////////////////////////
//cau b: Kiem tra so chan
int KT_sochan(int n){
	if(n % 2 ==0)
		return 1;
	else
		return 0;
}
///////////////////////////////////
//cau c: 
// So hoan hao la so co tong cac uoc so bang so do
//VD: 6 = 1 + 2 + 3
int KT_sohoanhao(int n){
	int tong = 0;
	for(int i=1;i<=n/2;i++){
		if(n % i == 0)
			tong = tong +i;
	}
	if(tong==n)
		return 1;
	return 0;
}
/////////////////////////////////
//cau d: KT n co phai la so nguyen to hay khong?
int KT_songuyento(int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(n % i ==0) // i la uoc so
			dem++;
	}
	if(dem == 2)
		return 1;
	return 0;
}
/////////////////////////////
//cau e
void Tongduongchan(int n){
	int tong=0;
	for(int i=2;i<=n;i++){
		if(KT_sochan(i))
			tong = tong +i;
	}
	printf("Tong cac so duong <= %d la %d", n, tong);
}
int Tongduongchan_C2(int n){
	int tong=0;
	for(int i=2;i<=n;i++){
		if(KT_sochan(i))
			tong = tong +i;
	}
	return tong;}
////////////////////////////
//cau f
int Demsonguyento(int n){
	int dem =0;
	for(int i=1;i<n;i++){
		if(KT_songuyento(i) == 1) //i la so nguyen to
		dem++; 
	}
	return dem;
}
 
////////////////////////////
//cau g
int KT_sochinhphuong(int n){
	int Socan = sqrt(n);
	if(pow(Socan,2) == n)
		return 1;
	return 0;
}
//////////////////////
int main()
{
	int n;
	Nhapso(n);
	printf("Nhap n = %d", n);
	if(KT_sochan(n) == 1)
		printf("\n%d la so chan", n);
	else
		printf("\n%d la so le", n);
//cau c
	if(KT_sohoanhao(n))
		printf("\n%d la so hoan hao", n);
	else
		printf("\n%d khong la so hoan hao ", n);
//cau d
	if(KT_songuyento(n))
		printf("\n%d la so nguyen to", n);
	else
		printf("\n%d khong la so nguyen to ", n);
//cau e
//	Tongduongchan(n);
	printf("\nTong cac so duong <= %d la %d",n,Tongduongchan_C2(n));
//cau f
	printf("\nCo %d so nguyen to <= %d",Demsonguyento(n), n);
//cau g
	if(KT_sochinhphuong(n))
		printf("\n%d la so chinh phuong", n);
	else
		printf("\n%d khong la so chinh phuong ", n);
	return 0;
}
