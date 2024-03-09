#ifndef MEMLD_H
#define MEMLD_H


#define MAX_CHAR_SIZE 128


typedef struct structure_database structure_database;
typedef struct struct_field_info struct_field_info;


typedef enum{ // Data types in C.
    UINT8,
    UINT32,
    INT32,
    CHAR,
    OBJ_PTR,
    FLOAT,
    DOUBLE,
    OBJ_STRUCT
} data_type_t;


struct struct_field_info{ // This is the information about the fields( or variables) of structure
    char fname[MAX_CHAR_SIZE]; // Name of the field. 
    unsigned int size; //Size of a field.
    unsigned int offset; // Displacement of the field from the beginning of the structure
    data_type_t dtype;
    char nested_str_name[MAX_CHAR_SIZE];
};


struct structure_database{
    char name_of_the_structure[MAX_CHAR_SIZE]; //This is the name of the structure we have in our DB. We'll be able to keep track of all structures thanks to this. This is a key, if you will.
    unsigned int ds_size; // What is the size of the field. 
    unsigned int n_fields; // How many fields does the structure has.
    struct_field_info *field; //Array of fields. These will keep the information about every field within a structure. For example lets say structure Father has a field char *middle_name; This part of our code will keep track of it.  
    structure_database *next; // Points to the next. 
};

typedef struct db_head_{
    struct structure_database *head;
    int count;
}db_head;
#endif

/*
Assume that we have the following structure.
typedef struct Student{
    char std_name[30];
    unsigned int entry_year;
    unsigned int age;
    struct Student *student_advisor;
    float student_budget;
}student;

Our "structure_database" will be storing the following.
name_of_the_structure = student
ds_size = sizeof(student)
n_fields = 5
fields
next = NULL

---> The fields of the structure_database will keep the information regarding the variables in that structure.
In the fields[0] we will store the "std_name", sizeof(char)*30, offset=0, CHAR, NULL
...
...
In the fields[3] student_advisor, sizeof(void *), 38, OBJ_PTR, student will be kept.
*/
