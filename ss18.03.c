#include <stdio.h>
struct SinhVien{
	char hoten[50];
	int age;
	char phoneNumber[20];
	 
};
typedef struct SinhVien SinhVien;
void nhap_thong_tin(SinhVien *x);
void in_thong_tin(SinhVien *x);
int main(){
	struct SinhVien SinhVien[5];
	for(int i=0;i<5;i++){
		printf("moi ban nhap thong tin sinh vien thu %d \n",i+1);
		nhap_thong_tin(&SinhVien[i]);
	}
	for(int i=0;i<5;i++){
		printf("thong tin sinh vien %d \n",i+1);
		in_thong_tin(&SinhVien[i]);
	}
return 0;
}
void nhap_thong_tin(SinhVien *x){
	
	printf("nhap ho va ten: ");
	fgets(x->hoten,50,stdin);
	printf("nhap tuoi: ");
	scanf("%d",&x->age);
	fflush(stdin);
	printf("nhap so dien thoai: ");
	fgets(x->phoneNumber,20,stdin);
}
void in_thong_tin(SinhVien *x){
	printf("ho va ten: %s\n",x->hoten);
	printf("tuoi: %d\n",x->age);
	printf("so dien thoai: %s\n",x->phoneNumber);
}
	
 
