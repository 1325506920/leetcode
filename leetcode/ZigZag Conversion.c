//
//  ZigZag Conversion.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/3/25.
//

char* convert(char* s, int numRows) {
    int strLen = strlen(s), counter = 0;
    char *ret = malloc((strLen+1)*(sizeof(char)));
    if(numRows == 1 || numRows >= strLen)
    {
        return s;
    }
    else
    {
        for(int i = 1; i <= numRows; i++)
        {
            for(int j = i; j <= strLen; j += 2*numRows-2)
            {
                ret[counter++] = s[j-1];
                if(1 != i &&  i != numRows && j+2*(numRows-i) <= strLen)
                {
                    ret[counter++] = s[j+2*(numRows-i)-1];
                }
            }
        }
    }
    ret[strLen] = '\0';
    return ret;
    
}
