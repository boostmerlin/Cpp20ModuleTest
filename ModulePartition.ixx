import <vector>; // 这些位置都ok
//#include <vector>

//module;
//#include <vector>

export module myModule:ModulePartition;//貌似可以，但是放开头好点
import <vector>; //这些位置都ok, 但是不能使用#include
export void partFuntion();
//import <vector>; //这些位置都ok, 但是不能使用#include

void internalFunc() {
	std::vector<int> v2;
	v2.push_back(3);
}

