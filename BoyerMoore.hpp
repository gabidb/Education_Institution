#ifndef BoyerMoore_hpp
#define BoyerMoore_hpp

#include <stdio.h>
#include <string>

using namespace std;

class BoyerMoore{
public:
    
    /*
     *A function to fill the prefix table
     */

    void BMH_CreateBadMatchTable(char *pattern,int patlen,unsigned char *BadMatchTable);
    
    /*
     *A function to perform the Boyer Moore search
     */
    
    bool BMH_Search(string stext, string spattern);
};

#endif /* BoyerMoore_hpp */
