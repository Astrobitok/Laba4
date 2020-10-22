// laba4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
//для задачи 6
int Factorial(const int& f) {
	int i = 1;
	int ans = 1;
	if (f > 0) {
		for (; i <= f; i++) {
			ans *= i;
		}
		return ans;
	}
	else {
		return 1;
	}
}//для 7 задачи

int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	setlocale(LC_ALL, "Russian");

	//1 задача
	/*int a;
	cout << "Введите число\n";
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)	cout << i << " ";
	}*/

	// 2 задача
	// я ее сделал в колледже

	//3 задача
	/*int a;
	cout << "введите число от 1 до 10\n";
	cin >> a;
	string numbers[11] = {
		"ноль", "один", "два", "три",
		"четыре","пять","шесть",
		"семь","восемь","девять","десять"
	};
	if (a > 0 && a <= 11)
		cout << "Это число " << numbers[a];
	else cout << "Error 404";*/

	// 4 задача

	/*int i = 84;
	for (int a = 2; a < i - 1; a++)
		for (int b = a + 1; b < i; b++) {
			int c2 = a * a + b * b;
			int c = (int)(sqrt(c2));
			if (c * c == c2) cout << " a = " << a << " b = " << b << " c = " << c << endl;
		}*/

		// 5 задача
		/*cout << "Введите a,b,c\n";
		int a, b, c, d,x1,x2;
		cin >> a >> b >> c;
		d = (int)(pow(b, 2) - 4 * a * c);
		if (d > 0)
		{
			x1 = (int)(-b + sqrt(d)) / (2 * a);
			x2 = (int)(-b - sqrt(d)) / (2 * a);
			cout << "x1=" << x1 << " x2=" << x2 << "\n";
		}
		else if (d == 0)
		{
			x1 = (-b / (2 * a));
			cout << "x=" << x1 << "\n";
		}
		else cout << "Корни не найдены";*/

		// 6 задача

		/*int n;
		do {
			cout << "Введите число\n";
			cin >> n;
			cout << Factorial(n)<<endl;
		} while (n != 0);*/

		// 7 задача

	/*int a[50];
	int i;
	srand(0);
	for (i = 0; i < 50; i++)
		a[i] = 1 + rand() % 100;
	for (i = 0; i < 50; i++)
		cout << a[i] << " ";
	cout << "\n";
	int n;
	qsort(a, 50, sizeof(int), comp1);
	for (n = 0; n < 50; n++)
	{
		cout << a[n] << " ";
	}
	cout << "\n";*/

	//8 задача

	/*int n;
	cout << "Введите число\n";
	cin >> n;
	for (int i = 0; i <= 10; i++)
	{
		cout <<n<<" * "<<i<<" = "<< n * i << endl;
	}*/

	return 0;
	}
	


