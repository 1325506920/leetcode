//
//  Roman to Integer.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/3/26.
//
/*
 
 题目描述：Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.
 */
int romanToInt(char* s)
{
        int i=0;
        int j=0;
        int a[26]=0;
        int num=0;
        a['I'-'A']=1;
        a['V'-'A']=5;
        a['X'-'A']=10;
        a['L'-'A']=50;
        a['C'-'A']=100;
        a['D'-'A']=500;
        a['M'-'A']=1000;
        while(s[i])
        {
            j=s[i]-'A';
            if(s[i+1] && a[j]<a[s[i+1]-'A'])
                num-=a[j];
            else
                num+=a[j];
            i++;
        }
    return num;
}


