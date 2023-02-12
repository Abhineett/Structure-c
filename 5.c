#include<stdio.h>
struct Employee
{
    int id;
    char a[20];
    float salary;

};
int main()
{
    struct Employee e1;

    e1.id=1;
    strcpy(e1.a,"RAM");
    e1.salary=4000.08;
    return 0;
}
