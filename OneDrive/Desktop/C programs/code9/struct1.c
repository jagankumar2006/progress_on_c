#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll;
	char name[100];
	int age;
	int marks;
};
int main(){
	int n;
	printf("Enter number of students:");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++){
		scanf("%d",&s[i].roll);
		scanf(" %[^\n]",s[i].name);
		scanf("%d",&s[i].age);
		scanf("%d",&s[i].marks);
	}
	for(int i=0;i<n;i++){
		printf("Roll No:%d\n",s[i].roll);
		printf("Name:%s\n",s[i].name);
		printf("Age:%d\n",s[i].age);
		printf("Marks:%d\n",s[i].marks);
	}
	return 0;
}