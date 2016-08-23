//
//  main.cpp
//  指针指向对象
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
    
    person(){
        age=20;
        name='w';
    }
    
    person(int age,char name){
        this->age=age;
        this->name=name;
    }
    
    void printInfo(){
        cout<<age<<endl;
        cout<<name<<endl;
    }
    
  
};


int main(int argc, const char * argv[]) {
    person * px=new person(30,'l');
    px->printInfo();
    delete(px);
    
}

