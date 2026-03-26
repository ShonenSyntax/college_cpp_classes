#include <iostream>
using namespace std;
#define MAX 4

class stack{
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
};

int main(){
    stack a;
    a.peek();
    a.push(3);
    a.peek();
}