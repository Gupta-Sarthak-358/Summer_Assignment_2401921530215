#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* curr = head;
       ListNode* prev = nullptr;
       while(curr){
        ListNode* Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
       } 
       return prev;
    }
};

int main(){
    Solution sol;

    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    ListNode* reversedHead = sol.reverseList(head);

    ListNode* current = reversedHead;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}