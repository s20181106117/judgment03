//
//  main.cpp
//  judgment03
//
//  Created by s20181106117 on 2019/6/20.
//  Copyright © 2019 s20181106117. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[])
{
    int a,b;
    ifstream in1("/Users/s20181106117/Desktop/caipan.txt ");
    ifstream in2("/Users/s20181106117/Desktop/caipan-2.txt ");
    ofstream out("/Users/s20181106117/Desktop/chengji.txt ");
    if(in1.is_open())
    {
        cout<<"file ok"<<endl;
        in1>>a;
        cout<<a<<" "<<endl;
        in1.close();
    }
    if(in2.is_open())
    {
        cout<<"file ok"<<endl;
        in2>>b;
        cout<<b<<" "<<endl;
        in2.close();
    }
    if(out.is_open())
    {
        out<<"c="<<a+b<<endl;
        cout<<"c="<<a+b<<endl;
        out.close();
    }
    
    return 0;
}
