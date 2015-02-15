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
	std::string get_y(int& y);

	//get b value which is the private/double variable.
	std::string get_b(double& b);

	//set m_y value which is the private/int variable.
	std::string set_y(int set_y);

	//get the result of x + y.
	std::string add(int add1, int add2, int& ret);

	//change the c to Capital character.
	std::string changeToCapitalCharacter(char c, char& Cc);

	//
	std::string appendString(std::string mystr, std::string mystr2, std::string& retstr);
 
private:
	int m_y;
	double m_b;

};


