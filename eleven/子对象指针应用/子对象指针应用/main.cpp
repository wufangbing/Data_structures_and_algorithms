//
//  main.cpp
//  子对象指针应用
//
//  Created by 吴方兵 on 16/8/23.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <iostream>
using namespace std;
class A{
private:
    int x;
public:
    A():x(1){};
    A(int x){this->x=x;}
    
    void printInfo(){
        cout<<x<<endl;
    }
};

class B{
private:
    A *pa;
    int z;
public:
    
    B(int z,A *t){
        this->z=z;
        pa=t;
    }
    
    void print(){
        pa->printInfo();
        cout<<z<<endl;
    }
    
    
};

int main(int argc, const char * argv[]) {
    
    A obja(2);
    B objb(1,&obja);
    objb.print();
    
    
}