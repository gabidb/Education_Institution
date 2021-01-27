#include "OnlineCourse.h"

/*
 * Constructor
 */
OnlineCourse::OnlineCourse(ELearning eLearning, bool certificate, string resources): ELearning(eLearning), certificate(certificate), resources(resources){}

/*
 * Constructor
 */
OnlineCourse::OnlineCourse(string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price, string level, bool personalized, double duration,double levelOfInteraction, bool certificate, string resources): ELearning(name, description, formOfEd, deadline, minAge,maxAge, rating, price, level, personalized, duration, levelOfInteraction), certificate(certificate), resources(resources){}

/*
 * Copy Constructor
 */
OnlineCourse::OnlineCourse(const OnlineCourse& rhs): certificate(rhs.certificate), resources(rhs.resources), ELearning(rhs.getName(), rhs.getDescription(), rhs.getFormOfEd(), rhs.getDeadline(), rhs.getMinAge(),rhs.getMaxAge(), rhs.getRating(), rhs.getPrice(), rhs.getLevel(), rhs.getPersonalized(), rhs.getDuration(), rhs.getLevelOfInteraction()){}

/*
 *Get the certificate accessor
 *
 *@return bool
 */
bool OnlineCourse::getCertificate() const{
    return certificate;
}

/*
 *Get the resources accessor
 *
 *@return string
 */
string OnlineCourse::getResources() const{
    return resources;
}

/*
 *Calculates the annual cost of each type of education
 *User can sort the institutions based on the cost
 *
 *@return double
 */

double OnlineCourse::AnnualCost(long long int cost = 0){
    double certificateCost = 0;
    double resourceFee = 0;
    
    if(certificate){
        certificateCost = 199.99;
    }
    
    if(resources == "textbook")
        resourceFee = 49.50;
    else if (resources == "videos")
        resourceFee = 10.99;
    else if (resources == "handouts")
        resourceFee = 25.99;
    
    cost = resourceFee + certificateCost;
    
    return ELearning::AnnualCost(cost);
}

void OnlineCourse::print(){
    
    ELearning::print();
    
    cout << "Resources:                     " << resources << endl;
    
}
