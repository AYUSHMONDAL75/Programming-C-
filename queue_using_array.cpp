#include <iostream>
using namespace std;
#define MAX 100
int queue[MAX], n, item, front = -1, rear = -1;
void enqueue(){
    cout << " Enter item to insert: ";
    cin >> item;
    if(front == MAX - 1){
        cout << "Queue is Overflow";
        return;
    }if(front == -1){
        front = 0;
        rear++;
        queue[rear] = item;
    }
    cout << item << "inserted into the queue.";

}
void dequeue(){
    if(front == -1 || rear == -1){
        cout << "Queue is underflow";
        return;
    }if(front==rear){
        front = rear = -1;
    }else{
        front++;
    }
    cout << item << "deledet from the queue";
}
int main(){
    int choice;
    cout << ".........Queue Operetion Menu.........";
    cout <<"\n1. Queue\n2. Deququq\n3. Display\n4. Peek\n5. Exit";
    while(1){
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch(choice){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: cout << "Exitting Pogram"; return 0;
            default : cout << "Invalid Choice";
        }

    }
}