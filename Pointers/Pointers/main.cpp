//
//  main.cpp
//  Pointers
//
//  Created by Nien-Tai Ho on 2016/4/27.
//  Copyright © 2016年 NienTaiHo. All rights reserved.
//

#include <stdio.h>
#define CHAR_BIT 8

//abs
unsigned int getAbs(int n)
{
    int const mask = n >> (sizeof(int) * CHAR_BIT - 1);
    return ((n + mask) ^ mask);
}

void update(int *a,int *b)
{
    // Complete this function
    int n1,n2;
    n1 = *a + *b;
    n2 = *a - *b;
    n2 = getAbs(n2);
    *a = n1;
    *b = n2;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    
    return 0;
}
