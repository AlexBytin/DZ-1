// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;
int main()
{
	float a = 0.4f, b = 1.3f, x = 5.42f;
	double y = atan(a / x) / (b - x);
	printf ("Result : %.5f\n", y);
	printf("%s\n", "Enter a, b, x:");
	cin >> a;
	cin >> b;
	cin >> x;
	y = atan(a / x) / (b - x);
	printf("2 Result : %.5f\n", y);
	getchar (); 
	getchar();
    return 0;
}


