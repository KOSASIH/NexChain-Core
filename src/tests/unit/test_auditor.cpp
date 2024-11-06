#include <gtest/gtest.h>
#include "auditing/auditor.h"

TEST(AuditorTest, AuditContract) {
    Auditor auditor;
    Report report = auditor.auditContract("contract code here");
    EXPECT_EQ(report.getSummary(), "Audit completed successfully.");
    EXPECT_TRUE(report.getIssues().empty());
}
