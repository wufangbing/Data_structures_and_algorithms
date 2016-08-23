//
//  main.cpp
//  this指针简单理解
//
//  Created by 吴方兵 on 16/8/23.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <iostream>
using namespace std;
class person{
private:
    int age;
    char name;
    
public:
    
    person():age(30),name('w'){};
    
    person(int age,char name){
        this->age=age;
        this->name=name;
    }
    
    int add(person t){
        return this->age+t.age;
    }
  
};


int main(int argc, const char * argv[]) {
    person a(30,'d'),b;
    
    cout<<a.add(b)<<endl;
    
    
}

