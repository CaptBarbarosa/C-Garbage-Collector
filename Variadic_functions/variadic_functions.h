#include <stdarg.h>
#include<stdio.h>
#include <string.h>
size_t calculateStructureSizeWithNames(int num_fields, ...){
    size_t total_size = 0;
    va_list args;
    va_start(args, num_fields);
    for (int i = 0; i < num_fields; ++i) {
        const char *field_name = va_arg(args, const char*);
        size_t field_size = va_arg(args, size_t);
        printf("Field: %s, Size: %zu\n", field_name, field_size);
        total_size += field_size;
    }
    va_end(args);
    return total_size;
}

size_t calculate_single_field_size(const char *field_name,const char *struct_name, ...){
    const char *format;
    va_list args;
    va_start(args,struct_name);
    while((*format == 's' && strcmp(field_name,format+1) == 0 )){
        printf("There exists a field name called %s in %s",struct_name,field_name);
        //return sizeof(())
    }
    va_end(args);
    return 0;
}
