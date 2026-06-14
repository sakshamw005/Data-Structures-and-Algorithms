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
        vector<int> arr ;
        while(head!=nullptr){
            arr.push_back(head->val) ;
            head = head->next ;
        }
        int l = 0 , r = arr.size() - 1 ;
        int ans = 0 ;
        while(l<r){
            int sum = arr[l]+arr[r];
            if(sum>ans)ans = sum ;
            l++ ;
            r-- ;
        }
        return ans ;
    }
};