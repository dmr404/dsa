#include<iostream>
using namespace std;
//by using classes

class Node {
public:
    int data;
    Node* next;

public: 
   Node(int val){
    data = val;
    next = NULL;
   }

   ~Node(){
    //cout<<"~node "<<data<<endl;
    if(next!=NULL){
        delete next;
        next  = NULL;
    }
   }
};

class List {
    Node* head;
    Node* tail;

public:
  List(){
    head = NULL;
    tail = NULL;
  }

  ~List(){
    //cout<<"~list\n";
    if(head != NULL){
        delete head;
        head = NULL;
    }
  }

  void push_back(int val) {
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail= newNode;
    }else {
        tail->next = newNode;
        tail = newNode;
    }
  }

  void push_front(int val){
    Node* newNode = new Node(val); //dynamic allccate krne ke liye new ko use kia

    if(head == NULL){
            head = tail = newNode;
    }else {
        newNode->next = head;
        head = newNode;
    }
  }

  void printll(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
  }

  void insert(int val, int pos ){
    Node* newNode = new Node(val);
    Node * temp =head;
    for(int i=0; i<pos-1; i++ ){
        if(temp==NULL){
            cout<<"position is invalid";
            return;
        }
        temp = temp->next;
    }
    //temp is now at pos-1 i.e. prev/left
    newNode->next=temp->next;
    temp->next = newNode;
  }

  void pop_frnt(){
    if(head == NULL){
        cout<<"LL is empty\n";
        return;
    }


    Node* temp = head;
    head = head->next;

    temp->next = NULL;
    delete temp;
  }

  void pop_back(){
    Node* temp = head;

    while(temp->next->next != NULL){
      temp = temp->next;
    }

    temp->next = NULL; //temp = tail's prev
    delete tail;
    tail = temp;
  }

};

int main() {
    List ll;

    ll.push_back(3);         
    ll.push_front(3);
    ll.push_back(4);  
    ll.push_back(5);  
    ll.push_front(2);
    ll.printll();
    cout<<endl;

    ll.insert(2, 2);
    ll.printll();
    cout<<endl;


    ll.pop_frnt();
    ll.printll();
    cout<<endl;

    ll.pop_back();
    ll.printll();
    cout<<endl;
    return 0;
}