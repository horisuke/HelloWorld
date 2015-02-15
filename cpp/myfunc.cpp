#include "myfunc.h"

//g++ -shared -fPIC -o libmyfunc.so myfunc.cpp -I include/

Myfunc::Myfunc():
m_y(110),m_b(2.5),x(50),a(1.2)
{
}

std::string Myfunc::get_y(int& y)
{
	y = m_y;
	return "OK";
}

std::string Myfunc::get_b(double& b)
{
	b = m_b;
	return "OK";
}

std::string Myfunc::set_y(int set_y)
{
	m_y = set_y;
	return "OK";
}

std::string Myfunc::add(int add1, int add2, int& ret)
{
	ret = add1 + add2;
	return "OK";
}

std::string Myfunc::changeToCapitalCharacter(char c, char& Cc)
{
	switch(c){
		case 'a':
			Cc = 'A';
			return "OK";
		case 'b':
			Cc = 'B';
			return "OK";
		default:
			return "OK";
	}

}

std::string Myfunc::appendString(std::string mystr, std::string mystr2, std::string& retstr)
{
	retstr = mystr.append(mystr2);
	return "OK";
}


