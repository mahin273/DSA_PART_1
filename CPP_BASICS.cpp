#include<iostream>
using namespace std;

int main(){
    //How to take input and ouput in C++
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The number is: "<<num<<endl;

    //How to take multiple input and ouput in C
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1 >> num2;
    cout<<"The numbers are: "<<num1<<" and "<<num2<<endl;

    //how to take string input in C++
    string name;
    getline(cin,name);
    cout<<"Your name is: "<<name<<endl;
    //how to concatenate string in C++
string str1 = "fam";
string str2 = "ily";
cout<<str1+str2<<endl;
    return 0;
//How to find steing length in C++
string strl = "Hello";
cout<<strl.length()<<endl;
//how to find string index in C++
string strindex = "Hello";
int index = strindex.find("llo");
cout<<index<<endl;
//how to access a specic character in c++
string strchar = "Hello";
char ch = strchar[0];
cout<<ch<<endl;
//how to change a specific character in c++
string strchange = "Hello";
strchange[0] = 'J';
cout<<strchange<<endl;

//convert string into upeer case in c++
string strupper = "Hello";
for ( int i = 0; i < strupper.length(); i++)
{
 strupper[i] = toupper(strupper[i]);
}
cout<<strupper<<endl;
return 0;

//convert string into lower case in c++
string strlower = "Hello";
for ( int i = 0; i < strupper.length(); i++)
{
 strlower[i] = tolower(strlower[i]);
}
cout<<strupper<<endl;
return 0;
 //How to extract substring in c++
 string stre = "I Love Bnagladesh";
 string substr = stre.substr(2,4); //start from 2 and take 4 characters
 cout<<substr<<endl;


 //How to delacre array in c++
 //>------>datatype arrayname[size];
    int marks[4] = {23,45,56,89};
    for (int i = 0; i < 4; i++)
    {
        cout<<"The marks of student "<<i+1<<" is "<<marks[i]<<endl;
    }
 
 

}