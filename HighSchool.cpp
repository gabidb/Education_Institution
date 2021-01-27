#include "HighSchool.h"

/*
 * Constructor
 */
HighSchool::HighSchool(TraditionalEd traditionalEd, string concentration, string electives, string language,string tripLoc, double transport ,double summerProgram): concentration(concentration), electives(electives), language(language), transport(transport), summerProgram(summerProgram), TraditionalEd(traditionalEd){}

/*
 * Constructor
 */
HighSchool::HighSchool(string name, string description, string formOfEd, string deadline, int minAge, int maxAge, double rating, double price, string location, int yearsOfEd, double textbook, string type, int classSize, string concentration, string electives, string language, string tripLoc, double transport, double summerProgram):TraditionalEd(name, description, formOfEd, deadline, minAge,maxAge, rating, price, location, yearsOfEd, textbook, type, classSize), concentration(concentration), electives(electives), language(language), tripLoc(tripLoc), transport(transport), summerProgram(summerProgram){}

/*
 * Copy Constructor
 */
HighSchool::HighSchool(const HighSchool& rhs):concentration(rhs.concentration), language(rhs.language),electives(rhs.electives),tripLoc(rhs.tripLoc), transport(rhs.transport), summerProgram(rhs.summerProgram), TraditionalEd(rhs.getName(), rhs.getDescription(), rhs.getFormOfEd(), rhs.getDeadline(), rhs.getMinAge(),rhs.getMaxAge(), rhs.getRating(), rhs.getPrice(), rhs.getLocation(), rhs.getYearsOfEd(), rhs.getTextbook(), rhs.getType(), rhs.getClassSize()){}

/*
 *Get the concentration accessor
 *
 *@return string
 */
string HighSchool::getConcentration() const{
    return concentration;
}

/*
 *Get the elective classes accessor
 *
 *@return string
 */
string HighSchool::getElectives() const{
    return electives;
}

/*
 *Get the language accessor
 *
 *@return string
 */
string HighSchool::getLanguage() const{
    return language;
}

/*
 *Get the trip location accessor
 *
 *@return string
 */
string HighSchool::getTripLoc() const{
    return tripLoc;
}


/*
 *Get the summer programs cost accessor
 *
 *@return double
 */
double HighSchool::getTransport() const{
    return transport;
}

/*
 *Get the summer programs cost accessor
 *
 *@return double
 */
double HighSchool::getSummerProgram() const{
    return summerProgram;
}

double HighSchool::AnnualCost(long long int cost = 0){
    
    double trips; //cost of trips
    
    // assuming trip happens once in the duration of the whole
    //education
    if(tripLoc == "Greece")
        trips = 150;
    else if (tripLoc == "Turkey")
        trips = 135;
    else if (tripLoc == "Serbia")
        trips = 200;
    else if (tripLoc == "Germany")
        trips = 500;
    else
        trips = 50; // assuming the trip is to a nearby place
    
    // There is a summer program every summer
    summerProgram *= getYearsOfEd();
    
    //transport is paid monthly
    //assuming one school year is 9 months
    
    cost = trips + summerProgram + transport * 9;
    
    return TraditionalEd::AnnualCost(cost);
}

void HighSchool::print(){
    
    TraditionalEd::print();
    
    cout <<"Concentration:                " << concentration << endl;
    cout <<"Elective subjects:            " << electives << endl;
    cout <<"Elective languages:           "<< language << endl;
    cout <<"Trip destination:             " << tripLoc << endl;
    cout <<"Transport is included in the annual price!" << endl;
    cout <<"Summer program available      " << endl;
    
}

