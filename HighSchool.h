#ifndef HighSchool_h
#define HighSchool_h
#include "TraditionalEd.h"
#include <string>

using namespace std;

class HighSchool: public TraditionalEd {
public:
    /*
     * Constructors
     */
    HighSchool(const HighSchool& rhs);
    HighSchool(TraditionalEd traditionalEd, string concentration, string electives, string language, string tripLoc, double transport, double summerProgram);
    HighSchool(string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price, string location, int yearsOfEd, double textbook, string type, int classSize, string concentration, string electives, string language, string tripLoc, double transport, double summerProgram);
    
    /*
     *Get the concentration accessor
     *
     *@return string
     */
    string getConcentration() const;
    
    /*
     *Get the elective classes accessor
     *
     *@return string
     */
    string getElectives() const;
    
    /*
     *Get the language accessor
     *
     *@return string
     */
    string getLanguage() const;
    
    /*
     *Get the trip location accessor
     *
     *@return string
     */
    string getTripLoc() const;
    
    
    /*
     *Get the transport cost accessor
     *
     *@return double
     */
    double getTransport() const;
    
    /*
     *Get the summer programs cost accessor
     *
     *@return double
     */
    double getSummerProgram() const;
    
    /*
     *Calculates the annual cost of each type of education
     *User can sort the institutions based on the cost
     *
     *@return double
     */
    
    double AnnualCost(long long int cost);
    
    /*
     *
     *Function to display all the properties
     *
     */
    void print();
    
private:
    string concentration; //concentration - mat, cos, eco, language
    string electives; //history, science, maths
    string language; //language - spanish, russian, french
    string tripLoc; //trip location
    double transport; //cost of transport (school bus)
    double summerProgram; //price of summer program
};

#endif /* HighSchool_h */
