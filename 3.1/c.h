#ifndef CH
#define CH
#include <string>
#include "base.h"

class C : public Base {
public:
    C(Base* parent, std::string name, int status);
};
#endif
