//
//  leetcode_1.cpp
//  eil_csapp
//
//  Created by 袁铭潮 on 2023/6/10.
//
using namespace std;
#include <stdio.h>
#include <vector>
#include "leetcode.h"
vector<int> Solution::twoSum(vector<int>& nums, int target) {
    for (int i=0; i<nums.size(); i++){
        for (int j=i+1;j<nums.size(); j++){
            if (nums[i] + nums[j] == target){
                return vector<int> {i,j};
            }
        }
    }
    return vector<int>{};
}
