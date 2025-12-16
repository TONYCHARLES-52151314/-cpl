#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int data;
    struct Node* next;
}Node;
typedef struct linkedlist{
    Node *head;
    Node *tail
}LL;
int main()
{
    int n,kill;
    scanf("%d%d",&n,&kill);
    LL ll;
    initll();//head=tail=NULL
    sitcircle();
    killunitone();
    display();
    // Node a,b,c;
    // a.next=&b;
    
}
initll()
{
    ll.head=NULL;
    ll.tail=NULL;
}