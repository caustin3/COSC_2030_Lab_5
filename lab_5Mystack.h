//chase austin
//date 15/oct/2018
//COSC 2030 lab 5

#include <iostream>
#include <vector>
#include <list>
using namespace std;
using  std::vector;
using  std::list;



#ifndef LAB_5MYSTACK_H_
#define LAB_5MYSTACK_H_
class My_Stack
{
public:
	My_Stack();
	

	~My_Stack();
	

	void push(char& c);
	

	char pull();
	
	bool isempty();

	
	
private:
	list< char > store;
	/*vector< char > store;*/
};
#endif
