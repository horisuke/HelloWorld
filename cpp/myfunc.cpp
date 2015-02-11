#include "myfunc.h"

Myfunc::Myfunc():
y(110),b(2.5)
{
}

int Myfunc::get_y()
{
	return y;
}

double Myfunc::get_b()
{
	return b;
}

int Myfunc::add(int x, int y)
{
	return x + y;
}

char Myfunc::changeToCapitalCharacter(char c)
{
	switch(c){
		case 'a':
			return 'A';
		default:
			return 0;
	}


}

std::string Myfunc::appendString(std::string mystr, std::string mystr2)
{

	return mystr.append(mystr2);

}


