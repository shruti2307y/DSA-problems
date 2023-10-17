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
    ListNode* middleNode(ListNode* head) {
        int l=0;
        ListNode *curr=head;
        while(curr)
        {
            l++;
            curr=curr->next;
        }
        int mid=l/2+1;
        curr=head;
        while(mid>1&&curr){
            curr=curr->next;
            mid--;
        }
        return curr;
    }
};