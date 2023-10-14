//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
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
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
       struct Node* reverse(struct Node* head){
        if(head==NULL){
            return head;
        }
        Node *prev=NULL;
        Node *curr=head;
        Node *nextptr;
        while(curr!=NULL){
            nextptr=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *l1=reverse(first);
        Node *l2=reverse(second);
        
        
        Node *head=new Node(-1);
        Node *temp=head;
        int carry=0;
        while(l1!=NULL ||l2!=NULL ||carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->data;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->data;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            Node *newNode=new Node(sum%10);
            // head=newNode;
            temp->next=newNode;
            temp=temp->next;
        }
        // temp=head;
        
        return reverse(head->next);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends