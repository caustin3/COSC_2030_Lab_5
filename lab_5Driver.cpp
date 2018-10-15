//chase austin
//date 15/oct/2018
//COSC 2030 lab 5

#include "lab_5Mystack.h"
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <list>
using namespace std;
using  std::stack;
using  std::string;
using  std::vector;
using  std::list;

string stringReversal1(string input)
{
	string output = "";
	stack<char> stack;
	for (int index = 0; index < input.length(); index++)
	{
		stack.push(input.at(index));
	}
	if (stack.empty())
	{
		return output;
	}
	else
	{
		while (!(stack.empty()))
		{
			output.push_back(stack.top());
			stack.pop();
		}
		return output;
	}
}

string stringReversal2(string input)
{
	string output = "";
	vector<char> vector;
	for (int index = 0; index < input.length(); index++)
	{
		vector.push_back(input.at(index));
	}
	if (vector.empty())
	{
		return output;
	}
	else
	{
		while (!(vector.empty()))
		{
			output.push_back(vector.back());
			vector.pop_back();
		}
		return output;
	}
}

string stringReversal3(string input)
{
	string output = "";
	list<char> vector;
	for (int index =0 ; index < input.length(); index++)
	{
		vector.push_back(input.at(index));
	}
	if (vector.empty())
	{
		return output;
	}
	else
	{
		while (!(vector.empty()))
		{
			output.push_back(vector.back());
			vector.pop_back();
		}
		return output;
	}
}

string stringReversal4(string input)
{
	string output="";
	My_Stack my_stack;
	for (int index = 0 ; index < input.length(); index++)
	{
		my_stack.push(input.at(index));
	}
	if (my_stack.isempty())
	{
		return output;
	}
	else
	{
		while (!(my_stack.isempty()))
		{
			output.push_back(my_stack.pull());			
		}
		return output;
	}
}
int main()
{
	string input, output;
	input = "abc";
	output = stringReversal1(input);
	cout << output << endl;
	output = stringReversal2(input);
	cout << output << endl;
	output = stringReversal3(input);
	cout << output << endl;
	output = stringReversal4(input);
	cout << output << endl;

	system("pause");
	return 0;
}