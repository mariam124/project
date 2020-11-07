#include <stdio.h>
#include <stdlib.h>
struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    char name[30];
    struct date birth;
    int salary;
}arr[10];

int i=0;
int n=0;
int Max=0;

int main()
{
    //printf("Enter the number of employees:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
       printf("Employee %d:\n",i+1);
       printf("Name: ");
       fflush(stdin);
       fgets (arr[i].name,sizeof(arr[i].name),stdin);
       printf("Date of Birth:\n");
       printf ("Day: ");
       scanf ("%d",&arr[i].birth.day);
       printf ("Month: ");
       scanf ("%d",&arr[i].birth.month);
       printf ("Year: ");
       scanf ("%d",&arr[i].birth.year);
       printf ("Salary: ");
       scanf("%d",&arr[i].salary);
       printf("\n");
    }
    Max=arr[0].salary;
    for (i=1;i<n;i++){
        if (Max<arr[i].salary){
           Max=arr[i].salary;
        }
    }
    printf("\nThe Employee of Maximum Salary:\n");
    for (i=0;i<n;i++){
        if (arr[i].salary==Max){
            printf("Name: %s",arr[i].name);
            printf("Date of birth: %d / %d / %d\n",arr[i].birth.day,arr[i].birth.month,arr[i].birth.year);
            printf ("Salary: %d\n",arr[i].salary);
            printf("\n");
        }
    }
    return 0;
}

