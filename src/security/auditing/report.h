#ifndef REPORT_H
#define REPORT_H

#include <string>
#include <vector>

class Report {
public:
    Report();
    void setSummary(const std::string& summary);
    void add Issue(const std::string& issue);
    std::string getSummary() const;
    std::vector<std::string> getIssues() const;

private:
    std::string summary;
    std::vector<std::string> issues;
};

#endif // REPORT_H
