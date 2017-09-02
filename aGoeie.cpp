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
	std::map<std::string,int> age_m = { {"Piet",35}, {"Rosa",28}, {"Henk",84} };
	for (auto elem : age_m)
		cout << elem.first << " is " << elem.second << " years old." << endl;
}
