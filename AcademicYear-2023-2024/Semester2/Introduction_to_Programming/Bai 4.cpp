#include<stdio.h>
void hoasangthuong(char ch){
	ch =ch +32;
	printf("Ky tu chu cai thuong la %c\n", ch);
}
void thuongsanghoa(char ch){
	ch =ch -32;
	printf("Ky tu chu cai hoa la %c\n", ch);
}
////////////////
int KT_nguyenam(char ch){
	int kq;
	switch(ch){
		case 'A': case 'I': case 'E': case 'O': case 'U':
		case 'a': case 'i': case 'e': case 'o': case 'u':
			kq=1;
			break;
		default:
			kq=0;
	}
	return kq;
}
//////////////////////
void MaSCII(char ch){
	printf("Ma SCII cua %c la %d\n", ch, ch);
}
/////////////////////////
int main(){
	char c;
	printf("Nhap vao ky tu:");
	scanf("%c", &c);
	if(!(c>='A'&&c<='Z') && !(c>='a'&&c<='z'))
		printf("Khong doi duoc.\n");
	else if(c>='A'&&c<='Z')
			hoasangthuong(c);
		else
			thuongsanghoa(c);
	if(KT_nguyenam(c) ==1)
		printf("%c la nguyen am\n", c);
	else
		printf("%c khong phai la nguyen am\n", c);
	MaSCII(c);
	return 0;		
}
//////////////////////////////

