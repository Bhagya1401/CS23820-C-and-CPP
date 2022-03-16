//
// Created by bhagy on 11/11/2021.
//

#ifndef WORKSHEET4_LISTS_DEF_H
#define WORKSHEET4_LISTS_DEF_H

#include <stdbool.h>

typedef struct book_info * node_pointer;

typedef struct book_info{
    char author[100];
    char book_name[100];
    long ISBN;
    node_pointer next;
}book;


node_pointer make_book( char new_book[100], char new_author[100], long new_ISBN);

void add_to_head(node_pointer *ptr_to_head ,node_pointer new_node_ptr);

void display_books (node_pointer list_ptr);

bool find_book(char search_ISBN[12], node_pointer list_ptr);

void add_to_tail(node_pointer *ptr_to_head ,node_pointer new_node_ptr);

void isbn_order_list (node_pointer *ptr_to_head ,node_pointer new_node_ptr);

#endif //WORKSHEET4_LISTS_DEF_H
