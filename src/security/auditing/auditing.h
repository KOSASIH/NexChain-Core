#ifndef AUDITOR_H
#define AUDITOR_H

#include <string>
#include <vector>
#include "report.h"

class Auditor {
public:
    Auditor();
    Report auditContract(const std::string& contractCode);
};

#endif // AUDITOR_H
