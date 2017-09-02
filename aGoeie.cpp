#include <memory>
#include <iostream>

int main(){
	auto pi = std::make_shared<int>(10);
	std::cout << "pi: " << pi << std::endl;
	std::cout << "*pi: " << *pi << std::endl;
	std::cout << "A goeie"<<std::endl;
}
