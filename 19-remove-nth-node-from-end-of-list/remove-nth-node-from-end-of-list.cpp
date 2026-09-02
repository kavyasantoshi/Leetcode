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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int k = (c-n)+1;
        if(k==1)
        {
            ListNode* rem = head;
            head = head->next;
            return head;
        }
        temp = head;
        ListNode* prev = NULL;
        int ans=1;
        while(temp!=NULL)
        {
           if(ans==k)
           {
              prev->next=temp->next;
              delete temp;
              break;
           }
           else
           {
             ans++;
             prev=temp;
             temp=temp->next;
           }
        }
        return head;
    }
};