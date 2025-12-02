//stuct Student definition
#include<stdio.h>
struct Student
{
    int id;
    char name[50];
    int marks;
};
int main()
{
    struct Student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Student %d ID: ", i);
        scanf("%d", &s[i].id);
        printf("Enter Student %d Name: ", i);
        scanf(" %s", s[i].name);
        printf("Enter Student %d Marks: ", i);
        scanf("%d", &s[i].marks);
    }
    printf("id : %d, name : %s, marks : %d\n", s[1].id, s[1].name, s[1].marks);
    return 0;
}