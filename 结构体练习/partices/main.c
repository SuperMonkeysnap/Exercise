#include <stdio.h>
#include <string.h> // 调用strcpy函数需要添加这个头文件。

/**
 定义一个结构体
 */
struct student
{
    int id_number;
    char name[100];
    int age;
};

/**
 打印输出所有学生结构体的信息
 */
void print_stdu(struct student st)
{
    printf("学号是%d,名字是%s,年龄是%d岁。\n",st.id_number,st.name,st.age);
}
/**
 修改该结构体的值
 所有值全部归零
 */
void change_stdu(struct student *pst)
{
    strcpy((*pst).name, "NULL");
    (*pst).id_number = 0;
    (*pst).age = 0;
}

/**
 主程序
 */
int main(int argc, const char * argv[]) {

    //创建一个结构体变量
    struct student Haris = {22, "Haris", 21};
    //打印输出
    printf("%d,%s,%d\n", Haris.id_number,Haris.name,Haris.age);
    print_stdu(Haris);
    /**
     重新赋值
     */
    Haris.id_number = 2;
    strcpy(Haris.name,"Michael"); //想要改变结构体变量的名字需要调用函数strcpy.
    Haris.age = 33;
    printf("%d,%s,%d\n",Haris.id_number,Haris.name,Haris.age);
    print_stdu(Haris);
    
    printf("===================\n");
    /**
     定义一个结构体变量，名字叫Maxwell
     */
    struct student Maxwell;
    /**
     定义一个结构体指针变量，变量名为pst
     */
    struct student *pst;
    /**
     结构体指针变量指向结构体变量Maxxwell
     */
    pst = &Maxwell;
    /**
     通过结构体指针变量对结构体变量Maxxwell赋值
     */
    strcpy((*pst).name, "Maxwell");
    (*pst).age = 50;
    (*pst).id_number = 77;
    printf("%d,%s,%d\n",(*pst).id_number,(*pst).name,(*pst).age);
    print_stdu(Maxwell);
    /**
     调用change——stdu函数，让这个结构体变量的属性全部初始化；
     */
    change_stdu(pst);
    /**
     打印结果
     */
    print_stdu(Maxwell);
    
    return 0;
}
