//
//  main.cpp
//  BasicDataType
//
//  Created by Nien-Tai Ho on 2016/4/27.
//  Copyright © 2016年 NienTaiHo. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num;
    long num2;
    long long num3;
    char ch;
    float fl;
    double d;
    
    scanf("%d %ld %lld %c %f %lf", &num,&num2,&num3,&ch,&fl,&d);
    
    printf("%d\n", num);
    printf("%ld\n", num2);
    printf("%lld\n", num3);
    printf("%c\n", ch);
    printf("%f\n", fl);
    printf("%lf\n", d);
    
    return 0;
}
