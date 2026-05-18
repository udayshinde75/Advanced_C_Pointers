#include <stdio.h> 

struct Date{
    int day; 
    int month; 
    int year; 
}; 

int main(void){
    char c_arr[5]; 
    short s_arr[5]; 
    int i_arr[5]; 
    double d_arr[5]; 
    struct Date date_arr[5]; 

    puts("printing base address of arrays & element at index 2 of arrays:"); 
    /* Name of array = address of its first element = base address of array */
    printf("Base address of character array:%llu\n", c_arr); 
    printf("Address of 2nd element of character array:%llu\n", &c_arr[2]); 
    puts("--------------------------------"); 
    printf("Base address of short int array:%llu\n", s_arr); 
    printf("Address of 2nd element of short int array:%llu\n", &s_arr[2]); 
    puts("--------------------------------"); 
    printf("Base address of int array:%llu\n", i_arr); 
    printf("Address of 2nd element of int array:%llu\n", &i_arr[2]); 
    puts("--------------------------------"); 
    printf("Base address of double array:%llu\n", d_arr); 
    printf("Address of 2nd element of double array:%llu\n", &d_arr[2]); 
    puts("--------------------------------"); 
    printf("Base address of struct Date array:%llu\n", date_arr); 
    printf("Address of 2nd element of struct Date array:%llu\n", &date_arr[2]); 
    puts("--------------------------------"); 
    
    return (0); 
}


/*
Output

printing base address of arrays & element at index 2 of arrays:
Base address of character array:6130036587
Address of 2nd element of character array:6130036589
--------------------------------
Base address of short int array:6130036718
Address of 2nd element of short int array:6130036722
--------------------------------
Base address of int array:6130036696
Address of 2nd element of int array:6130036704
--------------------------------
Base address of double array:6130036656
Address of 2nd element of double array:6130036672
--------------------------------
Base address of struct Date array:6130036596
Address of 2nd element of struct Date array:6130036620
--------------------------------
*/