#include <stdio.h>
int main(){
	//khai bao bien r nhap tu ban phim 
	const float pi = 3.14;
	int r;
	printf("nhap gia tri cua r : ");
	scanf("%d",& r);
	//xu li tinh toan 
	float C = 2 * r * pi;
	float S = r * r * pi;
	// in ra man hinh ket qua 
	printf("chu vi hinh tron la :%.2f\n", C);
	printf("dien tich hinh tron la :%.2f\n", S); 
	return 0; 
} 
