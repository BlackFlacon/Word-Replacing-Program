#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;



bool gg(char x,char y, char z)
{
    if(x == 't' && y == 'h' && z == 'e')
        return true;
    else
        return false;
}

int main()
{
    /*string answer;
    cout<<"\n\n\n\n\n\n\n\n\n\nWelcome to my word replacememt program\n\n";
    cout<<"Enter Your Text: ";
    cin>>answer;
    
    char tex[answer.length()+1];
    strcpy(tex, answer.c_str());*/
    
    /*char tex[256];
    
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nWelcome to word replacement program\n\n\nEnter Your Text: ";
    cin.getline(tex,256);
    */
    string input_string;
    cout<<"Enter the text: ";
    getline(cin, input_string);
    
    char tex[input_string.length()+1];
    strcpy(tex, input_string.c_str());
    
    for(int i = 0; i < input_string.length()+1; i++)
    {
        bool xd;
        xd = gg(tex[i], tex[i+1], tex[i+2]);
        if(xd)
        {
            tex[i] = 'L';
            tex[i+1] = 'O';
            tex[i+2] = 'L';
        }
    }
    
    for(int i = 0; i <input_string.length()+1; i++)
        cout<<tex[i];
    
}

