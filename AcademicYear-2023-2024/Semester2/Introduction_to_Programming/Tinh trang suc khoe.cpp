#include <stdio.h>
void Nhap (float &W, float &H) 
{ 
printf ("Nhap can nang: ");
scanf ("%f", &W);
printf ("Nhap chieu cao: ");
scanf ("%f", &H);
}
float Tinh (float W, float H)
{ 
	  float BMI = W / (H * H);
	  printf ("BMI = %.2f", BMI);
	  return BMI;
}
void Tinhtrang (float BMI)
{
	if (BMI < 18)
	   printf ("\nTinh trang: Thieu can");
	          else if (BMI >= 30)
	                  printf ("\nTinh trang: Beo phi");
	                  else if (BMI > 25 && BMI <30)
	                          printf ("\nTinh trang: Thua can");
	                          else printf ("\nTinh trang: Binh thuong");
}
int main ()
{
	float n1, n2, n;
	Nhap (n1, n2);
	Tinhtrang (Tinh (n1, n2));
	return 0;
}
      
      

