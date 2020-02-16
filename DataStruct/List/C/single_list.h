#ifndef __S_LIST_H__                //understanding the #ifndef, #define & #endif
#define __S_LIST_H__
struct s_node {
    int value;
    struct node* next;
};                                  //take care for semicolon in struct defining part, compared with the brace in function no semicolon needed


typedef struct s_node* s_link;      //struct s_node the whole is the type

#endif