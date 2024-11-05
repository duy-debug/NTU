#include <stdio.h>
#include <stdlib.h>
#define max 20
void readfile(char *s, int a[], int &n, int &m){
	FILE *f=fopen(s,"r");
	if(f==NULL){
		printf("Khong the mo file");
	}
	else{
		fscanf(f,"%d",&n);
		fscanf(f,"%d",&m);
		for(int i=0; i<n; i++){
			fscanf(f,"%d",&a[i]);
		}
		fclose(f);
	}
}

int main(){
	int a[max], n, m;
	char *s="ATM.inp";
	readfile(s,a,n,m);
}
