#include<stdio.h>
struct Students{
    int roll_number;
char name[50];
    float marks;
};
int main()
{
    struct Students S1;
    printf ("Enter the roll number");
    scanf ("%d",&S1.roll_number);
    printf("enter the student name:");
    scanf("%49s",& S1.name);
    printf("enter the student mark:");
    scanf("%f",&S1.marks);
    printf("\nRollnumber:%d\n",S1.roll_number);
    printf("name=%s\n",S1.name);
    printf("marks=%f\n",S1.marks);
    return 0;
}
