#include <stdio.h>
#include <string.h>

struct Student
{
    int s_id;
    char s_name[100];
    int s_age;
};

int main(void)
{
    // 第一种结构体方式
    struct Student st = {1001, "zhouan", 22};
    printf("%d, %s, %d\n", st.s_id, st.s_name, st.s_age);
    st.s_id = 999;
    // st.s_name = "123";   // 字符串不能采取这样的赋值
    strcpy(st.s_name, "zky");
    st.s_age = 24;
    printf("%d, %s, %d\n", st.s_id, st.s_name, st.s_age);

    // 第二种结构体方式
    struct Student *pst;
    pst = &st;
    pst->s_id = 1000;
    strcpy(pst->s_name, "xdd");
    pst->s_age = 18;
    
    // pst->sid等价于(*pst).s_id;
    printf("%d, %s, %d\n", pst->s_id, pst->s_name, pst->s_age);
    printf("%d, %s, %d\n", (*pst).s_id, (*pst).s_name, (*pst).s_age);

    return 0;
}