#include <stdio.h>
void nhapdulieu(float &w, float &h){
     printf ("Nhap can nang (kg): ");
     scanf ("%f", &w);
     printf ("Nhap chieu cao (m): ");
     scanf ("%f", &h);
}
float tinh(float w, float h){
	  float BMI = w/(h*h);
	  printf ("BMI = %.2f", BMI);
	  return BMI;
}
void tinhtrang(float BMI){
    if(BMI<18){
    printf ("\nTinh trang:thieu can");
}
    else if(BMI>=8 && BMI<=25){
    printf("\nTinh trang:binh thuong");
}
    else if(BMI>25 && BMI<30){
    printf("\nTinh trang:thua can");
}
    else{
        printf("\nTinh trang:beo phi");
}
}
int main(){
	float cannang, chieucao, BMI;
	nhapdulieu(cannang, chieucao);
	tinhtrang(tinh(cannang, chieucao));
	return 0;
}
