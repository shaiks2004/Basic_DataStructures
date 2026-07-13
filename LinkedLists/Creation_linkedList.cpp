#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
          Node(int data){
         this->data = data;
            next = nullptr;
}
};
class Linked{
    public:
    Node* head;
        Linked(){
            head=nullptr;
        }
        void insert(int val){
            Node* newnode=new Node(val);
            if(head==nullptr){
                head=newnode;
                return;
            }
            newnode->next=head;
            head=newnode;
        }

        void create(int arr[], int n){
        if(n == 0) return;
        head = new Node(arr[0]);
        Node* temp = head;
        for(int i = 1; i < n; i++){
            Node* newNode = new Node(arr[i]);
            temp->next = newNode;
            temp = newNode;
        }
    }
    void insert_end(int data){
        Node* newNode=
    }
    void show(){
        while(head->next!=nullptr){
            cout<<head->data<<" -> ";
            head=head->next;
        }
    }
    };
int main(){
    int arr[]={1,22,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Linked obj;
    obj.create(arr,n);
    obj.show();


}