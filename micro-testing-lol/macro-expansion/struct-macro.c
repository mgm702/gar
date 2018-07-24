/*
 * =====================================================================================
 *
 *       Filename:  struct-macro.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/08/2018 23:06:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int id;
    char* name;
} employee;

#define EMPLOYEE(...) (&(employee) { .id = 0, .name = "none", ##__VA_ARGS__ })

employee* john = EMPLOYEE(.name="John", .id= 20);  // no id initialization
employee* jane = EMPLOYEE(.id=5);         // no name initialization

int main() {
    printf("%s\n", john->name);
    printf("%s\n", jane->name);
    printf("%d\n", jane->id);
    printf("%d\n", john->id);
}
