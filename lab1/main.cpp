#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
    string input,output,s,s_sub;
    
    cout << "take me input file name: ";
    getline(cin,input);
    cout << "take me output file name: ";
    getline(cin,output);

    ifstream file_in("D:\\" + input); // файл из которого читаем

    if (!file_in)
        cout << "can't open file for read";
    else
    {
        while(!file_in.eof())
        {
            file_in >> s;
            if (s == "that" || s == "which")
                s_sub += ',' + s + ' ';
            else
                s_sub += s + ' ';
        }

        file_in.close(); // обязательно закрываем файл что бы не повредить его

        ofstream file_out ("D:\\" + output);

        if (!file_out.is_open())
            cout << "can't open file for write";
        else
        {
            file_out << s_sub << endl;
            file_out.close();
        }
        cout << s_sub << endl; // выводим на экран

    }

    return 0;
}

