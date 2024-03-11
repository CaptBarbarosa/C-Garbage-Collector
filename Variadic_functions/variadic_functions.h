#include <stdarg.h>
#include<stdio.h>
#include <string.h>

int my_sum(int count, ...) {
    int result = 0, i = 0;
    va_list args;
    va_start(args, count);
    for (; i < count; i++) {
        int value = va_arg(args, int);  // Ensure that the argument is of type int
        result += value;
    }
    va_end(args);
    return result;
}


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
