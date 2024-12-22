#include<stdio.h>
struct SinhVien{
	char name[20];
	char age;
	char phoneNumber[20];
	
}; 
int main(){
	struct SinhVien sv1={"Vinh",18,"0384001030"};
	struct SinhVien sv2;
	printf("ten sinh vien :%s \n",sv1.name);
	printf("tuoi sinh vien: %d \n",sv1.age);
	printf("so dien thoai sinh vien: %s \n",sv1.phoneNumber);
}
