// Nhap vao n so nguyeen (2 <= n <= 100)
// Xuat 1 so nguyen ra man hinh thong qua hang hoac bien con tro
// Tinh va tra ve so luong so nguyen to trong n so nguyen
// main
#include <stdio.h>
#include <math.h>
#define max 100
void NhapSoLuong(int a[max], int &n)
{
	do
    {
    	printf ("Nhap so luong phan tu: ");
	    scanf ("%d", &n);
	}
	while (n < 2 || n > 100);
	for (int i = 1; i <= n; i++)
    {
    	printf ("a[%d] = ", i);
    	scanf ("%d", a + i); // | &a[i]
	}
}
void XuatSoNguyen(int a[max], int i)
{
	printf ("Xuat phan tu thu: ");
	scanf ("%d", &i);
	printf ("Phan tu thu %d cua mang: %d\n", i, *(a + i)); // | a[i]
}
int KTNguyenTo(int n)
{
	if (n < 2)
	   return 0;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		   	return 0;
	} 
	return 1;
}
int SoLuongSNT(int a[max], int n)
{
	int Dem = 0;
	for (int i = 1; i <= n; i++)
	{
	    if (KTNguyenTo(*(a+i)) )
	       Dem++;
    }
	printf ("So luong so nguyen to: %d\n", Dem);
	return Dem;
}
int main()
{
	int a[max], n, i;
	NhapSoLuong(a, n);
	XuatSoNguyen(a, i);
	SoLuongSNT(a, n);
}

