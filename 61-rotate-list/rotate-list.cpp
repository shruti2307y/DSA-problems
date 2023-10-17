/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int l=0;
        ListNode *curr=head;
        if(head==NULL)
        return head;
        while(curr){
            l++;
            curr=curr->next;
        }
        int ind=l-(k%l);
        //if(ind<0) ind=(ind+l)%l;
        curr=head;
        if(ind==0) return head;
        cout<<ind;
        while(ind>1){
            curr=curr->next;
            ind--;
        }
        
        ListNode *temp=curr;
        while(temp->next!=NULL){
            temp=temp->next;

        }
       temp->next=head;
       head=curr->next;
        curr->next=NULL;

        return head;
    }
};