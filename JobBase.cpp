#include <iostream>

#include "JobBase.h"

using namespace std;

JobBase::JobBase():mMonthSalary(0), mJobContent("what") {};

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

ostream& operator<<(ostream &os, const JobBase &job) {
    os << "JobBase:";
    os << "mJobContent " << job.mJobContent << ",";
    os << "mMonthSalary "<< job.mMonthSalary;
    return os;
}

istream& operator>>(istream &is, JobBase &job) {
   is >> job.mJobContent >> job.mMonthSalary;
   return is;
}
