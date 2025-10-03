#include<iostream>
using namespace std;

class Elevator
{
	int topFloor;
	int groundFloor;
	bool OnOff;
	bool works;
	int position;
public:
	Elevator(int ground, int top);
	void onOff(); // вкл выкл
	void setPosition(int); // установка этажа
	int GetPosition()const;
	void Call();
	void Print()const;
};
Elevator::Elevator(int ground, int top)
{
	groundFloor = ground;
	topFloor = top;
	OnOff = false; // выкл
	works = false; // не работает
	position = 0;
}

void Elevator::onOff()
{
	OnOff = !OnOff;
}
void Elevator::setPosition(int position)
{
	this->position = position;
}
int Elevator::GetPosition()const
{
	return position;
}
void Elevator::Call()
{
	cout << "¬ведите этаж от " << groundFloor << " до " << topFloor << endl;
	cin >> position;
	cout << "“екуща€ позици€  = " << position << endl;

}

void Elevator::Print()const
{
	cout << "Position: " << position << endl;
	cout << "GroundFloor: " << groundFloor << endl;
	cout << "TopFloor: " << topFloor << endl;
	cout << "OnOff: " << !OnOff << endl;
	cout << "Works: " << works << endl;
}

int main()
{
	setlocale(0, "ru");
	Elevator el(1, 10);
	el.onOff();
	el.Call();
	el.Print();

}

