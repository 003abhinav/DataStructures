#include<iostream>
using namespace std;


class node
{
    public:
    int age;
    string name;
    string relationship;
    node* next;
    node* prev;

    // node constructor
    node(string name, int age, string relationship)
    {
        this->name= name;
        this->age= age;
        this->relationship=relationship;
        this->next=NULL;
        this->prev= NULL;
    }
};

//function to print in forward travsersal
void print(node* head)
{
    cout<<"Forward Link List"<<endl;
    node* temp = head;

    //looping through every node
    while(temp!=NULL)
    {   
        cout<<"name: "<<temp->name;
        cout<<" age: "<<temp->age<<"------>";
       
        temp= temp->next;

    }
    cout<<endl<<endl;

}

//function to print in backward traversal
void printBack(node* tail)
{
    cout<<"Backward Link List"<<endl;
    node* temp = tail;

    //looping through every node
    while(temp!=NULL)
    {   
        cout<<"name: "<<temp->name;
        cout<<" age: "<<temp->age<<"------>";
        // cout<<"relationship: "<<temp->relationship<<endl;
        temp= temp->prev;

    }
    cout<<endl<<endl;


}

//function to print relationship linked list
void printRelationship(node* head)
{
    cout<<"Forward Relationship Linked List"<<endl;
    node* temp= head;

    //looping through every node
    while(temp!=NULL)
    {
        cout<<temp->relationship<<"->";
        temp=temp->next;
    }
    cout<<endl<<endl;
}

void printRelationshipBack(node* tail)
{
    cout<<"Backward Relationship Linked List"<<endl;
    node* temp= tail;

    //looping through every node
    while(temp!=NULL)
    {
        cout<<temp->relationship<<"->";
        temp=temp->prev;
    }
    cout<<endl<<endl;
}

//function to insert a node in front
void insertAtHead(node* &head,string name,int age,string relationship)
{
    node* temp = new node(name,age,relationship);
    temp->next= head;
    head->prev=temp;
    head=temp;
}

int main()
{
    node* node1= new node("Rahul", 20,"Son");

    node* head = node1;
    node* tail= node1;

    insertAtHead(head,"Meena",45,"Mother");
    

    insertAtHead(head,"Mahesh",50,"Father");
    

    insertAtHead(head, "Urmila", 70,"Grandmother");
    

    insertAtHead(head,"Dev", 75,"Grandfather");
   

    print(head);

    printBack(tail);

    printRelationship(head);

    printRelationshipBack(tail);
    return 0;

}



//-------------------------------------OUTPUT----------------------------------------------

// Forward Link List
// name: Dev age: 75------>name: Urmila age: 70------>name: Mahesh age: 50------>name: Meena age: 45------>name: Rahul age: 20------>

// Backward Link List
// name: Rahul age: 20------>name: Meena age: 45------>name: Mahesh age: 50------>name: Urmila age: 70------>name: Dev age: 75------>

// Forward Relationship Linked List
// Grandfather->Grandmother->Father->Mother->Son->

// Backward Relationship Linked List
// Son->Mother->Father->Grandmother->Grandfather->






