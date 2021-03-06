/* AUTHOR -- code_blooded */

/**
*
*	This program aims at creating a basic linked list, printing it out and freeing the allocated memory.
*
*/

#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* next;
};

node* newNode(int val){
    node* temp = new node;
    temp->next = NULL;
    temp->val = val;
    return temp;
}

void garbage(node* head){
    while(head){
        node* temp=head->next;
        delete head;
        head = temp;
    }
}

int main(){
    
    node* head=NULL;
    node* temp=NULL;
    int value,n;
    
    cout<<"Enter the no of numbers: \n";
    cin>>n;
    cout<<"Enter the numbers\n";
    for(int i=0;i<n;i++){
        cin>>value;
        if(temp==NULL){
            head = temp = newNode(value);
        }
        else{
            temp->next = newNode(value);
            temp = temp->next;
        }
    }
    
    cout<<"Printing the linked list\n";
    temp = head;
    for(int i=0;i<n;i++){
        cout<<temp->val<<"-->";
        temp = temp->next;
    }
    cout<<"|||\n";
    
    garbage(head);
    
    return 0;
}
