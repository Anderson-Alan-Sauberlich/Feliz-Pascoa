#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main ()
{
	string str("Cuuuu e linho se eu fose tu, eu tirava a mao do bolco e enfiava no ...\n");
	
	while (true) 
	{
		for (int i = 0; i < str.size(); i++){
			cout << str[i];
			
			sleep_for(nanoseconds(99999999));
		}	
	}
	
	return 0;
}