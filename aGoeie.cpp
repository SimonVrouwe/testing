#include <memory>
#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::endl;

int main(){
	auto pi = std::make_shared<int>(10);
	std::cout << "pi: " << pi << std::endl;
	std::cout << "*pi: " << *pi << std::endl;
	std::cout << "A goeie"<<std::endl;
<<<<<<< HEAD
	std::map<std::string,int> age_m = { {"Floor",17}, {"Piet",35}, {"Rosa",28}, {"Henk",84} };
=======
	std::map<std::string,int> age_m = { {"Stella",42}, {"Piet",35}, {"Rosa",28}, {"Henk",84} };
>>>>>>> 935711feccb00c0263065e9915abbe2d6f09cab8
	for (auto elem : age_m)
		cout << elem.first << " is " << elem.second << " years old." << endl;
}
