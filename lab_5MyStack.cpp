
#include "lab_5Mystack.h"

My_Stack::My_Stack()
{
	
}

My_Stack::~My_Stack()
{

}
void My_Stack::push(char& c)
{
	store.push_back(c);
}

char My_Stack::pull()
{
	char item = store.back();
	store.pop_back();
	return item;
}

bool My_Stack::isempty()
{
	return store.size() == 0;
}

