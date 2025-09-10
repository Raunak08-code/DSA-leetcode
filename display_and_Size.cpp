#include<iostream>

// Node class creation...
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// display function to display the data of LL...
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
}

// size function for to find sizre of LL..
int size(Node* head){
    Node* temp = head;
    int n=0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);

    a->next = b;
    b->next = c;
    c->next = d; 

// size fun. call
    std::cout<<"Size of this link list is: "<<size(a)<<std::endl;
    
// display fun. call
    display(a);
}