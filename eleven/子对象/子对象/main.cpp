//
//  main.cpp
//  子对象
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
    A obja;
public:
    void print(){
        obja.printInfo();
    }
};

int main(int argc, const char * argv[]) {
    
    B objb;
    objb.print();
    

}
