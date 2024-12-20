/*
 * main.cpp
 *
 * Example of use singleton.
 *
 * 30-07-2020 LANA Systems.
 */
#include <iostream>


class CSingleton
{
public:	
	static CSingleton& instance()
	{
		static CSingleton m_unique; 
		
		return m_unique;
	}
	
	void do_something()
	{
		std::cout << "method do_something()\n";
	}
	
private:
	CSingleton()
	{
		std::cout << "ctor CSingleton()\n";
	}
	
	~CSingleton()
	{
		std::cout << "dtor CSingleton()\n";
	}
};


int main(void)
{
	std::cout << "singleton test.\n\n";
	
	CSingleton::instance().do_something();

	CSingleton& refObj = CSingleton::instance();
	refObj.do_something();
	
	CSingleton* ptrObj = static_cast<CSingleton*>(&CSingleton::instance());
	ptrObj->do_something();
	
	return 0;
}
