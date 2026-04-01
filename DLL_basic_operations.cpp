#include "leetcode_setup.h"

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    
        Node(int data){
            this->data = data;
            prev = NULL;
            next = NULL;
        }
};

Node* insertAtHead(Node* head,int data){
   
    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return head;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    return head;
}

Node* insertAtTail(Node* head,int data){
   
    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return head;
    }

    
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = NULL;

    return head;
}

Node* NodeAtspecificPos(Node* head,int pos,int data){
    Node* newNode = new Node(data);

    //handling empty list
    if(head == NULL ){
        head = newNode;
        return head;
    }

    //handling whne pos = 1; or before or after head

    if(pos == 1){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;

        return head;
    }

    int loc = 1;
    Node* back = NULL;
    Node* curr = head;


    while(curr != NULL && loc < pos)
    {
        back = curr;
        curr = curr->next;
        loc++;
    }

    if(curr == NULL){
        back->next = newNode;
        newNode->prev = back;
        return head;
    }

    newNode->next = curr;
    newNode->prev = back;
    back->next = newNode;
    curr->prev = newNode;

    return head;

}
void print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }


}

int main(){
    vector<int> arr = {57,84,65,78};
    
    Node* node = new Node(arr[0]);

    node = insertAtHead(node,251);
    node = insertAtHead(node,60);
    node = insertAtHead(node,540);
    node = insertAtHead(node,525);
    node = insertAtTail(node,470);

    node = NodeAtspecificPos(node,3,100);
   print(node);
    
}