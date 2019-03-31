//
//  Longest Common Prefix.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/3/29.
//

/*
 Write a function to find the longest common prefix string amongst an array of strings.
 
 If there is no common prefix, return an empty string "".
 
 Example 1:
 
 Input: ["flower","flow","flight"]
 Output: "fl"
 */
char* longestCommonPrefix(char** strs, int strsSize)
{
    int i,j;
    char *p;
    if(strsSize<=0)
        return "";
    p=strs[0];
    for(i=1;i<strsSize;i++)
    {
        j=0;
        while(p[j] && strs[i][j] && p[j]==strs[i][j])
        {
            j++;
        }
        p[j]='\0';
    }
    return p;
}
