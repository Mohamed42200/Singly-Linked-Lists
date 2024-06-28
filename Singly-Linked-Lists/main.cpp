#include <iostream>
using namespace std;

struct Node{
    int value ;
    Node*next ;

};

Node*head = NULL;

void pushBack(int v){
    Node*newNode = new Node();
    newNode->value = v ;

    if(head == NULL){
      head = newNode;
      newNode->next = NULL;
    }
    else{
         Node*ptr = head ;
         while(ptr->next!=NULL){
            ptr = ptr->next;
         }
         ptr->next = newNode;
         newNode->next=NULL;
    }

}
void pushFront(int v){
    Node*newNode = new Node();
    newNode->value = v ;

    if(head == NULL){
      head = newNode;
      newNode->next = NULL;
    }
    else{
        Node*ptr = head ;

        newNode->next = head;
        head = newNode ;

    }

}

int popBack(){
    Node*ptr = head ;
    if(ptr == NULL){
        return 0;
    }
    while(ptr->next!=NULL){
        ptr = ptr->next ;
    }

    return ptr->value;

}

int popFront(){
     Node*ptr = head ;
     if(ptr == NULL){
        return 0;
     }

     return ptr->value ;

}

void Display(){
    Node*ptr = head ;
    if(ptr == NULL){
        cout<<"The linked list is empty\n";
    }
    else{

   while(ptr->next!=NULL){
    cout<<ptr->value<<" \n";
    ptr = ptr->next ;
   }
    cout<<ptr->value<<" \n";
    }

}

void Delete(int v){
    Node*ptr = head ;
    if(ptr == NULL){
        cout<<"the list is empty..";
    }
    else{


    if(head->value == v){
        head = ptr->next;
        delete(ptr);
    }
    else{
        Node*ptr2 = head ;
        ptr = ptr->next;
        while(ptr->value!=v){
            ptr2 = ptr2->next;
            ptr = ptr->next ;
            if(ptr->next==NULL){
                break;
            }
        }
        if(ptr->value==v){

        ptr2->next = ptr->next;
        delete(ptr);
        }
        else{
            cout<<"Not found...\n";
        }


    }

    }
}
int Size(){
    Node*ptr = head ;
    int c = 0 ;
    if(ptr==NULL){
        return 0 ;
    }
    else{
        while(ptr->next!=NULL){
            c+=1 ;
            ptr = ptr->next;
        }
        c+=1;
    }
    return c ;

}

bool Search(int v){
    Node*ptr = head ;

        while(ptr!=NULL){

            if(ptr->value == v){
                return true;
            }
            ptr=ptr->next;

        }

    return false;
}

void delete_List(){
    Node*ptr1 = head ;
    Node*ptr2 = head ;

    while(ptr1->next!=NULL){
        head = ptr1->next;
        ptr1 = ptr1->next ;
        delete(ptr2);
        ptr2 = head ;
    }
    head = ptr1->next;
    ptr1 = ptr1->next ;
    delete(ptr2);
    ptr2 = head ;

    cout<<"Delete successfully...\n";


}

int main()

{



     pushFront(9);

     pushFront(8);

     pushFront(7);
   //Display();

    //Delete(8);
    //Display();
    //delete_List();

   //cout<<Size();
   //cout<<Search(8);




    return 0;
}
