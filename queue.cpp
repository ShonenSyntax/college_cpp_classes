#include <iostream>
using namespace std;
#define MAX 4
class queue{
    int arr[MAX];
    int front, rear;
    public:
    queue(){
        front = -1;
        rear = -1;
    }
    bool isempty(){
        if(front == -1 || front > rear)
        {
            cout << "Queue underflow\n";
            return 1;
        }
        return 0;
    }
    bool isfull(){
        if(rear == MAX - 1){
            cout << "Queue overflow\n";
            return 1;
        }
        return 0;
    }
    void insert(int x)
    {
        if(isfull())
            return;
        if(front == -1)
            front ++;
        arr[++rear] = x;
        cout << x << " has been inserted in the queue\n";
    }
    void deletee(){
        if(isempty())
            return;
        if(front == rear)
        {
            cout << " front element deleted is " << arr[front] << endl;
            rear=-1;
            front =-1;
        }
        else{
            cout << "front element delete is " << arr[front++ ] << endl;
        }
    }
    void display(){
        if(isempty())
            return;
        for(int i=front; i<+rear;i++)
        cout << arr[i] << " ";
        cout << endl;
    }
}q1;

int main()
{
    q1.insert(4);
    q1.insert(5);
    q1.insert(6);
    q1.insert(3);
    q1.insert(8);
    q1.display();
    q1.deletee();
    q1.deletee();
    q1.display();


    return 0;
}