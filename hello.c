#include<stdio.h>

// int main(){
//     printf("hello world");
//     return 0;
// }



// variables -- the name of a memory location which stores some data


// int main(){

//     int number = 25;
//     char star = "*";
//     int age = 22;
//     float pi = 3.14;

// }

// variables are vase sensitive 
// 1st character is alphabet or _
// no comma/ blanch space
// no other symbol than _



// keywords -- reserved owrds having some specific meaning in compiler


/* 
multiple line commment
*/

// int main(){
//     printf("helloC \n");
//     printf("helloC \n");
//     printf("helloC \n");
//     printf("helloC \n");
//     printf("helloC \n");
// }



//output

/*
integers
printf("age is %d", age);


real numbers
printf("value of pi is %f", pi);


characters
printf("value of star is %c", star);
*/

// int main(){
//     printf("adarsh is here in the world of coding");
//     return 0;
// }


//input

// scanf("%d", &age);


int main(){
    int age;
    printf("eneter age");
    scanf("%d", &age);
    printf("age is : %d", age);
    return 0;
}