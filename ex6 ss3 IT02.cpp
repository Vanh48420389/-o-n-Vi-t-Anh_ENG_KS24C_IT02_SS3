#include <stdio.h>

int main(){
	// nhap do dai canh va chieu cao cua tam giac 
	int d; // d la do dai canh day cua tam giac 
	int h; // h là chieu cao cua tam giac 
	printf("nhap do dai canh cua tam giac");
	scanf("%d",&d);
	printf("nhap chieu cao cua tam giac ");
	scanf("%d",&h);
	//xu li tinh toan
	int S = (d*h)/2;
	printf("dien tich hinh tam giac la : %d \n", S);
	return 0;
}
