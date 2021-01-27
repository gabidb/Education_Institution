#include "University.h"

/*
 * Constructor
 */
University::University (TraditionalEd traditionalEd, string major, string degree,double insurance, string activity, string mealPlan, string housing, string amentities): TraditionalEd(traditionalEd), major(major), degree(degree),insurance(insurance), activity(activity), mealPlan(mealPlan), housing(housing), amentities(amentities){}

/*
 * Constructor
 */
University::University(string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price, string location, int yearsOfEd, double textbook, string type, int classSize, string major, string degree,double insurance, string activity, string mealPlan, string housing, string amentities): mealPlan(mealPlan), major(major), degree(degree),insurance(insurance), activity(activity), housing(housing), amentities(amentities), TraditionalEd(name, description, formOfEd, deadline, minAge,maxAge, rating, price, location, yearsOfEd, textbook, type, classSize){}

/*
 * Copy Constructor
 */
University::University (const University& rhs): major(rhs.major), degree(rhs.degree),insurance(rhs.insurance), activity(rhs.activity), mealPlan(rhs.mealPlan), housing(rhs.housing), amentities(rhs.amentities), TraditionalEd(rhs.getName(), rhs.getDescription(), rhs.getFormOfEd(), rhs.getDeadline(), rhs.getMinAge(),rhs.getMaxAge(), rhs.getRating(), rhs.getPrice(), rhs.getLocation(), rhs.getYearsOfEd(), rhs.getTextbook(), rhs.getType(), rhs.getClassSize()){}
/*
 *Get the major accessor
 *
 *@return string
 */
string University::getMajor() const{
    return major;
}

/*
 *Get the degree accessor
 *
 *@return string
 */
string University::getDegree() const{
    return degree;
}

/*
 *Get the amentities accessor
 *
 *@return string
 */
string University::getAmentities() const{
    return amentities;
}

/*
 *Get the insurance fee accessor
 *
 *@return double
 */
double University::getInsurance() const{
    return insurance;
}

/*
 *Get the activity fee accessor
 *
 *@return string
 */
string University::getActivity() const{
    return activity;
}

/*
 *Get the meal plan fee accessor
 *
 *@return string
 */
string University::getMealPlan() const{
    return mealPlan;
}

/*
 *Get the housing fee accessor
 *
 *@return string
 */
string University::getHousing() const{
    return housing;
}

/*
 *Calculates the annual cost of each type of education
 *User can sort the institutions based on the cost
 *
 *@return double
 */
double University::AnnualCost(long long int cost = 0){
    double mealCost = 300; //cost per semester
    double activityCost; //cost of activities per semester
    double housingCost = 0; //cost of housing per semester
    int semesters = 2;
    
    if((getYearsOfEd())/ 2 > 3)
        mealCost = mealCost - mealCost* 0.15;
    if (activity == "clubs")
        activityCost = 150;
    else if (activity == "sport")
        activityCost = 100;
    else
        activityCost = 50;
    
    if(housing == "available")
        housingCost = 850;
    
    cost = semesters * (mealCost + activityCost + housingCost + insurance);
    
    return TraditionalEd::AnnualCost(cost);
}

void University::print(){
    
    TraditionalEd::print();
    
    cout << "Majors                        " << major << endl;
    cout << "Degree/s                      " << degree << endl;
    cout << "Amentities                    " << amentities << endl;
    cout << "Activities                    " << activity << endl;
    cout << "Meal plan                     " << mealPlan << endl;
    cout << "Housing                       " << housing << endl;
    
}

