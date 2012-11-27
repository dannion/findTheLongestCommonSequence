//
//  LongSubSequence.cpp
//  findTheLongestSubString
//
//  Created by Dannion on 12-11-27.
//  Copyright (c) 2012年 dannionQ. All rights reserved.
//

#include "LongSubSequence.h"


LongSubSequence::LongSubSequence(std::vector<char>&str1 ,std::vector<char>&str2):firstString(str1),secondString(str2),equal(0),firstStringMove(1),secondStringMove(2)
{
    lengthOfSubSequence.resize(str1.size()+1);
    subStringMark.resize(str1.size()+1);
    for (int i=0; i<str1.size()+1; i++) {
        lengthOfSubSequence[i].resize(str2.size()+1);
        subStringMark[i].resize(str2.size()+1);
    }
}


int LongSubSequence::calculateWithDynamicProgramming()
{
    for (int i=0; i<=firstString.size(); i++) {
        lengthOfSubSequence[i][0] = 0;
    }
    for (int i=0; i<=secondString.size(); i++) {
        lengthOfSubSequence[0][i] = 0;
    }
    
    for (int i=0; i<firstString.size(); i++) {
        for (int j=0; j<secondString.size(); j++) {
            if (firstString[i]== secondString[j]) {
                lengthOfSubSequence[i+1][j+1] = lengthOfSubSequence[i][j] + 1;
                subStringMark[i+1][j+1] = equal;
            }else if (lengthOfSubSequence[i+1][j]>=lengthOfSubSequence[i][j+1]){
                lengthOfSubSequence[i+1][j+1] = lengthOfSubSequence[i+1][j];
                subStringMark[i+1][j+1] = secondStringMove;
            }else{
                lengthOfSubSequence[i+1][j+1] = lengthOfSubSequence[i][j+1];
                subStringMark[i+1][j+1] = firstStringMove;
            }
        }
    }
    
    createSequence((int)firstString.size(), (int)secondString.size());
    
    for (int i=0; i<subString.size(); i++) {
        std::cout<<subString[subString.size() - 1 - i]<<std::endl;
    }
    
    return lengthOfSubSequence[firstString.size()][secondString.size()];
    
}



void LongSubSequence::createSequence(int i, int j)
{
    if (i==0 || j==0) {
        return;
    }
    
    if (subStringMark[i][j]==equal) {
        
        subString.push_back(firstString[i-1]);
        createSequence(i-1, j-1);
    }else if(subStringMark[i][j]==firstStringMove){
        createSequence(i-1, j);
    }else{
        createSequence(i, j-1);
    }
}















