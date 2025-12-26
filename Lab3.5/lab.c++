#include <stdio.h>
struct student{
    char name[20];
    int age;
    char sex;
    float gpa;
};
struct student (*GetStudent(int *room))[10]{
    static struct student child[20][10];
    printf("Enter number of rooms: ");
    scanf("%d", room);
    for(int i = 0; i < *room; i++){
        for (int j = 0; j < 10; j++) {
            printf("Room %d, Student %d Name: ", i + 1, j + 1);
            scanf("%s", child[i][j].name);
        }
    }
    return child;
}
int main(){
    struct student (*children)[10];
    int group;
    children = GetStudent(&group);
    return 0;
}