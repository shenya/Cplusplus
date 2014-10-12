#ifndef _JOB_BASE_H
#define _JOB_BASE_H

#include <string>
#include <iostream>

using namespace std;

class JobBase {
public:
    string mJobContent;
    int mMonthSalary;

    JobBase();
    JobBase(string jobContent, int monthSalary);
    JobBase(JobBase &copyJobBase);
    friend ostream& operator<<(ostream &os, const JobBase &job);
    friend istream& operator>>(istream &is, JobBase &job);
    ~JobBase();
    virtual void print();
};
#endif
