//
//  main.cpp
//  Arrays
//
//  Created by Nien-Tai Ho on 2016/4/28.
//  Copyright © 2016年 NienTaiHo. All rights reserved.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *ptr;
    int size;
    cin >> size;
    ptr = new int[size]; //dynamic array!!!
    for (int i=0; i<size; i++)
    {
        cin >> ptr[i];
    }
    for (int i=size-1; i>=0; i--)
    {
        cout << ptr[i] << " ";
    }
    

    return 0;
}

