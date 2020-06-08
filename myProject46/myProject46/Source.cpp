#include "Header.h"
#include "libs.h"

void main() 
{
	srand(time(0));
	setlocale(LC_CTYPE,"ukr");
	
	
	/*enum PR {klerk = 1, bughalter, direktor};
	int counter = 1;
	int ch = 1;
	Spooler s;
	while (true) 
	{
		system("cls");
		cout << "=====================" << endl;
		if (counter == 1)cout << "->"; else cout << "  ";
		cout << "1.Додати документ в чергу" << endl;
		if (counter == 2)cout << "->"; else cout << "  ";
		cout << "2.Почати друкувати" << endl;
		cout << "=====================" << endl;

		ch = _getch();
		switch (ch) 
		{
		  case 224: 
		  {
			  switch (_getch()) 
			  {
			  case 72: counter < 2 ? counter++ : counter = 1; break;
			  case 80: counter > 1 ? counter-- : counter = 2; break;
			  }
		  }
		}
		if (ch == 13) 
		{
			if (counter == 1) 
			{
				string name;
				cout << "Введить назву файла - ";
				cin >> name;
				int k,a;
				cout << "Введить розмiр файлу - ";
				cin >> k;
				cout << "Введiть прiорiтет (1 - для клерка, 2 - для бугалтера, 3 - для директора) - ";
				cin >> a;
				if (a > 3) 
				{
					a = direktor;
				}
				else if (a < 0) 
				{
					a = klerk;
				}
				Document d(name, k);
				s.Push(d, a);
			}
			else if (counter == 2) 
			{
				Printer p(s);
				p.PrintDoc();
			}
		}
	}*/
	

	//2
	/*Stack<int> a;
	Stack<int> b;
	Stack<int> c;
	Stack<int> d;

	for (int i = 0; i < 10; i++) 
	{
		c.Push((rand() % 19)+1);
		d.Push((rand() % 19)+1);
	}
	
	for (int i = 0; i < 10; i++) 
	{
		if (c[i] % 2 == 0) 
		{
			a.Push(c[i]);
		}
		else 
		{
			b.Push(c[i]);
		}

		if (d[i] % 2 == 0)
		{
			a.Push(d[i]);
		}
		else 
		{
			b.Push(d[i]);
		}
	}


		Sort<int>(a);
		Sort_<int>(b);

		for (int i = 0; i < a.GetSize(); i++) 
		{
			cout << a[i] << endl;
		}
		cout << "===================" << endl;
		for (int i = 0; i < b.GetSize(); i++)
		{
			cout << b[i] << endl;
		}*/


}