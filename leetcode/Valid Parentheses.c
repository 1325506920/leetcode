//
//  Valid Parentheses.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/3/31.
//https://blog.csdn.net/hhhhhyb/article/details/75949088

/*
 Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 
 An input string is valid if:
 
 Open brackets must be closed by the same type of brackets.
 Open brackets must be closed in the correct order.
 Note that an empty string is also considered valid.
 */
bool isValid(char* s)
{
    int signal=0;
    char a[9999];
    while(*s!='\0')
    {
        if(*s==')')
        {
            if(signal>0 && a[signal--]=='(');
            else
                return false;
        }
        if(*s==']')
        {
            if(signal>0 && a[signal--]=='[');
            else
                return false;
        }
        if(*s=='}')
        {
            if(signal>0 && a[signal--]=='{');
            else
                return false;
        }
        else
        {
            signal++;
            a[signal]=*s;
        }
        s++;
    }
    if(signal==0)
        return true;
    else
        return false;
}


