#include <iostream>
using namespace std;
#define MAX 4

/* class stack{
    int arr[MAX];
    int top;

    public:
        stack(){
            top = -1;
        }

        int isFull(){
            return (top == MAX-1);
        }

        int isEmpty(){
            return (top == -1);
        }

        void push(int x){
            if(isFull()){
                cout << "\nOverflow";
                return;
            }  
            arr[++top] = x;
        }

        void pop(){
            if(isEmpty()){
                cout << "\nUnderflow";
                return;
            }
            top--;
        }

        void peek(){
            if(isEmpty()){
                cout << "\nEmpty";
                return;
            }
            cout << "\n" << arr[top] << endl;
        }
}; */

struct node{
    int data;
    node* next;
};

node* top = NULL;

// Push (Insert at beginning)
void push(int x){
    node* n = new node;
    n->data = x;
    n->next = top;
    top = n;

    cout << x << " inserted\n";
}

// Pop (Delete from beginning)
void pop(){
    if(top==NULL){
        cout << "Underflow\n" << endl;
        return;
    }
    node* temp = top;
    top = top->next;
    cout << temp->data << " deleted\n";
    delete temp;
}

// Peek (View the top Element)
void peek(){
    if(top==NULL){
        cout << "Stack is empty\n";
        return;
    }
    cout << "Top Element: " << top->data << endl;
}

// Display (View all the elements of the Stack)
void display(){
    if(top==NULL){
        cout << "Stack is empty\n";
        return;
    }
    node* t = top;
    cout << "\nStack: " << endl;
    while(t!=NULL){
        cout << t->data << endl;
        t = t->next;
    }
    cout << endl;
}



int main(){
    push(10);
    push(20);
    display();
    pop();
    display();
}