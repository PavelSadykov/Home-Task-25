//
//  main.cpp
//  C++ДЗ 25
//
//  Created by Павел on 29.09.2022.
//

#include <iostream>
#include <string>
using namespace std;

//Задача 1
bool func(string word){
    int len = word.size();
    for(int i=0; i<len/2;i++){
        if(word[i]!=word[len-i-1]){ //проверка на палиндромность
            return false;
        }
    }
    return true;
}
void to_lower (string &str) {     // убирается регистрозависимость
    for(int i=0; i < str.length();i++)
        str[i] = tolower(str[i]);
}

//Задача 3.
int my_sym(string &str){
int n=0;
    for(int i=0; i < str.size() ;i++){
        if(str[i]=='.' || str[i]==',' || str[i]=='!'||str[i]==' '||str[i]=='?')
           n++;
    }
return n;
}
//Задача 4.

string func1(string &str, char sym){
    int count=0;
    string m;
    for(int i=0; i < str.size() ;i++){
        if(str[i]==sym){
            count++;
            break;
        }
    }
     if(count>0){
        m=str.substr (str.rfind (sym));
         return m;
     }else
         m="     ";
    return m;
}


int main(int argc, const char * argv[]) {
    
    cout<<"Задача 1. ";
  
    string str="Hello World !";
    cout<<str<<endl;
    char sym;
    cout<<"Введите символьную переменную : ";
    cin>>sym;
    string res;
    for (int i = 0; i < str.length(); i++)
         if(str[i] == sym)
    res += sym;
    cout<<res<<endl;
  
    cout<<"Задача 2.\nВведите слово: ";
    string str1;
    cin>>str1;
    to_lower(str1);
    cout<<str1<<endl;
    if(func(str1))
       cout<<"Введенное слово палиндром"<<endl;
     else
       cout<<"Введенное слово не палиндром"<<endl;
     
    
    cout<<"\nЗадача 3.\n";
   string str2="Hello , word! .?";
   cout<<str2<<endl;
   cout<<"Количество знаков  в строке : ";
   cout<<my_sym(str2)<<endl;
    
    

    cout<<"\nЗадача 4.\n";
    string m;
    string str3 = "Hello world!";
    cout<<str<<endl;
    char sym1;
    cout<<"Введите символ : ";
    cin>> sym;
    cout<<"Вывод: ";
    cout<<func1(str3, sym)<<endl;
   
       
   
    
    return 0;
}
