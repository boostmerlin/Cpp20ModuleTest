import <iostream>;
export module myModule;  //module关键字指明这是一个模块，export关键字指明这是一个模块接口单元
// #include <vector> //can't use #include after module declartion

void internal_function() { //这是一个只在该模块内部可见的函数，不可导出
	//do something;
	std::cout << "Say hello !" << std::endl;
}
export void say_hello() {  //export关键字指明本模块导出函数say_hello()
	internal_function();
	//....
	return;
}
export void say_world();  //导出函数say_world, 函数在此处只提供声明

//当需要导出的C++实体太多时，不必一一指定，可以在下面的大括号中统一指定
export
{
	int var;
	void i_am_export_function() { //...; };
		//other export entity
		std::cout << "iam :" << var << std::endl;
	}

}


