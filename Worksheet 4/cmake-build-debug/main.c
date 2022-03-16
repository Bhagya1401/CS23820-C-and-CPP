#include <stdio.h>
#include "lists_def.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



int main() {
    node_pointer head = NULL;

    FILE *file;


    char file_name[20];

    printf("Enter name of file: ");
    scanf("%[^\n]", file_name);
    printf("\n");

    file = fopen(file_name,"r");
    if (file == NULL)
    {
        printf("File does not exists in system or not found. \n");
    }

    while(!feof(file)){
        char author[100];
        char book_name[100];
        char ISBN[12];
        char *tmp_ptr;
        node_pointer hold_book;

        fscanf(file, " %[^\n]", author);
        fscanf(file, " %[^\n]", book_name);
        fscanf(file, " %[^\n]", ISBN);
   //     printf("%s \n%s \n%s \n\n",author,book_name,ISBN);
        hold_book = make_book(author, book_name, strtol(ISBN,&tmp_ptr,10)); // Holds the book that is created
    //    add_to_tail(&head,hold_book);
        add_to_head(&head,hold_book);
   //     isbn_order_list(&head,hold_book);
    }
    display_books(head);

    char search_isbn[12];
    printf("What is the ISBN of the book you want to find? \n");
    scanf(" %[^\n]",&search_isbn);

    if(!find_book(search_isbn,head))
        printf("I'm afraid there is no book with that ISBN\n");



/*
    do{
        char exit[15];
        char search_isbn[12];
        printf("What is the ISBN of the book you want to find? \n");
        scanf(" %s \n",&search_isbn);

        if(strlen(search_isbn) == 10 && search_isbn[0] == '0'){
            memmove(search_isbn, search_isbn+1, strlen(search_isbn));
            find_book(search_isbn,head);
        }
        else{
            find_book(search_isbn,head);
        }

        find_book(search_isbn,head);
        printf("Are you done searching? ");
        scanf(" %s\n",&exit);

    } while ((strcmp(exit,"yes") == 0 || strcmp(exit,"Yes") == 0));
*/


    fclose(file);
}

//==========Create Book Node==========

node_pointer make_book(char new_author[100],char new_book[100],long new_ISBN) {
    node_pointer  new_node_ptr;
    new_node_ptr = malloc(sizeof(book));

    if(new_node_ptr == NULL)
        return NULL;
    else{
        strcpy(new_node_ptr -> author,new_author) ;
        strcpy(new_node_ptr -> book_name,new_book) ;
        new_node_ptr -> ISBN = new_ISBN;
        // new_node_ptr -> next = NULL; //Makes new node point to NULL
        return new_node_ptr;
    }

}

//========Add to start of list=========

void add_to_head(node_pointer *ptr_to_head ,node_pointer new_node_ptr){
//needs to deal with empty list
//needs function to open file and get data no input is needed
    if(*ptr_to_head == NULL){
        *ptr_to_head = new_node_ptr;
    }
    else{
        new_node_ptr -> next = *ptr_to_head;
        *ptr_to_head = new_node_ptr;}
}


//=============Display list============
void display_books (node_pointer list_ptr){
 //   printf ( "The nodes in the list are as follows . \n" ) ;
    while(list_ptr != NULL) {
        printf("Author: %s\n",list_ptr -> author);
        printf( "The name of the book is: %s\n" ,list_ptr -> book_name);
        printf("ISBN number: %010ld \n",list_ptr -> ISBN);
        printf("\n");
        list_ptr = list_ptr -> next;
    }

}

//==========Find Book using ISBN=======

bool find_book(char search_ISBN[12], node_pointer list_ptr){

    char* tmp_ptr;

 //   printf("%d",strlen(search_ISBN));
    while (list_ptr != NULL){
        if(list_ptr -> ISBN == strtol(search_ISBN,&tmp_ptr,10)){
            printf("Book has been found\n");
            printf("Author: %s",list_ptr -> author);
            printf("The name of the book is: %s\n" ,list_ptr -> book_name);
            printf("ISBN number: %010ld \n",list_ptr -> ISBN);
            return true;
        }
        list_ptr = list_ptr -> next;
    }
    return false;
}



//=========Add to end of list==========
void add_to_tail(node_pointer *ptr_to_head ,node_pointer new_node_ptr){

    node_pointer *tmp_ptr;
    tmp_ptr = ptr_to_head;

    while(*tmp_ptr != NULL){
        tmp_ptr = &((*tmp_ptr) -> next);
    }
    new_node_ptr -> next = *tmp_ptr;
    *tmp_ptr = new_node_ptr;
}


//======Add to list based on ISBN======

/*
void isbn_order_list (node_pointer *ptr_to_head ,node_pointer new_node_ptr){



    if(*ptr_to_head == NULL){
        *ptr_to_head = new_node_ptr;
    }
    else{
        node_pointer  *next_node;
        node_pointer *prev_node;
        prev_node = ptr_to_head;
        next_node = (*prev_node) -> next;
        node_pointer *tmp_ptr;
        tmp_ptr = ptr_to_head;


        while ((*tmp_ptr) != NULL) {
            if (new_node_ptr->ISBN > (*tmp_ptr)->ISBN) {
            }
            else{

            }

            tmp_ptr = &((*tmp_ptr)->next);
            new_node_ptr->next = (*tmp_ptr)->next;
            tmp_ptr = new_node_ptr;
        }

        }
}
 */