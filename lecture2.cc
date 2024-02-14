#include<iostream>
using namespace std;

int main() {
    int a = 123;

    cout<< a ; // way of writting print in c++ 
    cout<<endl ; // endl = new line 

    char b = 'v'; // char data type 
    
    cout<< b <<endl;

    cout<< "hello world " <<endl;

    bool bl = true; // boolen data type 
    cout<< bl << endl;

    float f = 1.2; // float data type 
    cout<< f <<endl;

    double d = 1.23; // double data type
    cout<< d <<endl;

    int size = sizeof(a); // intger data type and sizeof tell the size of data  
    cout<< "memory size of a is : " << size <<endl;

    cout<< "hello my self Samrat Kalki";
    cout<< "\n"; // \n = new line 

    unsigned int ab = -13; // it only stores +ve value 
    cout<<  ab <<endl;

    int abs = 2/5;
    cout<< abs <<endl;

    int abc = 2.0/5;
    cout<< abc <<endl;

    cout<< 2.0/5 <<endl; // division operator 

    int df = 2;
    int lk = 3;

    bool first = (df == lk); // == stands for is equal to 
    cout<< first <<endl; 

    bool second = (df < lk); // greater or lesser 
    cout<< second <<endl;

    bool third = (df > lk); // greater or lesser
    cout<< third <<endl;

    bool fourth = (df <= lk); // greater or equal to 
    cout<< fourth <<endl;

    bool fifth = (df >= lk); // lesser or equal to 
    cout<< fifth <<endl;

    bool sixth = (df != lk); // not equal to 
    cout<< sixth <<endl;

    int a1 = 23;
    cout<< !a1 <<endl; // compliment operator

    int a2 = 0;
    cout<< !a2 <<endl; // compliment operator

    
    


    
}