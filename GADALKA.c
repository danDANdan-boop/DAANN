#include <iostream>
#include <string>
#include "lib.h"
#include <time.h>

using namespace std;

string c = "";

int main()
{
    srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	while (getch)
    {   
        cout << "Можно ввести вопрос только на котрый можно ответить ДА, НЕТ, НЕ ЗНАЮ. Введите вопрос:" << endl;
        cin >> c;
    		
    	int n = rand() % 15;
    	if (n < 5)
    	{
        cout << " ДА" << endl;
    	}
    	else if (n >= 5 & n < 10)
    	{
        cout <<  "НЕТ"   << endl;
    	}
    	else
    	{
        cout <<  "НЕ ЗНАЮ"   << endl;
    	}
    	    
    }
	
	cout << "Hello from GITHUB" << endl;
//	cout << n << endl;
	return 0;
}
