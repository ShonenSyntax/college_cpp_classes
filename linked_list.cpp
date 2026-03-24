#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* create_node(int x){
    node* n = new node;
    n -> data = x;
    n -> next = NULL;

    return n;
}

void traverse(node* head){
    node* t = head;

    while(t != NULL){
        cout << t->data << endl;
        t = t->next;
    }
}

void search(node* head,int target){

    node* t = head;
    while(t){
        if(t->data == target){
            cout << "\nElement Found";
            return;
        }
        t = t->next;
    }
    cout << "\nNot Found";
        
}

node* insert_at_beginning(node* head,int value){
    node* n0 = new node;
    n0 -> data = value;
    n0 -> next = head;

    head = n0;

    return head;
}

node* insert_end(node* head,int value){
    node* n8 = new node;
    n8-> data = value;
    n8-> next = NULL;

    if(head == NULL){
        return n8;
    }

    node* t = head;

    while(t->next!=NULL){
        t = t -> next;
    }
    t->next = n8;

    return head;
}

node* delete_begin(node* head){
    if(head == NULL)
        return NULL;

    node* temp = head;
    head = head->next;
    delete temp;
    
    return head;
}

node* delete_end(node* head){
    if(head == NULL)
        return NULL;
    
    if(head->next == NULL){
    delete head;
    return NULL;
    }

    node* t = head;
    while(t->next->next != NULL){
        t = t->next;
    }
    delete t->next;
    t->next = NULL;

    return head;
}

node* insert_pos(node* head,int pos,int value){
    node* newNode = new node;
    newNode -> data = value;
    newNode -> next = NULL;

    if(head == NULL && pos == 1){
        return newNode;
    }
    if(pos == 1){
        newNode -> next = head;
        return newNode;
    }
    node* t = head;

    for(int i=1;i<pos-1 && t!=NULL;i++){
        t = t->next;
    }
    if(t==NULL){
        return head;
    }

    newNode->next = t->next;
    t->next = newNode;

    return head;
}

node* delete_pos(node* head,int pos){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL && pos == 1){
        delete head;
        return NULL;
    } 
    if(pos == 1){
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    node* t = head;
    for(int i=1;i<pos-1 && t!=NULL;i++){
        t = t->next;
    }
    if(t==NULL || t->next==NULL){
        return head;
    }
    node* temp = t->next;
    t->next = t->next->next;
    delete temp;
    return head;
}

int main(){
    node* head = create_node(10);
    node* n2 = create_node(30);
    node* n3 = create_node(50);
    node* n4 = create_node(75);
    head -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    
    head = delete_pos(head,3);
    traverse(head);

    return 0;
}


