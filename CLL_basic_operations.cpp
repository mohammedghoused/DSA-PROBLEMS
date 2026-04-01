#include "leetcode_setup.h"

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

Node* insertAtHead(Node* head,int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        newNode->next = head;

        return head;
    }

    Node*temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
    head = newNode;

    return head;
}

Node* insertAtTail(Node* head,int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        newNode->next = head;

        return head;
    }

    Node*temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next = newNode;
    newNode->next = head;

    return head;
}

Node* insertAtPos(Node* head,int pos,int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        newNode->next = head;

        return head;
    }

    if(pos == 1){
        head = insertAtHead(head,data);
        return head;
    }

    int loc = 2;

    Node* prev = head;
    Node* curr = head->next;

    while(curr != head && loc < pos){
        
        prev = curr;
        curr=curr->next;
        loc++;
    }


    prev->next = newNode;
    newNode->next = curr;

    return head;
}
void print(Node* head){
    if(head == NULL) return;

    Node* temp = head;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
}

int main(){
    vector<int> arr = {57,84,65,78};
    
    Node* node = new Node(arr[0]);
    node->next = node; // IMPORTANT: first node circular

    node = insertAtHead(node,1);
    node = insertAtHead(node,2);
    node = insertAtHead(node,3);
    node = insertAtHead(node,4);
    node = insertAtTail(node,4);
    node = insertAtPos(node,3,100);

    print(node);
}
