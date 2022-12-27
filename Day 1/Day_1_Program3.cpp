// check whether an alphabet entered by the user is a vowel or a consonant.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character" << " ";
    cin >> ch;
    char lowercase = (ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u');
    char uppercase = (ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U');
    if(lowercase || uppercase)
       cout << "Entered character is a vowel" << endl;
    else
      cout << "Entered charcter is a consonant" << endl;   
}