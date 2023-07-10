//
//  leetcode_offer_4.cpp
//  eil_csapp
//
//  Created by 袁铭潮 on 2023/6/11.
//

using namespace std;
#include <stdio.h>
#include <vector>
#include <map>
#include "leetcode.h"

bool Solution::findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    for (int i=0; i<matrix.size(); i++){
        for (int j=0; j<matrix[i].size(); j++){
            if (matrix[i][j]==target) return true;
        }
    }
    return false;
}
