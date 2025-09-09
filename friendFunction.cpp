#include<iostream>
#include<string>

class Friend{
    private:
    int a_private = 10;

    public:
//this is friend function whilps in to access of private data of any class by using an another function ....
        friend void show(Friend &a); 
        void show2(){
        std::cout<<a_private<<std::endl;
        }

        
};

void show(Friend &a){ // this function is made for accesing the PRIVATE data of any class
    std::cout<<a.a_private<<std::endl;      // thoug this fun is not a part of any object is its MSP.. 
}

int main(){
    Friend a;
    show(a);
}
