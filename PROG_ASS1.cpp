#include <iostream>
using namespace std;

int main()
{
string E;
string F;
string G;;
float a, b, c;
float Cats;
int catto;

char answer[1];
    cout << ("1. Complete the missing letters . A B C D E F G H _ J K?") <<endl;
    cout << "Your answer is:";
    cin>> answer [0];
    if (answer[0] == 'I'){
    cout<< "Your answer is Correct"<< endl;
    
}
   else{
    cout << "Your answer is Wrong"<< endl;
    }
    cout << "2. What is the opposite of PM in the time clock?"<<endl;
    cout <<" a. am \t b. sm \n c. cm \t d. us"<<endl;
    cout << "Your answer is:";
    cin>> answer [0];
    if (answer[0] == 'a'){
    cout<< "Your answer is Correct"<< endl;
    
}
   else{
    cout << "Your answer is Wrong"<< endl;
    }
    cout <<"3. What do you call two men making love?"<<endl;
    cout <<"a. boy \t b. girl \n c. lesbian\t d. gay"<<endl;
    cout << "Your answer is:";
    cin>> answer [0];
    if (answer[0] == 'd'){
    cout<<"YOU ARE GAY!!! "<< endl;
    
}
   else{
    cout << "Your answer is Wrong"<< endl;
    }

cout << ("give as many cats as you can in 3 and i will make sure if you are a cat king or a doggo lovur \n");
cin >> a;
cout << "ang onti naman \n";
cin >> b;
cout << "r u really a catto king? \n ";
cin >> c;
cout << "heh \n \n";

Cats = a + b + c;
cout << (" i will now take half of your cattos >:3");
catto = Cats/2;

cout << "\n \n Now u gay person, ";

if (catto >=10000000) {
cout << "your cats are only  " << catto << ". that means, you are the cat king!\n\n thank you 4 playin and thank u for the half of the cattos <3";
} else 
cout << "your cats are only  " << catto << ". that means, you are a not a cat king :<!\n\n thank you 4 playin and thank u for the half of the cattos <3";

return 0;
}
