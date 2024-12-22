#include<stdio.h>
struct SinhVien {
	char id[10];
	char fullname[50];
	int age;
	char phoneNumber[20];
	
};
typedef struct SinhVien sv;
void import_infor(sv *x);
void show_infor(sv x);
int main(){
	struct SinhVien sv[5];
	
	for (int i=0;i<5;i++){
	printf("MA SINH VIEN: %d \n",i+1);
	
	import_infor(&sv[i]);
		
	}
	for(int i=0;i<5;i++){
		printf("\n \n");
		printf("MA SINH VIEN: %d \n",i+1);
		show_infor(sv[i]);
	}
	return 0;
}
void import_infor(sv *x){
		
	printf("ten sinh vien: ");
	fgets(x->fullname,sizeof(x->fullname),stdin);
	x->fullname[strcspn(x->fullname,"\n")]='\0';
	printf("tuoi sinh vien: ");
	scanf("%d",&x->age);
	fflush(stdin);
	printf("so dien thoai cua sinh vien: ");
	fgets(x->phoneNumber,sizeof(x->phoneNumber),stdin);
	x->phoneNumber[strcspn(x->phoneNumber,"\n")]='\0';
	}
	void show_infor(sv x){
		printf("ten sinh vien: %s \n",x.fullname);
		printf("tuoi sinh vien: %d \n",x.age);
		printf("so dien thoai cua sinh vien: %s",x.phoneNumber);
		
	}
