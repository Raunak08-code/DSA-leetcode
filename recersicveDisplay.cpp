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

// recursion fun to display or print LL...
void display_rec(Node* head){
    if(head == NULL) return; // base case
    std::cout<<head->data<<" "; // kaam
    display_rec(head->next); // calll
}
// print in reverse order .. 40 30 20 10.. 
void reverse_disp(Node* head){
    if(head == NULL) return; //baase case.
    reverse_disp(head->next); // call
    std::cout<<head->data<<" "; // kaam
     
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
    display_rec(a);

    std::cout<<std::endl;
// reverse display of LL..
   reverse_disp(a);
}