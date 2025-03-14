module myModule; //声明模块实现单元
//#include <vector> //can't use #include after module declartion， but import works

void say_world()
{
	std::cout << "Say world! \n";
}