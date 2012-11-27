//
//  main.cpp
//  findTheLongestSubString
//
//  Created by Dannion on 12-11-27.
//  Copyright (c) 2012年 dannionQ. All rights reserved.
//

#include <iostream>
#include "LongSubSequence.h"

int main(int argc, const char * argv[])
{
    //LongSubSequence(std::vector<char>&str1,std::vector<char>&str2);
    
    std::vector<char> s1,s2;
    s1.push_back('A');
    s1.push_back('B');
    s1.push_back('C');
    s1.push_back('D');
    s1.push_back('E');
    s1.push_back('F');
    s1.push_back('G');
    s1.push_back('H');
    s1.push_back('I');

    s2.push_back('X');
    s2.push_back('A');
    s2.push_back('X');
    s2.push_back('C');
    s2.push_back('T');
    s2.push_back('E');
    s2.push_back('F');
    s2.push_back('Z');
    s2.push_back('H');
    s2.push_back('G');
    s2.push_back('P');
    s2.push_back('B');
    
    LongSubSequence subSeqTest(s1,s2);
    std::cout<<subSeqTest.calculateWithDynamicProgramming()<<std::endl;
    
    
    return 0;
}

