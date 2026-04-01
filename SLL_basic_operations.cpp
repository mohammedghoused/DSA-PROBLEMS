#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

Node* insertathead(Node* head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    return newNode;
}

Node* insertattail(Node* head, int data){
    Node* newNode = new Node(data);
    
    if(head == NULL){
        return newNode;
    }
    
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
    return head;
}

Node* insertafterGivenNode(Node* head, int key, int data){
    Node* newNode = new Node(data);
    
    if(head == NULL){
        cout << "List is empty!\n";
        return head;
    }
    
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key) break;
        temp = temp->next;
    }
    
    if(temp == NULL){
        cout << "Key not found!\n";
        return head;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    return head;  
}

Node* insertbeforeGivenNode(Node* head, int key, int data){
    Node* newNode = new Node(data);
    
    if(head == NULL){
        cout << "List is empty!\n";
        return head;
    }
    
    // Special case: insert before head
    if(head->data == key){
        newNode->next = head;
        return newNode;
    }
    
    Node* temp = head;
    while(temp->next != NULL && temp->next->data != key){
        temp = temp->next;
    }
    
    if(temp->next == NULL){
        cout << "Key not found!\n";
        return head;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    return head; 
}

Node* insertAtGivenPos(Node* head, int pos, int data){
    Node* newNode = new Node(data);
    
    if(pos == 1){
        newNode->next = head;
        return newNode;
    }
    
    if(head == NULL){
        cout << "List is empty and pos > 1!\n";
        return head;
    }
    
    Node* temp = head;
    int loc = 1;
    
    while(temp != NULL && loc < pos - 1){
        temp = temp->next;
        loc++;
    }
    
    if(temp == NULL){
        cout << "Position out of bounds!\n";
        return head;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    return head; 
}

Node* reverseSll(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr != NULL){
        Node* next = curr->next;  // Save next node
        curr->next = prev;         // Reverse the link
        prev = curr;               // Move prev forward
        curr = next;               // Move curr forward
    }
    
    return prev;  // New head
}

void print(Node* head){
    Node* temp = head;
    
    if(head == NULL){
        cout << "List is empty";
        return;
    }
    
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main(){
    vector<int> arr = {57, 84, 65, 78};
    
    Node* node = new Node(arr[0]);
    
    node = insertathead(node, 1);
    node = insertathead(node, 2);
    node = insertathead(node, 3);
    node = insertathead(node, 4);
    
    
    print(node);
    
    node = reverseSll(node); 
    cout << "Reversed list: ";
    print(node);
    
    return 0;
}