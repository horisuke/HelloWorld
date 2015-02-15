#include <iostream>
#include "myfunc.h"

//g++ -o mymain -I include/ -L . mymain.cpp  -lmyfunc
//export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.

int main(){
	Myfunc my_entity;
	int y,ret;
	char Cc;
	double b;
	std::string retstr;

	my_entity.get_y(y);
	std::cout << "y = " << y << std::endl;
	my_entity.set_y(12);
	my_entity.get_y(y);
	std::cout << "y' = " << y << std::endl;
	my_entity.get_b(b);
	std::cout << "b = " << b << std::endl;
	my_entity.add(12,34,ret);
	std::cout << "x + y = " << ret << std::endl;
	my_entity.changeToCapitalCharacter('a', Cc);
	std::cout << "c = " << Cc << std::endl;
	my_entity.str = "hoge";
	std::cout << "str = " << my_entity.str << std::endl;

	//my_entity.str.append(5, 'e');
	//my_entity.str.append("abc");

	my_entity.appendString(my_entity.str, "abc", retstr);
	std::cout << "str = " << retstr << std::endl;

	return 0;
}
