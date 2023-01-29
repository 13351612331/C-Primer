//
// Created by kangyu on 23-1-29.
//
#include <iostream>

int func1(int a, int b) { return a + b; }

double func2(double a, double b) { return a + b; }

/**
 * 所谓函数模板，实际就是写一个通用函数，返回值和参数类型都是可变的，用一个特定格式的变量来指定
 * 然后调用此函数的时候，编译器会自动根据参数的数据类型，自动推导类型，从而达到函数在不同的类型参数下可复用的目的
 * 这个通用函数就是函数模板
 *
 * template<typename T> T是一个变量名，不是一个固定写法
 * 参数也可以有多个,T1,T2...
 */
template <typename T> T funcT(T a, T b) { return a + b; }

int main() {
  int a = 1;
  int b = 2;
  int x = func1(a, b);

  double c = 1.1;
  double d = 2.2;
  double y = func2(c, d);
  std::cout << x << "---" << y << std::endl;

  int X = funcT(a, b);
  double Y = funcT(c, d);
  std::cout << X << "---" << Y << std::endl;
}