#include <iostream>
#include<time.h>
#include <sstream>
#include <windows.h> 
int main()
{
	std::cout << "Fortia Time - v0.2\nLoading...\n";
	Sleep(3000); 
	system("cls");
	while(true) 
	{
		time_t now = time(NULL);
		tm* tm_t = localtime(&now);
		std::stringstream ss;
		ss << "Year:" << tm_t->tm_year + 1900 << "\nMonth:" << tm_t->tm_mon + 1 << "\nDay:" << tm_t->tm_mday << "\nHour:" << tm_t->tm_hour << "\nMinute:" << tm_t->tm_min << "\nSecond:" << tm_t->tm_sec<<"\n";
		std::cout << ss.str();
		Sleep(1000); 
		system("cls");
	} 

}
