#ifndef AH
#define AH
#include <string>
#include "base.h"
class A : public Base {
public:
    A(Base* parent, std::string name, int status);
};
#endif
