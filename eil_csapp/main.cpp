//
//  main.cpp
//  eil_csapp
//
//  Created by 袁铭潮 on 2023/6/10.
//

using namespace std;
#include <iostream>
#include <vector>
#include "leetcode.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    vector<int> a = {2,7,11,15};
//    int t = 9;
//    Solution solution;
//    cout<<solution.twoSum(a,t).size()<<endl;
//    for (int i=0;i<solution.twoSum(a,t).size();i++){
//        cout<<solution.twoSum(a, t)[i]<<endl;
//    }
    string a = "We are happy.";
    Solution solution;
    cout<<solution.replaceSpace(a).size()<<endl;
    cout<<solution.replaceSpace(a)<<endl;
    return 0;
}
