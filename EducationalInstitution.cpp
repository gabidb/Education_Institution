#include "EducationalInstitution.h"

/*
 * Constructor
 */
EducationalInstitution::EducationalInstitution(string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price): name(name),description(description),formOfEd(formOfEd), deadline(deadline), minAge(minAge),maxAge(maxAge), rating(rating), price(price){
    computedAC = -1;
}

/*
 * Copy Constructor
 */
EducationalInstitution::EducationalInstitution(const EducationalInstitution& rhs): name(rhs.name), description(rhs.description), formOfEd(rhs.formOfEd), deadline(rhs.deadline), minAge(rhs.minAge),maxAge(rhs.maxAge), rating(rhs.rating), price(rhs.price){}
EducationalInstitution::~EducationalInstitution() {};

/*
 * Get the name accessor
 *
 *@return string
 */
string EducationalInstitution::getName() const{
    return name;
}

/*
 * Get the description accessor
 *
 *@return string
 */
string EducationalInstitution::getDescription() const{
    return description;
}

/*
 * Get the form of education accessor
 *
 *@return string
 */
string EducationalInstitution::getFormOfEd() const{
    return formOfEd;
}

/*
 * Get the application deadline accessor
 *
 *@return string
 */
string EducationalInstitution::getDeadline() const{
    return deadline;
}

/*
 * Get the rating accessor
 *
 *@return double
 */
double EducationalInstitution::getRating() const{
    return rating;
}

/*
 * Get the min age accessor
 *
 *@return int
 */
int EducationalInstitution::getMinAge() const{
    return minAge;
}

/*
 * Get the max age accessor
 *
 *@return int
 */
int EducationalInstitution::getMaxAge() const{
    return maxAge;
}

/*
 * Get the price accessor
 *
 *@return double
 */
double EducationalInstitution::getPrice() const{
    return price;
}

/*
 *Calculates the annual cost of each type of education
 *User can sort the institutions based on the cost
 *
 *@return double
 */
double EducationalInstitution::AnnualCost(){

    return price;
}

/*
 *A function to check if an institution is suitable
 *according to person's age
 *
 * @return bool
 */
bool EducationalInstitution::canAttend(int personAge){
    if(personAge > minAge && personAge < maxAge){
            return true;
    }else if (personAge > minAge && maxAge == 0){
        cout << "There is no upper limit"<<endl;
        return true;
    }
    return false;
}
void EducationalInstitution::print(){

    cout << endl;
    cout << "Name                          " << name << endl;
    cout << "Description                   " << description << endl;
    cout << "Form of Education             " << formOfEd << endl;
    cout << "Deadline                      " << deadline << endl;
    cout << "Age group                     " << minAge << " - " << maxAge << endl;
    cout << "Rating                        " << rating << endl;
    cout << "Starting price                " << price << endl;
    if(computedAC!=-1)
        cout << "Annual Cost                   " << computedAC << endl;

}

