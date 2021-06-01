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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *temp = head->next, *resHead = new ListNode(head->val);
        resHead->next = NULL;
        while(temp){
            ListNode *n = new ListNode(temp->val);
            n->next = resHead;
            resHead = n;
            temp = temp->next;
        }
        return resHead;
    }
};
