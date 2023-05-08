// Mid Term Exam Output#4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
class A
{
	int a;
public:
	A()
	{
		cout << "--A'S CONSTRUCTOR IS CALLED--"<<endl;
	}
};
class B
{
	static A a;
public:
	B()
	{
		cout << "--B'S CONSTRUCTOR IS CALLED--";
	}
	static A get()
	{
		return a;
	}
};
A B::a;
int main(int argc,char const*argv[])
{
	B b;
	A a1 = b.get();
	A a2 = b.get();
	A a3 = b.get();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file