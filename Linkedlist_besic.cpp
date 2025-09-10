#include<iostream>
#include<string>

class Node{  // proper LINKED_LIST NODE.......
public:
    int value;
    Node* next;
    Node(int value){  // we can passs the parameters by our own use it is not neccessery to pass same parameters as of doata members...
        this->value = value;
        this->next = NULL;  // this is important concept.. it is not neccessary to pass the parameter for using it in the constructor ..
    }
};


// for efficienty we gonna use constracturs.....
int main(){

//giving value to the linkedlist..
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    std::cout<<a.value<<std::endl;
    std::cout<<a.next<<std::endl;
// linking the next node by passing its address....
    a.next = &b;      
    b.next = &c;
    c.next = &d;
     d.next = NULL;  // NULL becouse no next Node is avaliable.......
    std::cout<<a.value<<std::endl;
    std::cout<<a.next<<std::endl;
 
// accessing cby using a only 'a'  ...
    std::cout<<(a.next)->value<<std::endl;  // accessing b by a
    std::cout<<((a.next)->next)->value<<std::endl;  // accessing c by a
    std::cout<<(((a.next)->next)->next)->value<<std::endl;  // accessing d by a

// printing the linked list...

    Node temp=a; // here temp asigned by the data of a
    while(1){ //we wat to run this loop infinately...
        std::cout<<temp.value<<" ";

        if(temp.next == NULL) break; // this is where we want to terminate the loop...
        temp = *(temp.next);
    }

}