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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> result;
        int c = 1;
        ListNode* prev = head;
        ListNode* temp = prev->next;
        while (temp->next != NULL && prev->next->next !=NULL) {
            c++;
            if (temp->val < temp->next->val && temp->val < prev->val) {
                result.push_back(c);
            } else if (temp->val > temp->next->val && temp->val > prev->val) {
                result.push_back(c);
            }
            temp = temp->next;
            prev = prev->next;
        }
        if (result.size()<=1) {
            return {-1, -1};
        }
        int k = result.size();
        int mini = INT_MAX;
        for(int i=1;i<k;i++)
        {
           mini = min(mini,(result[i]-result[i-1]));
        }
        int maxi = result[k - 1] - result[0];
        return {mini, maxi};
    }
};