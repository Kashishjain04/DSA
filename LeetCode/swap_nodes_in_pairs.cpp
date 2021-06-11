// https://leetcode.com/problems/swap-nodes-in-pairs

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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *temp = head, *l = head;
        head = head->next;
        while(l){
            temp = l;
            ListNode *k = temp->next;
            if(!k) break;
            l = k->next;
            temp->next = l ? (l->next ? l->next : l) : nullptr;
            k->next = temp;
        }
        return head;
    }
};
