#include <stdio.h>
struct SinhVien{
	char name[20];
	char age;
	char phoneNumber[20];
	
};
int main(){
	struct SinhVien sv1;
	printf("moi ban nhap vao ten cua sinh vien: ");
	fgets(sv1.name,20,stdin);
	printf("moi ban nhap vao tuoi cua sinh vien: ");
	scanf("%d",&sv1.age);
	fflush(stdin);
	printf("moi ban nhap vao so dien thoai cua sinh vien: ");
	fgets(sv1.phoneNumber,20,stdin);
	printf("ten cua sinh vien la: %s \n",sv1.name);
	printf("tuoi cua sinh vien la: %d \n",sv1.age);
	printf("so dien thoai cua sinh vien la: %s",sv1.phoneNumber);
	
}
