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
    int pairSum(ListNode* head) {
        ListNode * curr= head;
        vector<int>vac;
        while(curr!=NULL){
            vac.push_back(curr->val);
            curr=curr->next;
        }
        int maxSum=0;
        int i=0; int j= vac.size()-1;
        while(i<j){
            maxSum=max(maxSum, vac[i]+vac[j]);
            i++;
            j--;
        }
        return maxSum;
    }
};


// time complexicity-> O(N),
// space complexicity -> O(N)
