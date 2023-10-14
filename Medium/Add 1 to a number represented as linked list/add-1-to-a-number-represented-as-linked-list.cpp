//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *prev=NULL;
        Node *curr=head;
        Node *next=curr->next;;
        while(curr&&next){
            curr->next=prev;
            prev=curr;
            curr=next;
            next=next->next;
            
        }
        curr->next=prev;
        head=curr;
        curr=head;
        int carryover=1;
        while(curr!=NULL){
            if(curr->data<9){
                curr->data=curr->data+carryover;
                break;
            }
            else{
                
                curr->data=0;
                carryover=1;
                if(curr->next==NULL){
                    Node *wild=new Node(0);
                    curr->next=wild;
                }
            }
            curr=curr->next;
        }
       prev=NULL;
        curr=head;
        next=curr->next;;
        while(curr&&next){
            curr->next=prev;
            prev=curr;
            curr=next;
            next=next->next;
            
        }
        curr->next=prev;
        head=curr;
        
        return head;
        
        
    }
    
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends