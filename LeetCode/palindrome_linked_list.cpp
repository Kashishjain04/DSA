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
    bool isPalindrome(ListNode* head) {
        if(!head->next) false;
        vector<int>nodes;
        ListNode *temp = head;
        while(temp){
            nodes.push_back(temp->val);
            temp = temp->next;
        }
        for(int i=0; i<nodes.size()/2; i++){
            if(nodes[i] != nodes[nodes.size()-i-1]) return false;
        }
        return true;
    }
};
