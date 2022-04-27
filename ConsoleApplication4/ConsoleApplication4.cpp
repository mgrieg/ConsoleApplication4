// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class StringOperation

{



public:

    char* s;

    StringOperation(char* l)

    {

        s = l;

    }



    int length(char* l)

    {



        int i;



        for (i = 0; l[i] != '\0'; i++);



        return i;

    }





    bool comparison(char* l)

    {





        int l1 = length(s);

        int l2 = length(l);



        if (l1 == l2)

        {



            for (int i = 0; i < l1; i++)

                if (s[i] != l[i])return false;

            return true;

        }

        return false;

    }



    void concatenation(char* l)

    {


        int l1 = length(s);

        int l2 = length(l);

        char* a = new char[l1 + l2];



        for (int i = 0; i < l1; i++)



            a[i] = s[i];

        int i = l1, j = 0;



        for (; j < l2; j++)

            a[i++] = l[j];

            a[i] = '\0';

        s = a;

    }



    void Reversing()

    {

        int i = 0;

        int j = length(s) - 1;

        while (i < j)

        {

            char c = s[i];

            s[i] = s[j];

            s[j] = c;

            i++; j--;

        }

    }

};



int main()

{

    char* a = new char[20];

    char* b = new char[20];

    char* c = new char[20];

    cout << "Enter string 1: ";

    cin >> a;

    cout << "Enter string 2: ";

    cin >> b;

    cout << "Enter string 3: ";



    cin >> c;

    StringOperation s(a);

    cout << "The comparison of " << a << " with " << b << " is :" << boolalpha << s.comparison(b) << endl;

    cout << "The comparison " << a << " with " << c << " is :" << boolalpha << s.comparison(c) << endl;

    cout << "The concatenation of " << a << " with " << b << " is :";

    s.concatenation(b);

    cout << s.s << endl;

    cout << "Length of string " << s.s << " is :" << s.length(s.s) << endl;

    cout << "Reverse of " << s.s << " is :";

    s.Reversing();

    cout << s.s << endl;

}
