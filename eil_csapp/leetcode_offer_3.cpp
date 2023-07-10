//
//  leetcode_offer_3.cpp
//  eil_csapp
//
//  Created by 袁铭潮 on 2023/6/11.
//

using namespace std;
#include <stdio.h>
#include <vector>
#include <map>
#include "leetcode.h"

int Solution::findRepeatNumber(vector<int>& nums) {
    map<int, int> counter;
    for(int i=0; i<nums.size();i++){
        ++counter[nums[i]];
    }
    
//    遍历
    map<int, int>::iterator iter;
    for (iter=counter.begin(); iter!=counter.end(); iter++){
        if (iter->second>1){
            return iter->first;
        }
    }
    return 0;
}
