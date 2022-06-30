#include <stdio.h>
#include <string.h>


struct Student
{
    int age;
    int sex;
    char name[20];
};  // 分号不能省略


int main(void)
{
    // 普通结构体变量
    struct Student stu = {100, 20, "zhouan"};
    printf("%d, %d, %s\n", stu.age, stu.sex, stu.name);

    //stu.name = "xdd"; // 不能直接复制，需要strcpy函数
    strcpy(stu.name, "xdd");
    stu.age = 99;
    (*&stu).sex = 1;
    printf("%d, %d, %s\n", stu.age, stu.sex, stu.name);


    // 指针结构体变量
    struct Student * pst;
    pst = &stu;
    // pst -> age 等价于 (*pst).age 等价于 stu.age
    pst -> age = 235;
    (*pst).sex = 25;
    strcpy(pst -> name, "aaa");
    printf("%d, %d, %s\n", stu.age, stu.sex, stu.name);
    return 0;
}
