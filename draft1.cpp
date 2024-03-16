#include <iostream>
using namespace std;

// main() is where program execution begins.
int main() {
   cout<<"please send us your name";
   string name;
   cout<<"What is your name?";
   cin>>name;
   cout<<"Hi"+name+ "\n";
   cout<<"What 4 types of husbands would you want to have financially\n";
   string husband1, husband2, husband3, husband4;
   cout<<"Husband1 \n";
   cin>>husband1;
   cout<<"\n";
   cout<<"Husband2 \n";
   cin>>husband2;
   cout<<"\n";
   cout<<"Husband3 \n";
   cin>>husband3;
   cout<<"\n";
   cout<<"Husband4 \n";
   cin>>husband4;
   cout<<"\n";
   cout<<"Options\n";
   cout<<husband1+husband2+husband3+husband4;

   return 0;
}