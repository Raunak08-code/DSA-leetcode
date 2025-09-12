#include<iostream>

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist{
public: 
    Node* head;
    Node* tail;
    int size;

    
    Linkedlist(){
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

    void insertAtEnd(int data){
        Node* temp = new Node(data); // created atemp address for data..
        if(size == 0) head = tail = temp; // condition if LL is empty..
        else{  
            tail->next = temp; // condition if LL is not empty...
            tail = temp;
        }
        size++; // important to update the size while data is keep on inserting...
    }

    void insert(int idx, int data){
        if(idx<0 || idx>size) std::cout<<"invalid"<<std::endl;
        if(idx ==0) insertAtBeginning(data);
        if(idx == size) insertAtEnd(data);

        else{
            Node*temp = new Node(data);
            Node* trav = head;
            for(int i=0; i<idx-1; i++){
                trav = trav->next;
            }
            temp->next = trav->next;
            trav->next= temp;
            size++;
        }
        
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
    Linkedlist ll;
    ll.insert(0,10);
    ll.display();

    ll.insert(1,60);
    ll.display();

    ll.insert(1,50);
    ll.display();
}