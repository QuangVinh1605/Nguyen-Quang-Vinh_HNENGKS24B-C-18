#include <stdio.h>
 struct SinhVien{
 	char id[20];
 	char name[20];
 	int age;
 	char phoneNumber[15];
 };
 void updateSinhVien(struct SinhVien sinhVien[],int n, char findById[]);
int main() {
	 char findById[50];
    struct SinhVien sv[50]={
   	{
   		"ptit01",
   		"nguyen van a",
   		 18,
   		 "088811156"
   	},
   	{
   		"ptit02",
   		"nguyen van b",
   		 18,
   		 "088912233"
   	},
   	{
   		"ptit03",
   		"nguyen van c",
   		 18,
   		 "0885545"
   	},
   	{
   		"ptit04",
   		"nguyen van d",
   		 19,
   		 "08875454"
   	},
   	{
   		"ptit05",
   		"nguyen van e",
   		 20,
   		 "0882334343"
   	}
   };
   printf("moi ban nhap id cua sinh vien can update: ");
   fgets(findById,sizeof(findById),stdin);
   updateSinhVien(sv,  5, findById);
  return 0;
}

	updateSinhVien(struct SinhVien sinhVien[],int n, char findById[]){
		int flag=-1;
		for(int i=0; i<n; i++){
			if(strcmp(findById,sinhVien[i].id)){
				flag=i;
				break;
			}
		}
		if(flag==-1){
			printf("khong co id thoa man");
		}else{
			
//			sinhVien[flag].name="le minh D";
			strcpy(sinhVien[flag].name,"nguyn van f");
			printf("ten sinh vien moi: %s",sinhVien[flag].name);
		}
	
	}

