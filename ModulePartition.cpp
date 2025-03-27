module myModule:ModulePartition; //模块声明应该放在开头

import <iostream>; // 这里是可以import的
//#include <iostream> // 也可以#include
import <vector>;
//#include <vector> 不能使用include,会有重复，因为模块声明单元已经import。但是可以使用import

//can't use import and #include both
//模块实现后不能使用import 和#include
//import <vector>;
//#include <vector>
void partFuntion()
{
	std::vector<double> v;
	v.push_back(3.0);
	std::cout << v.front() << std::endl;
}