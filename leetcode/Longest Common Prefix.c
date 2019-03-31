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
    for(i=1;i<strsSize;i++)//从第一个字符串开始
    {
        j=0;
        while(p[j] && strs[i][j] && p[j]==strs[i][j])//与第0个字符串的所有字符依次比较
        {
            j++;
        }
        p[j]='\0';//截短第0个字符串
    }
    return p;
}
