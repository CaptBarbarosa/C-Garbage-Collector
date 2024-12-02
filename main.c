#include<stdio.h>
#include<stddef.h>
#include"memld.h"
/*
We will be putting a Memory Leak Detector library between the C application abd Kernel. By doing so we'll keep track of the all memory objects used by the application.

-> At first we'll make sure that our library is able to maintain information about all of the structures which the application it is using. We'll do some kind of structure registry or structure database. Key to search in structure database is the name of the structure.

-> At the second step our tool will keep track of all malloced variables/structures

-> And lastly our tools detect any memory leaks 
*/
int main(){
    // In the udemy courses I follow it said that I should have defined the names of the structure variables here but that seems like not very user friendly to me. I asked how could I dynamically extract the user names from the code and chatgpt told me to try "reflection" or "metaprogramming". So what I'm gonna try is that I'll try to dynamically extract the file names by that methods. But the thing is I don't know how. So, I'll stop this project for now and try to get back to it in a week or in couple of weeks. 12.03.2023
    return 0;
}
