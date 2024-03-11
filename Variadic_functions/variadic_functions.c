#include "variadic_functions.h"
#include <stdio.h>
typedef struct emp{
    char emp_name[30];
    unsigned int emp_id;
    unsigned int age;
    struct emp_ *mgr;
    float salary;
    float salary_after_taxes;
}emp_t;

typedef struct student_ {
    char name[30];
    int id;
    float gpa;
} student_t;


int main(){
    size_t emp_size = calculateStructureSizeWithNames(5,
        "emp_name", sizeof(((emp_t *)0)->emp_name),
        "emp_id", sizeof(((emp_t *)0)->emp_id),
        "age", sizeof(((emp_t *)0)->age),
        "mgr", sizeof(((emp_t *)0)->mgr),
        "salary", sizeof(((emp_t *)0)->salary)
    );
    size_t name_size = calculateStructureSizeWithNames(1,"emp_name",sizeof(((emp_t *)0)->emp_name));
    size_t deneme = calculate_single_field_size("student_","id");
    return 0;
}
