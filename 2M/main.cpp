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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num_sum = 0;
        int remain = 0;
        ListNode* result = new ListNode(0);
        ListNode* temp = result;

        while(true){

            if(!l1 && l2){
                num_sum = (l2->val + remain) % 10;
                remain = (l2->val  + remain) / 10;
                l2 = l2->next;
            }

            if(!l2 && l1){
                num_sum = (l1->val + remain) % 10;
                remain = (l1->val  + remain) / 10;
                l1 = l1->next;
            }

            if(l1 && l2){
                num_sum = (l1->val + l2->val + remain) % 10;
                remain = (l1->val + l2->val + remain) / 10;
                l1 = l1->next;
                l2 = l2->next;
            }

            temp->val = num_sum;

            if(l1 || l2){
                ListNode* new_node = new ListNode(0);
                temp->next = new_node;
                temp = temp->next;
            }
            
            if( !l1 && !l2 && remain){
                ListNode* new_node = new ListNode(remain);
                temp->next = new_node;
                temp = temp->next;
            }

            if(!l1 && !l2){
                return result;
            }
        }
    }
};