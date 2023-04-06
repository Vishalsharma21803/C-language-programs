#include <stdio.h>
struct student{
    char name[20];
    int age;
    int mobile ;
    int regid;
    float cgpa;
};
void main()
{
    struct student st1;
    printf("Enter the name: ");
    scanf("%s",&st1.name);
    printf("Enter the age: ");
    scanf("%d",&st1.age);
    printf("Enter the mobile number: ");
    scanf("%d",&st1.mobile);
    printf("Enter the regid: ");
    scanf("%d",&st1.regid);
    printf("Enter the cgpa: ");
    scanf("%f",&st1.cgpa);
    printf("%s %d %d %f",st1.name,st1.age,st1.mobile,st1.cgpa);
}

