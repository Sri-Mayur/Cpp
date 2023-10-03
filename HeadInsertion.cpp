#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};


struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr;

    ptr=(struct Node *)malloc(sizeof(struct Node));
    
    ptr->next=head;
    ptr->data = data;
    head=ptr;
    return head;

}

void linkedlisttraversal(struct Node * ptr){

    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
}



int main() {
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;
    struct Node * sixth;
    struct Node * seventh;
    struct Node * eighth;
    struct Node * ninth;
    struct Node * tenth;
    struct Node * eleventh;
    struct Node * twelfth;
    struct Node * thirteenth;
    struct Node * fourteenth;
    struct Node * fifteenth;
    struct Node * sixteenth;
    

    head= (struct Node *)malloc(sizeof(struct Node));
    first= (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node *)malloc(sizeof(struct Node));
    fourth= (struct Node *)malloc(sizeof(struct Node));
    fifth= (struct Node *)malloc(sizeof(struct Node));
    sixth=(struct Node *)malloc(sizeof(struct Node));
    seventh= (struct Node *)malloc(sizeof(struct Node));
    eighth=(struct Node *)malloc(sizeof(struct Node));
    ninth=(struct Node *)malloc(sizeof(struct Node));
    tenth= (struct Node *)malloc(sizeof(struct Node));
    eleventh= (struct Node *)malloc(sizeof(struct Node));
    twelfth=(struct Node *)malloc(sizeof(struct Node));
    thirteenth=(struct Node *)malloc(sizeof(struct Node));
    fourteenth=(struct Node *)malloc(sizeof(struct Node));
    fifteenth=(struct Node *)malloc(sizeof(struct Node));
    sixteenth=(struct Node *)malloc(sizeof(struct Node));

    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    
    second->data=2;
    second->next=third;

    
    third->data=3;
    third->next=fourth;

    
    fourth->data=4;
    fourth->next=fifth;

    
    fifth->data=5;
    fifth->next=sixth;

    
    sixth->data=6;
    sixth->next=seventh;

    
    seventh->data=7;
    seventh->next=eighth;

    
    eighth->data=8;
    eighth->next=ninth;

    
    ninth->data=9;
    ninth->next=tenth;

    tenth->data=10;
    tenth->next=eleventh;

    
    eleventh->data=11;
    eleventh->next=twelfth;

    
    thirteenth->data=13;
    thirteenth->next=fourteenth;

    
    fourteenth->data=14;
    fourteenth->next=fifteenth;

    
    fifteenth->data=15;
    fifteenth->next=sixteenth;

    
    sixteenth->data=16;
    sixteenth->next=NULL;

    linkedlisttraversal(head);
    head= insertAtFirst(head, 56);
    cout<<"___________________";

    linkedlisttraversal(head);
    

    


return 0;
}