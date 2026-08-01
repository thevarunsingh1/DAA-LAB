/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int count =0; ListNode* temp= head;
        while(temp!=NULL){
count++;
temp= temp->next; }

if(count==n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        temp =head;

for(int i=1;i<count-n;i++){
    temp=temp->next;
}

ListNode *ans=temp->next;
temp->next=temp->next->next;
delete ans;

return head;
    }

};