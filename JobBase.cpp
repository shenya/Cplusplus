#include <iostream>

#include "JobBase.h"

using namespace std;

JobBase::JobBase() {};

JobBase::JobBase(string jobContent, int monthSalary) {
    mJobContent = jobContent;
    mMonthSalary = monthSalary;
}

JobBase::JobBase(JobBase &copyJobBase) {
    mJobContent = copyJobBase.mJobContent;
    mMonthSalary = copyJobBase.mMonthSalary;
}

void JobBase::print() {
    cout<<"jobBase"<<endl;
}

JobBase::~JobBase() {
    cout<<"~JobBase()"<<endl;
}
