#ifndef MEMLD_H
#define MEMLD_H
#include<stdio.h>
#include<stdlib.h>
#define MAX_CHAR_SIZE 128


typedef struct structure_database structure_database;
typedef struct struct_field_info struct_field_info;
typedef struct data_type_t data_type_t;

struct structure_database{
    char name_of_the_structure[MAX_CHAR_SIZE]; //This is the name of the structure we have in our DB. We'll be able to keep track of all structures thanks to this. This is a key, if you will.
    unsigned int ds_size; // What is the size of the field. 
    unsigned int n_fields; // How many fields does the structure has.
    struct_field_info *field; //Array of fields. These will keep the information about every field within a structure. For example lets say structure Father has a field char *middle_name; This part of our code will keep track of it.  
    structure_database *next; // Points to the next. 
};


struct struct_field_info{
    char fname[MAX_CHAR_SIZE]; // Name of the field. 
    unsigned int size; //Size of a field.
    unsigned int offset; // Displacement of the field from the beginning of the structure
    data_type_t dtype;
    char nested_str_name[MAX_CHAR_SIZE];
};


struct 



#endif
