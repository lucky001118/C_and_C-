#include <stdio.h>

struct student
{
    char arr[30];
    int roll;
    int id_no;
};
void main()
{

    struct student st1 = {"Lucky", 30030222, 545};
    struct student st2 = {"Manikpri", 30030223, 546};
    struct student st3 = {"Soniya", 30030224, 548};
    struct student st4 = {"Sweety", 30030225, 549};
    printf("NAME          ROLL NUMBER          ID");
    printf("\n\n");
    printf("%s        %d             %d \n ", st2.arr, st2.roll, st2.id_no);
    printf("%s        %d             %d \n", st1.arr, st1.roll, st1.id_no);
    printf("%s        %d             %d \n", st3.arr, st3.roll, st3.id_no);
    printf("%s        %d             %d \n", st4.arr, st4.roll, st4.id_no);
}
