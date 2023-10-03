#include <iostream>
#include<stdlib.h>
using namespace std;

//Create a self referential structure
struct Node{
    int data;
    struct Node * next;
};

//Print the values of Linked List
void linkedlisttraversal(struct Node * ptr){

    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
}

int main() {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //Allocate memory for nodes in the linked list in Heap
    head=(struct Node *)malloc(sizeof (struct Node));
    second=(struct Node *)malloc(sizeof (struct Node));
    third=(struct Node *)malloc(sizeof (struct Node));
    fourth=(struct Node *)malloc(sizeof (struct Node));

    //Link first and second node
    head->data=7;
    head->next=second;

    //Link second and third node
    second->data=54;
    second->next=third;

    //Link third and fourth node
    third->data=31;
    third->next=fourth;

    //Terminate the fourth node
    fourth->data=23;
    fourth->next=NULL;

    linkedlisttraversal(head);


    return 0;

}