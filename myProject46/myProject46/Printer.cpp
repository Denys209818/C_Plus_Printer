#include "libs.h"
#include "Header.h"

Printer::Printer()
{

}

Printer::Printer(Spooler& doc)
{
	this->doc = &doc;
}

void Printer::PrintDoc()
{
	while (!this->doc->empty())
	{
		this->time = (rand() % 10)+1;
		Document d = this->doc->Pop();
		system("cls");
		cout << "Друкування файлу - " << d.GetName() << ". " << "Зачекайте " << this->time << " секунд" << endl;
		Sleep(this->time * 1000);
		cout << "Заберiть копiю" << endl;

		char ch;
		if (this->doc->size > 0)
		{
			cout << "Скасувати подальше друкування y/n" << endl;
			ch = _getch();
			if (ch == 'y')
			{
				system("cls");
				break;
			}
		}
		else
		{
			_getch();
		}
	}
}