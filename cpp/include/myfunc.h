#include <string>

class Myfunc
{
public:
	int x;
	double a;
	std::string str;

	//constructor / Initialize the private variables.
	Myfunc();

	//get y value which is the private/int variable.
	int get_y();

	//get b value which is the private/double variable.
	double get_b();

	//get the result of x + y.
	int add(int x, int y);

	//change the c to Capital character.
	char changeToCapitalCharacter(char c);

	//
	std::string appendString(std::string mystr, std::string mystr2);
 
private:
	int y;
	double b;

};


