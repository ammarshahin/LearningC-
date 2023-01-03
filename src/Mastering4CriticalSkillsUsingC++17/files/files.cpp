#include <iostream>
#include <stdint-gcc.h>
#include <bits/stdc++.h>

using namespace std;

void read_stream()
{
    // Read stream from file
    ifstream fin("src/Mastering4CriticalSkillsUsingC++17/files/read_file.txt");
    if (fin.fail())
    {
        cout << "Error opening the file" << endl;
    }
    else
    {
        int x, y;
        fin >> x >> y;
        cout << x << " " << y << endl;
    }
    fin.close();
}

void write_stream()
{
    // Write to a file
    ofstream fout("src/Mastering4CriticalSkillsUsingC++17/files/write_file.txt");
    if (fout.fail())
    {
        cout << "Error opening the file" << endl;
    }
    else
    {
        int x = 5, y = 7;
        fout << x << " " << y << endl;
    }
    fout.close();
}

void readAndWriteToFile()
{
    // Read and write at the same time
    auto status = ios::in | ios::out | ios::app;
    fstream file_handler("src/Mastering4CriticalSkillsUsingC++17/files/file.txt", status);

    if (file_handler.fail())
    {
        cout << "Error opening the file" << endl;
    }
    else
    {
        int x, y;
        file_handler >> x >> y;
        x++;
        y++;
        cout << x << " " << y << endl;
        file_handler << x << " " << y << endl;   //! this didn't work
    }
    file_handler.close();
}

void string_stream()
{
    //! String stream
    //! Deconstructed a stream to it's individual "spaced words"
    string str = "Ammar 27 Valeo";
    istringstream iss(str);   // In String Stream
    string name, company;
    int age;
    iss >> name >> age >> company;
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "company : " << company << endl;
}

int main(int argc, char const *argv[])
{
    read_stream();
    write_stream();
    readAndWriteToFile();
    string_stream();
    return 0;
}