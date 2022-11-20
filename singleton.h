#pragma once

#include <memory>
#include <cstdio>
#include <iostream>
#include <mutex>
#include <ctime>

class singleton
{
    /**
     * The Singleton's constructor/destructor should always be private to
     * prevent direct construction/desctruction calls with the `new`/`delete`
     * operator.
     */
private:
    static singleton * pinstance_;
    static std::mutex mutex_;

protected:
    singleton();
    ~singleton();

public:

    /**
     * Singletons should not be cloneable.
     */
    singleton(singleton &other) = delete;

    /**
     * Singletons should not be assignable.
     */
    void operator=(const singleton&) = delete;

    /**
     * This is the static method that controls the access to the singleton
     * instance. On the first run, it creates a singleton object and places it
     * into the static field. On subsequent runs, it returns the client existing
     * object stored in the static field.
     */
    static singleton *GetInstance();

    void Debug();
};


