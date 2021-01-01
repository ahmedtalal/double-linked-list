
typedef struct Node{
    struct Node *next ;
    struct Node *previous ;
    int data ;
}node ;

void createDoubleLinked() ;
int isEmpty()  ;
void firstInsert(int value) ;
void lastInsert(int value) ;
void firstDelete() ;
void lastDelete() ;
void randomInsert(int value , int position) ;
void randomDelete(int position) ;
void display() ;
