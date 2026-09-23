#include <iostream>
using namespace std;
#define MAX 100
int stack[MAX],item, n, top = -1;
void push(){
    cout << "Enter element to insert: ";
    cin >> item;
    if(top == MAX - 1){
        cout << "Stackis overflow";
        return;
    }
    top++;
    stack[top] = item;
    cout << item <<" inserted in to the stack";
}
void pop(){
    if(top == -1){
        cout << "Stack is Underflow";
        return;
    }
    stack[top] = item;
    top--;
    cout << item <<" Deleted from the stack";
}
void peek(){
    if(top == -1){
        cout << "Stack is Underflow";
        return;
    }
    cout << "Top element is: "<< stack[top];
}
void display(){
    if(top ==  -1){
        cout << "Stack is empty";
        return;
    }
    cout << "All elements are: ";
    for(int i=top; i>=0; i--){
        cout << stack[i]<< " ";
    }
}
int main(){
    int choice;
    cout << ".........Stack Operetion Menu.........";
    cout <<"\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit";
    while(1){
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch(choice){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: cout << "Exitting Pogram"; return 0;
            default : cout << "Invalid Choice";
        }

    }
}