//
//  Reverse Integer.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/3/25.
//

int reverse(int x) {
    int fd=0;
    int a[11];
    int i=0;
    int max;
    double product;
    double n;
    int num=0;
    if (x<0)
    {
        fd=1;
        if(x==-2147483648)
            return 0;
        x=~x+1;
    }
    do
    {
        a[i]=x%10;
        i++;
        x/=10;
    }while(x>0);
    max=i-1;
    i=0;
    for(max;max>=0;max--)
    {
        product=1;
        for(int j=0;j<max;j++)
            product*=10;
        n=num+a[i]*product;
        if(n>=2147483648 && fd==0)
            return 0;
        else if(n>2147483648 && fd==1)
            return 0;
        num=n;
        i++;
    }
    if(fd==1)
        num=~num+1;
    printf("%d",num);
    return num;
}
