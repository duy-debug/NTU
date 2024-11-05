#include<stdio.h>
#include<math.h>
void Nhapso(int &n){
	do{
		printf("Nhap n:");
		scanf("%d", &n);
	}while(!(n>0));
}
//////////////////////////////////////
//cau a T1=1+2+3+...+n
// Vong lap i tu 1-> n
// CtTQ: => n=i: T1(i)= T1<i-1> +1
int T1(int n){
	int s=0;
	for(int i=1;i<=n;i++)
		s=s+i;
	return s;
} 
////////////////////////////////////////
//cau b T2=1-2+3-4+...+((-1)^n-1) *i
//Vong lap i tu 1->n
//CTTq: n->i: T2<i> T2<i-1> +(-1)^i-1 *i
int T2(int n){
	int s=0;
	for(int i=1;i<=n;i++)
		s= s+pow(-1,i-1)*i;
	return s;
}
//////////////////////////////////////////
//cau c: T3=1+1/2+1/3+1/4+...+1/n
float T3 (float n){
	float s=0;
	for(int i=1;i<=n;i++)
		s= s+(float)1/i;
	return s;
}
/////////////////////////////////////////
//cau d
float T4_C1(float n){
	float s=0;
	for(int i=1; i<=n;i++)
		s=s+1.0/(T1(i));
	return s;
}
float T4_C2(float n){
	float s=0;
	int tong=0;
	for(int i=1;i<=n;i++){
		tong = tong + i;
		s=s+1.0/tong;
	}
	return s;
}
////////////////////////////////////////
//cau e
long T5(int n){
	long tich=1;
	for(int i=1;i<=n;i++)
	tich=tich*i;
	return tich;
}
////////////////////////////////////////
//Cau T6
float T6(float n){
	float s=0;
	for(int i=1;i<=n;i++){
		s=s+1.0/(2*i);
	}
	return s;
}
////////////////////////////////////////
//cau T7
int T7(int n){
	int s=0;
	for(int i=1; i<=n;i++){
		s= s+pow(3,i);
	} 
	return s;
}
/////////////////////////////////////////
//cauT8
float T8(float n){
	float s=0;
	for(int i=1;i<=n;i++){
		s=s+sqrt(i);
	}
	return s;
}
/////////////////////////////////////////
//cau T9
float T9(float n){
	float s=0;
	for(int i=1;i<=n;i++){
		s=sqrt(2+s);
	}
	return s;
}
///////////////////////////////////////////
//cau T10
float T10(float n){
	float s=0;
		s= sqrt(T5(n))/T1(n);
	return s;
}
///////////////////////////////////////
//Cau T11
float T11(int n){
	long tu=0;
	int mau=0;
	float tong;
	for(int i=1;i<=n;i++){
		tu= tu + pow(i,i);
	}
	for(int i=0;i<=n;i++){
		mau = mau +((2*i)+1);
	}
	printf("\ntu=%d",tu);
	printf("\nmau=%d\n",mau);
	tong=(sqrt(tu))/mau;
	return tong;
}
/////////////////////////////////////////
int main(){
	int n;
	float tich;
	Nhapso(n);
//cau a
	printf("T1=%d\n", T1(n));
//cau b
	printf("T2=%d\n", T2(n));
//cau c
	printf("T3=%.2f\n", T3(n));
//cau d
	printf("T4=%.2f\n", T4_C1(n));
	printf("T4=%.2f\n", T4_C2(n));
//cau e
	printf("T5=%ld\n", T5(n));
//cau T6
	printf("T6=%.2f\n", T6(n));
//cau T7
	printf("T7=%d\n", T7(n));
//cau T8
	printf("T8=%.2f\n", T8(n));
//cau T9
	printf("T9=%.2f\n", T9(n));
//Cau T10
	printf("T10=%.2f\n", T10(n));
	tich= sqrt(T5(n))/T1(n);
	printf("T10=%.2f\n", tich);
//cau T11
	printf("T11=%.2f\n", T11(n));
	return 0;
}
