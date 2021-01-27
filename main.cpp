#include <iostream>
#include <vector>
#include "EducationalInstitution.h"
#include "QuickSort.hpp"
#include "DataStore.hpp"
#include "BoyerMoore.hpp"
#include "TraditionalEd.h"
#include "ELearning.h"
#include "HighSchool.h"
#include "University.h"
#include "OnlineCourse.h"
#include "Application.h"
#include <algorithm>
using namespace std;
string sortBy = "name";

/*
 *Function to compare objects
 *
 */
bool compareEdInst(EducationalInstitution* i1, EducationalInstitution* i2)
{
    if(sortBy == "name"){
        return (i1->getName() < i2->getName());
    }else if(sortBy == "price"){
        return (i1->getPrice() < i2->getPrice());
    }else if(sortBy == "rating"){
        return (i1->getRating() < i2->getRating());
    }else if(sortBy == "annual cost"){
        return (i1->computedAC < i2->computedAC);
    }
    // BY DEFAULT SORT BY NAME
    return (i1->getName() < i2->getName());
}

int main(int argc, const char * argv[]) {
    
    vector<EducationalInstitution*> vi; //creating vector of pointers
    DataStore d;
    d.getData(vi); //load data
    int choice;
    do{
        //Main menu
        cout<<"********************************"<<endl;
        cout<<"           Main Menu            "<<endl;
        cout<<"********************************"<<endl;
        cout<<"1. View all Educational Instituitions"<< endl;
        cout<<"2. Search"<<endl;
        cout<<"3. Sort"<<endl;
        cout<<"4. Get annual cost"<< endl;
        cout<<"5. Exit"<<endl;
        cout<<"********************************"<<endl;
        cout<<"Pick any of the above options:"<<endl;
        cin>> choice;
        cout<<endl;
        switch (choice){
            case 1 :
                for(auto i:vi){
                    //dynamical casting to find the instances of the
                    //derived clases
                    if (University* c = dynamic_cast<University*>(i))
                    {
                        c->print();
                    }else if (Application* c = dynamic_cast<Application*>(i))
                    {
                        c->print();
                        
                    }else if (OnlineCourse* c = dynamic_cast<OnlineCourse*>(i))
                    {
                        c->print();
                        
                    }else if (HighSchool* c = dynamic_cast<HighSchool*>(i))
                    {
                        c->print();
                        
                    }else if (ELearning* c = dynamic_cast<ELearning*>(i))
                    {
                    }else if (TraditionalEd* c = dynamic_cast<TraditionalEd*>(i))
                    {
                        c->print();
                        
                    }else
                    {
                        i->print();
                        
                    }
        
                }
                break;
            case 2 :
                // Search menu
                cout<<"********************************"<<endl;
                cout<<"           Search Menu          "<<endl;
                cout<<"********************************"<<endl;
                cout << "1. Search by name" << endl;
                cout << "2. Search by age" << endl;
                cout << "3. Cancel"<<endl;
                cout << "********************************" << endl;
                cout << "Pick any of the above options:";
                cin >> choice;
                cout << endl;
                
                if(choice == 1){
                    
                    cout << "Search: ";
                    string pattern;
                    cin >> pattern;
                    BoyerMoore bm;
                    bool match = false;
                    for(auto i:vi){
                        if(bm.BMH_Search(i->getName(), pattern)){
                            i->print();
                            match=true;
                        }
                    }
                    if (!match){
                        cout << "There are no matches " << endl;
                    }
                }else if(choice ==2){
                    int age;
                    cout << "Age: ";
                    cin >> age;
                    for(auto i:vi){
                        if(i->canAttend(age)){
                                i->print();
                        }
                    }
                }
                break;
            case 3 :
                //Sort menu
                cout<<"********************************"<<endl;
                cout<<"           Sort Menu          "<<endl;
                cout<<"********************************"<<endl;
                cout << "1. Sort by name" << endl;
                cout << "2. Sort by starting price" << endl;
                cout << "3. Sort by rating" << endl;
                cout << "4. Sort by annual cost"<<endl;
                cout << "5. Cancel"<<endl;
                cout << "********************************" << endl;
                cout << "Pick any of the above options:";
                cin >> choice;
                switch(choice){
                    case 1:
                        sortBy = "name"; break;
                    case 2:
                        sortBy = "price"; break;
                    case 3:
                        sortBy = "rating"; break;
                    case 4:
                        sortBy = "annual cost";
                        for(auto &i:vi){
                            
                            int ac=0;
                            if (University* c = dynamic_cast<University*>(i))
                            {
                                ac=c->AnnualCost(0);
                            }else if (Application* c = dynamic_cast<Application*>(i))
                            {
                                ac=c->AnnualCost(0);

                            }else if (OnlineCourse* c = dynamic_cast<OnlineCourse*>(i))
                            {
                                ac=c->AnnualCost(0);

                            }else if (HighSchool* c = dynamic_cast<HighSchool*>(i))
                            {
                                ac=c->AnnualCost(0);

                            }else if (ELearning* c = dynamic_cast<ELearning*>(i))
                            {
                                ac=c->AnnualCost(0);
                            }else if (TraditionalEd* c = dynamic_cast<TraditionalEd*>(i))
                            {
                                ac=c->AnnualCost(0);

                            }else
                            {
                                ac=i->EducationalInstitution::AnnualCost();

                            }
                            i->computedAC = ac;
                        }
                    case 5: break;
                    }
                
                sort(vi.begin(),vi.end(),compareEdInst);
                for (auto i:vi){
                    i->print();
                }
                break;
            case 4 :
                for(auto &i:vi){
                    cout << i->getName() << endl;
                    if (University* c = dynamic_cast<University*>(i))
                    {
                        cout << c->AnnualCost(0) << endl;
                    }else if (Application* c = dynamic_cast<Application*>(i))
                    {
                        cout << c->AnnualCost(0) << endl;
                    }else if (OnlineCourse* c = dynamic_cast<OnlineCourse*>(i))
                    {
                        cout << c->AnnualCost(0) << endl;
                    }else if (HighSchool* c = dynamic_cast<HighSchool*>(i))
                    {
                        cout << c->AnnualCost(0) << endl;
                    }else if (ELearning* c = dynamic_cast<ELearning*>(i))
                    {
                        cout << c->AnnualCost(0) << endl;
                    }else if (TraditionalEd* c = dynamic_cast<TraditionalEd*>(i))
                    {
                        cout << c->AnnualCost(0) << endl;
                    }else
                    {
                        // If it is educational institution return price
                        cout << i->getPrice() << endl;
                    }

                }
                break;
            case 5 :
                    return 0;
                break;
        }
    }while(choice != 5);
    return 0;
}
