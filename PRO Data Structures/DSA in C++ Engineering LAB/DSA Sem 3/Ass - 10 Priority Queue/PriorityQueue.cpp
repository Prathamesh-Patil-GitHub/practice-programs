#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class PriorityQueue{
    Node* head = NULL;
    public:
    void enqueue(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else if(head->data < newNode->data){
            newNode->next = head;
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp->next && temp->next->data > newNode->data){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        cout<<data<<" is enqueued!"<<endl;
    }

    int dequeue(){
        if(!head){
            cout<<"The Queue is EMPTY !!!"<<endl;
            return 0;
        }
        int data = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        return data;
    }

    void display(){
        if(!head){
            cout<<"The list is EMPTY!"<<endl;
            return;
        }
        cout<<"The list is:"<<endl;
        Node *temp = head;
        while(temp){
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    PriorityQueue pq;
    int choice, data;
    do{
        cout<<"<<<< MENU >>>>"<<endl;
        cout<<"1 | Enqueue\n2 | Dequeue\n3 | Display\n4 | Exit"<<endl;
        cout<<"Select Your Choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter the Data to insert (The same would be its Priority): ";
            cin>>data;
            pq.enqueue(data);
            break;

        case 2:
            cout<<"Dequeued Data: "<<pq.dequeue()<<endl;
            break;

        case 3:
            pq.display();
            break;

        case 4:
            cout<<"Shutting Down..."<<endl;
            break;

        default:
            cout<<"Invalid Choice!"<<endl;
        }
    }while(choice != 4);
}
