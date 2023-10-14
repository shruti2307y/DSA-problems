//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *first=head1;
    Node *second=head2;
    Node *head=NULL;
    Node* curr=head;
    //if(head1->next==NULL||head2->next==NULL) return new Node(0);
    while(first&&second){
        if(first->data<second->data){
            // curr->data=first->data;
            first=first->next;
            
        }
        else if (first->data>second->data){
            // curr->data=second->data;
            second=second->next;
        }
        else {
            Node *temp=new Node(first->data);
            if(head==NULL) {head=temp; curr=head;}
            else curr->next=temp;
            first=first->next;
            second=second->next;
            curr=temp;
            
        }
        // Node *temp=new Node(0);
        
    }
    // while(first){
    //     curr->data=first->data;
    //      Node *temp=new Node(0);
    //     curr->next=temp;
    //     curr=temp;
    //     first=first->next;
    // }
    // while(second){
    //     curr->data=second->data;
    //      Node *temp=new Node(0);
    //     curr->next=temp;
    //     curr=temp;
    //     second=second->next;
    // }
    curr->next=NULL;
    return head;
}