#include "report.h"

Report::Report() {}

void Report::setSummary(const std::string& summary) {
    this->summary = summary;
}

void Report::addIssue(const std::string& issue) {
    issues.push_back(issue);
}

std::string Report::getSummary() const {
    return summary;
}

std::vector<std::string> Report::getIssues() const {
    return issues;
}
