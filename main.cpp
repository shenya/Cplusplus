#include <iostream>

#include "JobBase.h"
using namespace std;


class Teacther : public JobBase {
public: Teacther() {}

public:
#if 1
    void print() {
        cout<<"teacther"<<endl;
    }
#endif
};

int main(void)
{
    JobBase job("base job", 1000);
    Teacther *teacther;

    job.print();
    cout<<"content: "<<job.mJobContent<<" salary:"<<job.mMonthSalary<<endl;

    JobBase copyJobBase(job);

    cout<<"content-copy: "<<copyJobBase.mJobContent<<" salary:"<<copyJobBase.mMonthSalary<<endl;
    teacther = new Teacther();
    teacther->print();
    cout<<"hello world"<<endl;
    cout<<"hello world again"<<endl;

    return 0;
}
