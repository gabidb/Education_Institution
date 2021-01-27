#include "TraditionalEd.h"

/*
 * Constructor
 */

TraditionalEd::TraditionalEd(EducationalInstitution education, string location, int yearsOfEd, double textbook, string type, int classSize): EducationalInstitution(education), location(location),
yearsOfEd(yearsOfEd), textbook(textbook), type(type), classSize(classSize){}

/*
 * Constructor
 */

TraditionalEd::TraditionalEd(string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price, string location, int yearsOfEd, double textbook, string type, int classSize): location(location), yearsOfEd(yearsOfEd), textbook(textbook), type(type), classSize(classSize), EducationalInstitution(name, description, formOfEd, deadline, minAge, maxAge, rating, price){}

/*
 * Copy Constructor
 */

TraditionalEd::TraditionalEd(const TraditionalEd& rhs): location(rhs.location), yearsOfEd(rhs.yearsOfEd), textbook(rhs.textbook), type(rhs.type), classSize(rhs.classSize), EducationalInstitution(rhs.getName(), rhs.getDescription(), rhs.getFormOfEd(), rhs.getDeadline(), rhs.getMinAge(),rhs.getMaxAge(), rhs.getRating(), rhs.getPrice()){}
                                                                                                                                                                                                   
/*
 *Get the location accessor
 *
 *@return string
 */
string TraditionalEd::getLocation() const{
    return location;
}

/*
 *Get the class size accessor
 *
 *@return int
 */
int TraditionalEd::getClassSize() const{
    return classSize;
}

/*
 *Get the years of studying accessor
 *
 *@return int
 */
int TraditionalEd::getYearsOfEd() const{
    return yearsOfEd;
}

/*
 *Set the years of studying accessor
 *
 *@param int
 */
void TraditionalEd::setYearsOfEd(int years){
    yearsOfEd = years;
}

/*
 *Get the textbook accessor
 *
 *@return double
 */
double TraditionalEd::getTextbook() const{
    return textbook;
}

/*
 *Get the type accessor
 *
 *@return string
 */
string TraditionalEd::getType() const{
    return type;
}

double TraditionalEd::AnnualCost(long long int cost){
    
    if(type == "private")
        cost += textbook;
    else {
        if(textbook != 0)
            cost += (getPrice() + textbook);
        else
            cost += getPrice();
    }
    return cost;
}

void TraditionalEd::print(){
    
    EducationalInstitution::print();
    
    cout <<"Location:                     " << location << endl;
    cout <<"Years of education:           " << yearsOfEd << endl;
    cout <<"Type of institution:          " << type << endl;
    cout <<"Class size:                   " << classSize <<endl;
}
