#include <stdio.h>
struct student{
    char name[20];
    int age;
    char sex;
    float gpa;
};
void GetStudent(struct student child[][10], int *room) {
    scanf("%d", room);
    if(*room > 20){
        *room = 20;
    }
    for(int i = 0; i < *room; i++){
        for(int j = 0; j < 10; j++){
            scanf("%s", child[i][j].name);
            scanf("%d", &child[i][j].age);
            scanf(" %c", &child[i][j].sex);
            scanf("%f", &child[i][j].gpa);
        }
    }
}
int main(){
    struct student children[20][10];
    int group;
    GetStudent(children, &group);
    return 0;
}