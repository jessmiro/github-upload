#include <iostream>
#include <string>

using namespace std;

void helloWorld();

int main()
{
    string name; 

    cout << "Enter your name ";
    cin >> name;
    
    helloWorld();
    cout << " and hello " << name << endl;
    return 0;
}