#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int age;
	char phoneNumber[20];
	
};
int main(){
	struct student PTIT ={"pham tran tan hao",18,"0707156049"};
	printf("ten hoc sinh la: %s\n",PTIT.name);
	printf("tuoi hoc sinh la: %d\n",PTIT.age);
	printf("sdt hoc sinh la: %s\n",PTIT.phoneNumber);
	return 0;
	

}
