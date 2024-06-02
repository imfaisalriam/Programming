#include <stdio.h>
#include <stdlib.h>

struct empAddress
{
    int street;
    char *state;
    char *city;
    char *country;
};

struct empData
{
    int age;
    char *name;
    int id;
    struct empAddress *emp_Address;
};

int main()
{
    struct empData *empInfo;
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    empInfo = (struct empData *)malloc(n * sizeof(struct empData));

    for (int i = 0; i < n; i++)
    {
        empInfo[i].name = (char *)malloc(50 * sizeof(char));
        empInfo[i].emp_Address = (struct empAddress *)malloc(sizeof(struct empAddress)); 
        empInfo[i].emp_Address->state = (char *)malloc(30 * sizeof(char));
        empInfo[i].emp_Address->city = (char *)malloc(30 * sizeof(char)); 
        empInfo[i].emp_Address->country = (char *)malloc(30 * sizeof(char)); 
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter info for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &empInfo[i].id);
        printf("Name: ");
        scanf("%s", empInfo[i].name);
        printf("Age: ");
        scanf("%d", &empInfo[i].age);
        printf("Address: ");
        scanf("%d %s %s %s", &empInfo[i].emp_Address->street, empInfo[i].emp_Address->city, empInfo[i].emp_Address->state, empInfo[i].emp_Address->country);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n%d no. Employee's info:\n", i + 1);
        printf("ID: %d\n", empInfo[i].id);
        printf("Name: %s\n", empInfo[i].name);
        printf("Age: %d\n", empInfo[i].age);
        printf("Address: %d %s %s %s\n", empInfo[i].emp_Address->street, empInfo[i].emp_Address->city, empInfo[i].emp_Address->state, empInfo[i].emp_Address->country);
    }

    for (int i = 0; i < n; i++)
    {
        free(empInfo[i].name);
        free(empInfo[i].emp_Address->state);
        free(empInfo[i].emp_Address->city);
        free(empInfo[i].emp_Address->country);
        free(empInfo[i].emp_Address);
    }
    free(empInfo);

    return 0;
}
