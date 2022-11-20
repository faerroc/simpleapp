#include "singleton.h"

using namespace std;

singleton* singleton::pinstance_{nullptr};
std::mutex singleton::mutex_;

singleton::singleton()  {}
singleton::~singleton() {}

/**
 * The first time we call GetInstance we will lock the storage location
 *      and then we make sure again that the variable is null and then we
 *      set the value.
 */
singleton *singleton::GetInstance()
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new singleton();
    }
    return pinstance_;
}

void singleton::Debug()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "The LOC date and time is: " << dt << endl;
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time is: " << dt << endl;
}
