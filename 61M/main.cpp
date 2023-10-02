#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
 };

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        vector<int> vals;
        auto temp = head;
        int nodesNum = 0;
        
        while(temp){
            vals.push_back(temp->val);
            temp = temp->next;
            ++nodesNum;
        }

        for(int i = 0; i < k%nodesNum; ++i){
            rotate(vals.begin(), vals.end()-1, vals.end());
        }

        auto valsValue = vals.begin();
        auto newHead = head;
        auto newTemp = newHead;
        while(newTemp){
            newTemp->val = *valsValue;
            newTemp = newTemp->next;
            ++valsValue;
        }
        return newHead;      
    }
};

int main(){
    return 0;
}