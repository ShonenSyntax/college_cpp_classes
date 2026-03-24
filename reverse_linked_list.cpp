#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* create_node(int value){
    node* t = new node;
    t->data = value;
    t->next = NULL;

    return t;
}
void traversal(node* head){
    node* t = head;
    while(t!=NULL){
        cout << t->data << endl;
        t = t->next;
    }
}

node* reverse_list(node* head){

    node* prev = NULL;
    node* curr = head;
    node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev; 
}

int main(){
    node* head = create_node(10);
    node* n1 = create_node(20);
    node* n2 = create_node(30);
    node* n3 = create_node(40);
    head->next = n1;
    n1->next = n2;
    n2->next = n3;

    traversal(head);
    cout << "\nAfter Reversal\n";
    head = reverse_list(head);
    traversal(head);
}