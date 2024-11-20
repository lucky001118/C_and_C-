#include<stdio.h>

    struct date
{
int day;
int month;
int year;
};
 
struct persional
{
    char name[20];
    //here is structure inside the structure
    struct date birthday;
    float salary;
};
void maim()
{
    struct persional lucky={"Lucky Manikpuri",{18,03,2002},75000.00};
    printf("%s %d %d %d %f",lucky.name,lucky.birthday.day,lucky.birthday.month,lucky.birthday.year,lucky.salary);


}