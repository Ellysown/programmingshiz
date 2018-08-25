// John Ellyson Biglang-Awa Santos's program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define MAX_LENGTH 100

int main(){



cout << "henlo, it me John Ellyson and dis is my random useless programs :D \n \n please fill out your name, age, birthdate, grade and section\n\n";

{

char name [MAX_LENGTH]={0};
	int age;
	char birth [MAX_LENGTH]={0};
	int grade;
	char section [MAX_LENGTH]={0};
	
	cout<<"Kimi no nawa:\n";
	cin.getline(name,MAX_LENGTH);
	cout<<"Age muh: \n";
	cin>>age;
	if(age>25&&age<50){
		cout << "ang tandaaaa\n";}
	cout << "What year were u born in dis pathetic world?\n";
	cin>> birth;
	cout << "What grade are you in?\n";
	cin>> grade;
	cout << "Also the section\n";
	cin>>section;

	
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Birthdate: "<<birth<<endl;
	cout<<"Grade and section: "<<grade <<"-"<<section<<endl;
}


int age;

cout<<"How old are you? \n";
cin>>age;

if(age>1&&age<15)
{
cout<<"Bata kah\n now lets divide :D\n which operator would you like? +, -, *, or /? \n";}

if(age>15&&age<19){
	cout<<"Binata o kaya dalaga ka palang\n now lets divide :D\nwhich operator would you like?+, -, *, or /? \n";
}
if(age>19&&age<30){
	cout<<"Independent ka na dapat\n now lets divide :D\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>30&&age<45){
cout<<"Tumatanda ka nah\n now lets divide :D\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>45&&age<65){
	cout<<"kuha ka na ng senior citizen card\n now lets divide :D\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>65&&age<85){

cout<<"Sana ganyan din katagal relasyon ko\n now lets divide :D\nwhich operator would you like? +, -, *, or /? \n";
}

if(age>85&&age<100){
	cout<<"Woah\n now lets divide :D\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>100&&age<400)
{cout<<"Uy sige pagtripan mu\n now lets divide :D\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>1&&age<-1){

cout << "Tao ka ba? \n now lets divide :D\nwhich operator would you like? +, -, *, or /? \n";}


char ops;
    int x, y;

    cin >> ops;

    cout << "Gimme 2 operands ahehe: ";
    cin >> x >> x;

    switch(ops)
    {
        case '+':
            cout << x+y;
            break;

        case '-':
            cout << x-y;
            break;

        case '*':
            cout << x*y;
            break;

        case '/':
            cout << "The answer is "<<x/y<<endl;
            cout << "Remainder: "<<x%y;
            break;

        default:
            cout << "Errorrrrrrr! operator is not correct :<";
            break;
    }

cout << "\n\n Thank you for using :)\n";








return 0;
}

