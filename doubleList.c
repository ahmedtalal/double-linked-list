#include "doubleList.h"
#include <stddef.h>

node *head ;

void createDoubleLinked() {
    head == NULL ;
}

int isEmpty(){
    if(head == NULL){
        return 0 ;
    }
    return 1 ;
}

void firstInsert(int value) {
    node *ptr = (node *)malloc(sizeof(node)) ;
    ptr->data = value ;
    if(isEmpty() == 0){
        ptr->previous = NULL ;
        ptr->next = NULL ;
        head = ptr ;
    }else {
        ptr->previous = NULL ;
        ptr->next = head ;
        head->previous = ptr ;
        head = ptr ;
    }
    printf("first item is inserted \n") ;
}

void lastInsert(int value){
    node *ptr = (node *)malloc(sizeof(node)) ;
    ptr->data = value ;
    node *temp ;
    if(isEmpty() == 0){
        ptr->previous = NULL ;
        ptr->next = NULL ;
        head = ptr ;
    }else {
        temp = head ;
        while(temp->next !=NULL){
            temp = temp->next ;
        }
        ptr->next = NULL ;
        ptr->previous = temp;
        temp->next = ptr ;
        temp = ptr ;
    }

    printf("last item is inserted \n") ;
}

void firstDelete(){
    node *temp ;
    if(isEmpty() == 0){
        printf("the double linked list is empty \n") ;
    }else if(head->next == NULL){
        printf("the first deleted item is %d \n" , head->data) ;
        head = NULL ;
        free(head) ;
    }else {
        temp = head ;
        printf("the first deleted item is %d \n" , head->data) ;
        head = temp->next ;
        head->previous = NULL ;
        free(temp) ;
    }
}

void lastDelete(){
    node *temp ;
    if(isEmpty() == 0){
        printf("the double linked list is empty \n") ;
    }else if(head->next == NULL) {
        printf("the last deleted item is %d \n" , head->data) ;
        head = NULL ;
        free(head) ;
    }else {
        temp = head ;
        while(temp->next != NULL){
            temp = temp->next ;
        }
        temp->previous->next = NULL ; // keep your mind in this line
        printf("the last deleted item is %d \n" , temp->data) ;
        free(temp) ;

    }
}

void randomInsert(int value , int position){
    node *ptr = (node*)malloc(sizeof(node)) ;
    ptr->data = value ;
    node *temp = head ;
    if(isEmpty() == 0){
        if(position < 1){
            printf("\n the linked list is empty so the position must be equal 1 \n") ;
            return ;
        }else {
            ptr->next = NULL ;
            ptr->previous = NULL ;
            head = ptr ;
        }
    }else {
        for(int i = 1; i <position ; i++){
            temp = temp->next ;
            if(temp == NULL){
                printf("you can not insert \n") ;
                return ;
            }

        }
        temp->previous->next = ptr ;
        ptr->previous = temp->previous->next ;
        ptr->next = temp ;
        temp->previous = ptr ;
        temp = ptr ;
    }
    printf("inserted \n") ;
}

void randomDelete(int position){
    node *temp , *ptr ;
    if(isEmpty() == 0){
        printf("the linked list is empty \n") ;
    }else{
        temp = head ;
        for(int i = 1 ; i <position ; i++){
            ptr = temp ;
            temp = temp->next ;
            if(temp == NULL){
                printf("you can insert \n") ;
                return ;
            }
        }
        printf(" the random deleted item is %d \n " , temp->data) ;
        ptr->next = temp->next ;
        temp->next->previous = ptr ;
        free(temp) ;
    }
}

void display(){
    node *temp ;
    if(isEmpty() == 0){
        printf("the double linked list is empty \n") ;
    }else {
        temp = head ;
        while(temp != NULL){
            printf("%d \t" , temp->data) ;
            temp = temp->next ;
        }
    }
}

