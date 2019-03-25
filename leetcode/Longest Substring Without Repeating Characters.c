//
//  Longest Substring Without Repeating Characters.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/3/25.
//

#include "Longest Substring Without Repeating Characters.h"
int lengthOfLongestSubstring(char* s) {
    if(strlen(s)==0)
        return 0;
    int i,j,k;
    int old_max=1;
    int new_max=1;
    for(i=0;s[i]!='\0';i++)
    {
        int repeat=0;
        new_max=1;
        for(j=i+1;s[j]!='\0' && repeat==0;)
        {
            k=i;
            while (k<j)
            {
                if(s[j]!=s[k])
                    k++;
                else
                {
                    repeat=1;
                    break;
                }
            }
            if(k==j)
            {
                j++;
                new_max++;
            }
            if(new_max>old_max)
            {
                old_max=new_max;
            }
        }
    }
    return old_max;
}
