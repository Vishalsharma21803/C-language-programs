#include <stdio.h>
struct student
{
    char *name;
    int age;
    float weight;
    char *course;
};

int main()
{
    struct student myStudent;
    myStudent.name = "Sara";
    myStudent.age = 23;
    myStudent.weight = 70.5;
    myStudent.course = "CSE";

    printf("student name: %s, student age: %d, student weight: %f, student course: %s", myStudent.name, myStudent.age, myStudent.weight, myStudent.course);

    return 0;
}