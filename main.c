#include<stdio.h>
#include"memld.h"
/*
We will be putting a Memory Leak Detector library between the C application abd Kernel. By doing so we'll keep track of the all memory objects used by the application.

-> At first we'll make sure that our library is able to maintain information about all of the structures which the application it is using. We'll do some kind of structure registry or structure database. Key to search in structure database is the name of the structure.

-> At the second step our tool will keep track of all malloced variables/structures

-> And lastly our tools detect any memory leaks 
*/
int main(){
    return 0;
}
