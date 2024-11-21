#include <stdio.h>

int main(){
	// b1:khai bao so diem  toan, van, anh, tong diem, diem trung binh
	float toan;
    float van;
	float anh;
	// b2:nhap gia tri tung number 
	printf("nhap vao so thu nhat :");
	scanf("%f",&toan);
	printf("nhap vao so thu hai :");
	scanf("%f",&van);
	printf("nhap vao so thu ba :");
	scanf("%f",&anh);
	// b3:xu li tinh toan 
	// 3.1 :tinh tong 
	float sum = toan + van + anh; 
	// 3.2:tinh gia tri trung binh
	float average= sum/3; 
	// b4:in ra man hinh 
	// 4.1:in ra 3 so da nhap 
	printf("ba diem lan luot la %.2f %.2f %.2f \n", toan, van, anh);
	// 4.2:in ra tong 
	printf("diem tong la : %.2f /n", sum); 
	// 4.3:in ra gia tri trung binh  
	printf("diem trung binh la : %.2f\n", average);
	return 0; 
} 
