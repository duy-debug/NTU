//bai 2
// neu trong de thay tu kiem tra thi nen dung ham int,
// tra ve return 1 va return 0
// kiem tra yes no thi tra ve 1 0( 1 dung, 0 sai)
//so sanh thi tra ve return a, return b, return ...
#include<stdio.h>
void Nhapso(int &x, int &y){
	//int &a la truyen theo tham chieu(tham bien)
		printf("Nhap vao 2 so nguyen:");
	scanf("%d%d", &x,&y);
}
// cau a kiem tra chia het
//cach 1
void Kiemtrachiahet(int x, int y){
	if(x%y==0)
		printf("\n%d chia het cho %d", x,y);
	else
		printf("\n%d khong chia het cho %d", x,y);
}

//cach 2
int Kiemtrachiahet_c2(int x, int y){
	if(x%y==0)
		return 1;
	else
		return 0;
}
//cau b: Tim so lon nhat trong 2 so
int Timmax(int a, int b){
//	if(a>b)
//		return a;
//	else
//		return b;
	int max;
	max=(a>b)? a:b;
}

////////////////////////////////////
int main(){
	int x,y;
	int kq;
	Nhapso(x,y);
	Kiemtrachiahet(x,y);
	
	//kiem tra theo cach 2
//	if(Kiemtrachiahet_c2(x,y)==1)
	kq=Kiemtrachiahet_c2(x,y);
	if(kq==1)
		printf("\n%d chia het cho %d", x,y);
	else
		printf("\n%d khong chia het cho %d", x,y);
//cau b: Tim 2 so
	kq=Timmax(x,y);
	printf("\nSolonnhat la %d", kq);
	return 0;
}
