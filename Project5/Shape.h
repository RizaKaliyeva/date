#pragma once
const double pi = 3.14;
class circle {
private:
	double radius;
public:
	circle() = default;
	circle(double radius) {
		this->radius = radius;
	}
	double area() {
		return pi*radius*radius;
	}

	double l() {
		return 2 * pi*radius;
	}

	//accessors
	double getRadius() { return radius; }
	
	//operators
	double operator+(circle obj) {
		return this->area() + obj.area();
	}
	double operator-(circle obj) {
		return this->area() - obj.area();
	}
	double operator*(circle obj) {
		return this->area() * obj.area();
	}
	double operator/(circle obj) {
		return this->area() / obj.area();
	}

	circle operator+(double d) {
		this->radius += d;
		return *this;
	}

	circle operator -(double d) {
		this->radius -= d;
		return *this;
	}

	bool operator ==(circle obj) {
		return this->radius == obj.radius;
	}

	bool operator ==(double radius) {
		return this->radius == radius;
	}

	bool operator >(circle obj) {
		return this->l() > obj.l();
	}

};

class date {
private:
	int day;
	int month;
	int year;
public:
	date() = default;
	date(int day,int month,int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	int getDay(){ return day; }
	int getMonth() { return month; }
	int getYear() { return year; }
	
	bool is_leap(unsigned int year)
	{
		if (year % 4)
			return false;
		if (year % 100)
			return true;
		return !(year % 400);
	}


	void Get() {
		std::cout << "������� ����: ";
		std:: cin >> day;
		while (day>31 || day == 0)
		{
			std::cout << "������������ ��������" << std::endl;
			std::cout << "������� ����: ";
			std::cin >> day;
		}
		std::cout << "������� �����: ";
		std::cin >> month;
		while (month > 12 || month <= 0)
		{
			std::cout << "������������ ��������" << std::endl;
			std::cout << "������� �����: ";
			std::cin >> month;
		}
		std::cout << "������� ���: ";
		std::cin >> year;
	}

	int inc(int r) // �����������
	{
		day = day + r;
		if (day>31)
		{
			std::cout << "������ ��� ���";
			day = day - r;
		}
		return 0;
	}

	int dec(int r) // �����������
	{
		day = day - r;

		if (day <= 0)
		{
			std::cout << "������ ��� ���";
			day = day + r;
		}
		return 0;

	}

	void print()
	{
		switch (month)
		{
		case 1:
			std::cout << "����:" << day << "\t�����: " << month << "(������)" << "\t���:" << year << std::endl;
			break;
		case 2:
			std::cout << "����:" << day << "\t�����: " << month << "(�������)" << "\t���:" << year << std::endl;
			break;
		case 3:
			std::cout << "����:" << day << "\t�����: " << month << "(����)" << "\t���:" << year << std::endl;
			break;
		case 4:
			std::cout << "����:" << day << "\t�����: " << month << "(������)" << "\t���:" << year << std::endl;
			break;
		case 5:
			std::cout << "����:" << day << "\t�����: " << month << "(���)" << "\t���:" << year << std::endl;
			break;
		case 6:
			std::cout << "����:" << day << "\t�����: " << month << "(����)" << "\t���:" << year << std::endl;
			break;
		case 7:
			std::cout << "����:" << day << "\t�����: " << month << "(����)" << "\t���:" << year << std::endl;
			break;
		case 8:
			std::cout << "����:" << day << "\t�����: " << month << "(������)" << "\t���:" << year << std::endl;
			break;
		case 9:
			std::cout << "����:" << day << "\t�����: " << month << "(��������)" << "\t���:" << year << std::endl;
			break;
		case 10:
			std::cout << "����:" << day << "\t�����: " << month << "(�������)" << "\t���:" << year << std::endl;
			break;
		case 11:
			std::cout << "����:" << day << "\t�����: " << month << "(������)" << "\t���:" << year << std::endl;
			break;
		case 12:
			std::cout << "����:" << day << "\t�����: " << month << "(�������)" << "\t���:" << year << std::endl;;
			break;
		default:
			std::cout << "����� �������� �����";
		}
	}
	bool operator ==(date obj) {
		if (this->day == obj.day&&this->month == obj.month && this->year == obj.year)
			return 1;
		else return 0;
	}
	int operator+(date obj) {
		return this->getDay() + obj.getDay();
	}
	int operator+(date obj) {
		return this->getMonth() + obj.getMonth();
	}
	int operator+(date obj) {
		return this->getYear() + obj.getYear();
	}
	int operator-(date obj) {
		return this->getDay() - obj.getDay();
	}
	int operator-(date obj) {
		return this->getMonth() - obj.getMonth();
	}
	int operator+(date obj) {
		return this->getYear() - obj.getYear();
	}
};
