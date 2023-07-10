//
//  leetcode.h
//  eil_csapp
//
//  Created by 袁铭潮 on 2023/6/10.
//

#ifndef leetcode_h
#define leetcode_h

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
    int findRepeatNumber(vector<int>& nums);
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target);
    string replaceSpace(string s);
    struct ListNode {
        int val;
        ListNode *next;
    };
    vector<int> reversePrint(ListNode* head);
    
};

#endif /* leetcode_h */
