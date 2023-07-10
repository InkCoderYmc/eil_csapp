//
//  leetcode_offer_6.cpp
//  eil_csapp
//
//  Created by 袁铭潮 on 2023/6/11.
//

using namespace std;
#include <stdio.h>
#include <vector>
#include <map>
#include <string>
#include "leetcode.h"

struct ListNode {
    int val;
    ListNode *next;
};

vector<int> Solution::reversePrint(ListNode* head) {
    vector<int> result;
    while(head){
        auto iter = result.begin();
        result.insert(iter, head->val);
        head = head->next;
    }
    return result;
}
