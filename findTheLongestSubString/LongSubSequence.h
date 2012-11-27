//
//  LongSubSequence.h
//  findTheLongestSubString
//
//  Created by Dannion on 12-11-27.
//  Copyright (c) 2012年 dannionQ. All rights reserved.
//

#ifndef __findTheLongestSubString__LongSubSequence__
#define __findTheLongestSubString__LongSubSequence__

#include <iostream>
#include <vector>


class LongSubSequence
{
public:
    LongSubSequence(std::vector<char>&str1,std::vector<char>&str2);
    
    int calculateWithDynamicProgramming();
    void createSequence(int i, int j);
    
private:
    
    std::vector<char> firstString;
    std::vector<char> secondString;
    std::vector<std::vector<int>> lengthOfSubSequence;
    std::vector<std::vector<int>> subStringMark;

    const int equal;
    const int firstStringMove;
    const int secondStringMove;
    std::vector<char> subString;
};



#endif /* defined(__findTheLongestSubString__LongSubSequence__) */
