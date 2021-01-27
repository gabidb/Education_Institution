#include "BoyerMoore.hpp"
#include <vector>
#pragma warning(disable : 4996)


void BoyerMoore::BMH_CreateBadMatchTable(char *pattern,int patlen,unsigned char *BadMatchTable)
{
    for(int i = 0; i < 256; i++)
        BadMatchTable[i] =  patlen;
    
    for(int i = 0; i < patlen - 1; i++)
        BadMatchTable[pattern[i]] = patlen - 1 - i;
}


bool BoyerMoore::BMH_Search(string stext, string spattern)
{
    
    const int TextSize = (int) stext.length();
    char *textAr = new char[TextSize + 1];
    strcpy(textAr , stext.c_str()); //converts the string into an array of chars
    char *text = textAr; //pointer to the first element of the array
   
    const int patlen = (int) spattern.length();
    char *patternAr = new char[patlen + 1];
    strcpy(patternAr, spattern.c_str());
    char *pattern = patternAr;
 
    
    unsigned char BadMatchTable[256]; //an array of type char

    BMH_CreateBadMatchTable(pattern,patlen,BadMatchTable);
    

    int pattern_length = patlen;
    int text_length = TextSize;
    int scan_pos = 0;
    int pat_pos = pattern_length - 1;
    
    while(text_length >= pattern_length)
    {
        pat_pos = pattern_length - 1;
        for(scan_pos = pat_pos; (unsigned char)text[scan_pos] == (unsigned char)pattern[pat_pos] ; scan_pos--,pat_pos--)
        {
            if(pat_pos == 0)
            {
                return true;
            }
        }
        text_length -= BadMatchTable[(unsigned char)text[scan_pos]];
        text += BadMatchTable[(unsigned char)text[scan_pos]];
    }

    delete[]textAr;
    delete[]patternAr;
    
    return false;
}
