#include <iostream>
#include "myfunc.h"

//g++ -o mymain mymain.cpp myfunc.cpp -I include/

//g++ -shared -fPIC -o libmyfunc.so myfunc.cpp -I include/
//g++ -o mymain -I include/ -L . mymain.cpp  -lmyfunc

int main(){
	Myfunc my_entity;
	my_entity.str = "hoge";
	std::cout << "Hello, World!" << std::endl;

	std::cout << "y = " << my_entity.get_y() << std::endl;
	std::cout << "b = " << my_entity.get_b() << std::endl;
	std::cout << "!x + y = " << my_entity.add(12,34) << std::endl;
	std::cout << "c = " << my_entity.changeToCapitalCharacter('a') << std::endl;
	std::cout << "str = " << my_entity.str << std::endl;

	//my_entity.str.append(5, 'e');
	//my_entity.str.append("abc");

	//my_entity.appendString(my_entity.str, "abc");
	std::cout << "str = " << my_entity.appendString(my_entity.str, "abc") << std::endl;
	
	return 0;
}
