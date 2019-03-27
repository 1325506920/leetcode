//
//  Palindrome Number.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/3/26.
//
//题目描述：Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
bool isPalindrome(int x)
{
    if(x<0 || (x%10==0 && x!=0))
        return false;
    int reverse=0;//后半段之和
    while(x>reverse)
    {
        reverse=reverse*10+x%10;
        x/=10;
    }
    if(x==reverse || x==reverse/10)//第一种情况：偶数位；第二种情况：奇数位
        return true;
    else
        return false;
}
