#ifndef BH
#define BH
#include <string>
#include "base.h"
class B : public Base {
public:
    B(Base* parent, std::string name, int status);
};

#endif
