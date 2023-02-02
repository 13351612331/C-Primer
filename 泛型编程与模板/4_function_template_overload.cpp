//
// Created by kangyu on 23-2-2.
//
#include <iostream>
using namespace std;

/*
 * 函数模板与普通函数的重载
 * 当调用规则同时满足普通函数与函数模板时，优先调用普通函数
 *
 * 函数模板与函数模板的重载
 */

int func1(int a , int b){
  cout << "这是普通函数 func1" << endl;
  return a + b;
}

template<typename T>
T func1(T a , T b){
  cout << "这是函数模板 func1" << endl;
  return a + b;
}

void func2(){
  cout << "这是普通函数 func2" << endl;
}

template<typename T>
void func2(){
  cout << "这是函数模板 func2" << endl;
}


template<typename T>
void func3(T a , T b){
  //cout << (a + b) << endl;
  cout << "这是函数模板 func3" << endl;
}

template<typename T>
void func3(T *a , T *b){
  cout << "这是函数模板 func3*" << endl;
}

template<typename T>
void func4(T a , T b){
  //cout << (a + b) << endl;
  cout << "这是函数模板 func4" << endl;
}

template<typename T>
void func4(T a){
  //cout << (a + b) << endl;
  cout << "这是函数模板 func4*" << endl;
}

int main(){
  int a = 1;
  int b = 2;
  func1(a , b);
  func1<int>(a , b); // 调用函数模板
  func1<>(a , b); // 也是强制调用函数模板，这里可以用后面的参数推导出类型

  double c = 1.1;
  double d = 2.2;
  func1(c , d);

  func2(); // 调用普通函数
  func2<int>(); // 调用函数模板，因为没有参数，所以编译器无法通过参数来推导类型，所以必须显式指定类型

  func3(a , b);
  func3(&a , &b); // 当调用函数模板时，如果函数体内不支持类型的运算，就会报错

  func4(a , b);
  func4(a);
  return 0;
}