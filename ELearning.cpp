#include "ELearning.h"

/*
 * Constructor
 */
ELearning::ELearning(EducationalInstitution education, string level, bool personalized, double duration,double levelOfInteraction): EducationalInstitution(education), level(level), personalized(personalized), duration(duration), levelOfInteraction(levelOfInteraction){}

/*
 * Constructor
 */
ELearning::ELearning(string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price, string level, bool personalized, double duration,double levelOfInteraction):EducationalInstitution(name, description, formOfEd, deadline, minAge,maxAge, rating, price), level(level), personalized(personalized), duration(duration), levelOfInteraction(levelOfInteraction){}

/*
 * Copy Constructor
 */
ELearning::ELearning (const ELearning& rhs): level(rhs.level), personalized(rhs.personalized), duration(rhs.duration), levelOfInteraction(rhs.levelOfInteraction), EducationalInstitution(rhs.getName(), rhs.getDescription(), rhs.getFormOfEd(), rhs.getDeadline(), rhs.getMinAge(),rhs.getMaxAge(), rhs.getRating(), rhs.getPrice()){}

/*
 *Get the level accessor
 *
 *@return string
 */
string ELearning::getLevel() const{
    return level;
}

/*
 *Get personalized accessor
 *
 *@return bool
 */
bool ELearning::getPersonalized() const{
    return personalized;
}

/*
 *Get the duration accessor
 *
 *@return double
 */
double ELearning::getDuration() const{
    return duration;
}

/*
 *Get the level of interaction accessor
 *
 *@return double
 */
double ELearning::getLevelOfInteraction() const{
    return levelOfInteraction;
}

/*
 *Calculates the annual cost of each type of education
 *User can sort the institutions based on the cost
 *
 *
 *@return double
 */
double ELearning::AnnualCost(long long int cost){
    if(personalized){
        cost += getPrice() * 1.5; 
    }
    else
        cost += getPrice();
    return cost;
}

void ELearning::print(){
    
    EducationalInstitution:: print();
    
    cout << "Designed for:                 " << level << endl;
    cout << "Duration:                     " << duration << endl;
    cout << "Level of interaction:         " << levelOfInteraction << endl;
    
}

