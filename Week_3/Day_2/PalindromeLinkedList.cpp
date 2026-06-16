#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

bool isPalindrome(ListNode* head) {
    vector<int> v;

    while (head != NULL) {
        v.push_back(head->val);
        head = head->next;
    }

    int left = 0, right = v.size() - 1;

    while (left < right) {
        if (v[left] != v[right])
            return false;

        left++;
        right--;
    }

    return true;
}