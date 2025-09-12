#include<iostream>

// creating a Node class..
class Node{ 
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//creting a linkedlist clss
class LinkedList{
public:    
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
       head = tail = NULL;
       size = 0;
    }

    void insertAtBeginning(int data){
        Node* temp = new Node(data);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;   
        }
        size++;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            std::cout<<temp->data<<"->";
            temp = temp->next;
        }
        std::cout<<"NUll"<<std::endl;
    }
};


int main(){
    LinkedList ll;

    ll.insertAtBeginning(10);
    ll.display();

    ll.insertAtBeginning(20);
    ll.display();

    ll.insertAtBeginning(30);
    ll.display();

    ll.insertAtBeginning(40);
    ll.display();

    ll.insertAtBeginning(50);
    ll.display();
}