#include <iostream>
#include <string>
#include <cstring>

using namespace std;
std::string letter;
string wordgiven;
std::string str=wordgiven;
int wordlength,num;
int sum=0;

class Word{
public:
    int getnum();
    int getlen();
};

int Word::getnum()
{
   if (letter == "a" || letter == "A")
    {
        return 1;
    }
   else  if (letter == "b" || letter == "B")
    {
        return 2;
    }
   else  if (letter == "c" || letter == "C")
    {
        return 3;
    }
   else  if (letter == "d" || letter == "D")
    {
        return 4;
    }
   else  if (letter == "e" || letter == "E")
    {
        return 5;
    }
   else  if (letter == "f" || letter == "F")
    {
        return 6;
    }
   else  if (letter == "g" || letter == "G")
    {
        return 7;
    }
   else  if (letter == "h" || letter == "H")
    {
        return 8;
    }
   else  if (letter == "i" || letter == "I")
    {
        return 9;
    }
    else if (letter == "j" || letter == "J")
    {
        return 10;
    }
    else if (letter == "k" || letter == "K")
    {
        return 11;
    }
    else if (letter == "l" || letter == "L")
    {
        return 12;
    }
    else if (letter == "m" || letter == "M")
    {
        return 13;
    }
    else if (letter == "n" || letter == "N")
    {
        return 14;
    }
    else if (letter == "o" || letter == "O")
    {
        return 15;
    }
    else if (letter == "p" || letter == "P")
    {
        return 16;
    }
    else if (letter == "q" || letter == "Q")
    {
        return 17;
    }
    else if (letter == "r" || letter == "R")
    {
        return 18;
    }
    else if (letter == "s" || letter == "S")
    {
        return 19;
    }
    else if (letter == "t" || letter == "T")
    {
        return 20;
    }
    else if (letter == "u" || letter == "U")
    {
        return 21;
    }
    else if (letter == "v" || letter == "V")
    {
        return 22;
    }
    else if (letter == "w" || letter == "W")
    {
        return 23;
    }
    else if (letter == "x" || letter == "X")
    {
        return 24;
    }
    else if (letter == "y" || letter == "Y")
    {
        return 25;
    }
    else if (letter == "z" || letter == "Z")
    {
        return 26;
    }
}

int Word::getlen()
{
    int len,y,sum;
    len=y=0;
    std::string str=wordgiven;
    for(int i=0;i<21;i++)//to include the fullstop, it's 21 instead of 20
    {
        if (str.substr(y,1) != ".")
        {
            len++;
        }
        else if (str.substr(y,1) == ".")
        {
            break;
        }
        y++;
    }
    return len;
}

int main()
{
    Word wordchild;
    int number,vowel,consonant;

    cout<<"\t***************ALPHABETIC ARITHMETIC CALCULATOR***************\n";
    cout<<"\tGUIDELINES:\n\t1. WORD FIRST, THEN LETTERS OF THE WORD\n\t2. USE A FULLSTOP AT THE END OF THE WORD\n\t3. NO SPACES BETWEEN THE LETTERS\n\t4. MAXIMUM NUMBER OF LETTERS IS 20\n\t5. (Q/q) FOR QUIT\n";

    repeat:
    cout<<"\n\nWORD:";
    cin>>wordgiven;

    if (wordgiven == "q" || wordgiven  == "Q")
    {
        goto quit;
    }

    wordlength = wordchild.getlen();
    //cout<<"Number Of Letters: "<<wordlength<<endl;

    /*
    //Simple Sample
    string word1;
    cout<<"WORD: "<<endl;
    cin>>word1;
    std::string str1=word1;
    std::string letter1=str1.substr(0,1);
    cout<<"LETTER: "<<letter1<<endl;
    */

    for(int i=0; i<wordlength; i++)
    {
        cout<<"LETTER: ";
        cin>>letter;
        number=wordchild.getnum();
        if (number == 1 || number == 5 || number == 9 || number == 15 || number == 21)
        {
            vowel+=number;
        }
        else if (number != 1 || number != 5 || number != 9 || number != 15 || number != 21)
        {
            consonant+=number;
        }
        sum+=number;
    }

    //cout<<"Consonants: "<<consonant<<endl;
    //cout<<"Vowels: "<<vowel<<endl;
    cout<<"\nTotal: "<<sum<<endl;

    goto repeat;
    quit:
    return 0;
}
