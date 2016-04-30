//
//  main.cpp
//  2dMatrix
//
//  Created by Nien-Tai Ho on 2016/4/28.
//  Copyright © 2016年 NienTaiHo. All rights reserved.
//

#include <iostream>
using namespace std;

void func(int a[][3],int b)
{
    for (int i=0; i<=b; i++)
    {
        cout << a[i-1][2] << " ";
    }
}

int main(int argc, const char * argv[])
{
    int a[3][3]={
        {1,4,7},
        {2,5,8},
        {3,6,9}
    };
    func(a,a[2][0]);
    
    return 0;
}
