//
//  leetcode_offer_5.cpp
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

string Solution::replaceSpace(string s){
    // 第一遍确定空格数量
    int num_of_space = 0;
    auto iter = s.cbegin();
    while(iter!=s.end()){
        if(*iter==' '){
            num_of_space++;
        }
        iter++;
    }
    // 根据空格数确定返回字符串长度
    string s_no_space(s.length()+2*num_of_space, ' ');
    iter = s.cbegin();
    int i = 0;
    while(iter!=s.cend()){
        if(*iter==' '){
            s_no_space[i] = '%';
            s_no_space[i+1] = '2';
            s_no_space[i+2] = '0';
            i+=3;
        }
        else{
            s_no_space[i]=*iter;
            i++;
        }
        iter++;
    }
    return s_no_space;
}
