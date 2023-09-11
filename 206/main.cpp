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
        if(!head) return head;
        auto dummy = head;
        vector<int> vec;

        while(dummy){
            vec.push_back(dummy->val);
            dummy = dummy->next;
        }

        dummy = head;

        for(int i = vec.size()-1; i >= 0; --i){
            dummy->val = vec[i];
            dummy = dummy->next;
        }

        return head;
    }
};