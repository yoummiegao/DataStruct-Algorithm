#ifndef __D_LIST_H__                //understanding the #ifndef, #define & #endif
#define __D_LIST_H__
struct d_node {
    int value;
    struct d_node* prev;
    struct d_node* next;
}                                   //take care for semicolon in struct defining part, compared with the brace in function no semicolon needed

typedef struct d_node* d_link;      //struct s_node the whole is the type
#endif