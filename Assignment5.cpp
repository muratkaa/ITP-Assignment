//Murat Karadeniz's Assignment 5 -------- student no : 1306200011  --------- date: 07.12.2021


#include <iostream>
using namespace std;
int main() {

	int birthdate,ageday,agemonth,ageyear,day,month,year,bday,bmonth,byear;
	cout << "Please enter today's date : ";
	cin >> day >> month >> year;
	cout << "Please enter your birthday : ";
	cin >>bday >> bmonth >> byear;
	
	if (bday > day && bmonth > month) {
	month = month - 1;
	switch (bmonth) {
	case 1:
		day = day + 31;
		break;
	case 2:
		day = day + 28;
		break;
	case 3:
		day = day + 31;
		break;
	case 04:
		day = day + 30;
		break;
	case 5:
		day = day + 31;
		break;
	case 6:
		day = day + 30;
		break;
	case 7:
		day = day + 31;
		break;
	case 8:
		day = day + 31;
		break;
	case 9:
		day = day + 30;
		break;
	case 10:
		day = day + 31;
		break;
	case 11:
		day = day + 30;
		break;
	case 12:
		day = day + 31;
		break;
	}
	year = year - 1;
	month = month + 12;
	ageday = day - bday;
	agemonth = month - bmonth;
	ageyear = year - byear;
	cout << "Your age is " << ageday << " days " << agemonth << " months " << ageyear << " years.";


	}
	else if (bmonth > month) {
		year = year - 1;
		month = month + 12;
		ageday = day - bday;
		agemonth = month - bmonth;
		ageyear = year - byear;
		cout <<"Your age is "<< ageday << " days " << agemonth << " months " << ageyear<<" years.";
	}
	else if (bday > day) {
		month = month - 1;
		switch (bmonth) {
		case 1:
			day = day + 31;
			break;
		case 2:
			day = day + 28;
			break;
		case 3:
			day = day + 31;
			break;
		case 4:
			day = day + 30;
			break;
		case 5:
			day = day + 31;
			break;
		case 6:
			day = day + 30;
			break;
		case 7:
			day = day + 31;
			break;
		case 8:
			day = day + 31;
			break;
		case 9:
			day = day + 30;
			break;
		case 10:
			day = day + 31;
			break;
		case 11:
			day = day + 30;
			break;
		case 12:
			day = day + 31;
			break;
		}
		ageday = day - bday;
		agemonth = month - bmonth;
		ageyear = year - byear;
		cout << "Your age is " << ageday << " days " << agemonth << " months " << ageyear << " years.";
	}
	
	else {
		ageday = day - bday;
		agemonth = month - bmonth;
		ageyear = year - byear;
		cout << "Your age is " << ageday << " days " << agemonth << " months " << ageyear << " years.";
	}
	cout << endl;

	return 0;


}