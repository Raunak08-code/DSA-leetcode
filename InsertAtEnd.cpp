#include<iostream>

// this is node class, where we define the data and NOde-> next...
class Node{
public:
    int data;
    Node* next;

    Node(int data){ // NOde constructor..
        this->data = data;
        this->next = NULL;
    }
};


// here we make Linkedlist class, this class is " USER DEFINE DETA STRUCTURE "  which we need in for operating in LinkedList...
class LinkedList{
public:
    Node* head; //any LInkedList calss contain 3 data member
    Node* tail;
    int size;

    LinkedList(){ // this is LinkedList constructor
        head = tail = NULL; // initally LL is empty...
        size = 0; 
    }

// insert at end function to insert data at end of the linked list.. 
    void insertAtEnd(int data){
        Node* temp = new Node(data); // created atemp address for data..
        if(size == 0) head = tail = temp; // condition if LL is empty..
        else{  
            tail->next = temp; // condition if LL is not empty...
            tail = temp;
        }
        size++; // important to update the size while data is keep on inserting...
    }

// data function to daisplay the new linkedlist...
    void display(){
        Node* temp = head;
        while(temp != NULL){
            std::cout<<temp->data<<"->";
            temp = temp->next;
        }
        std::cout<<"NULL"<<std::endl; // for printing the NULL at end...
        std::cout<<std::endl;
    }
};

int main(){
    LinkedList ll; // we just create an obj for LinkedList calss named ll...
    ll.insertAtEnd(10);
    ll.display();

    ll.insertAtEnd(20);
    ll.display();

    ll.insertAtEnd(30);
    ll.display();

    ll.insertAtEnd(40);
    ll.display();

    return 0;
}