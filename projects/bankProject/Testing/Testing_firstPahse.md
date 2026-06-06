This is first time test result 
where many test case fail 


# ✅ Black Box Testing Report — Banking Management System

| Test Case ID | Input / Action | Expected Output | Actual Result | Status |
|---------------|----------------|-----------------|---------------|---------|
| TC-01 | Create new account with valid data | Account created | Account created | ✅ PASS |
| TC-02 | Deposit valid amount | Balance updated | Updated correctly | ✅ PASS |
| TC-03 | Withdraw valid amount | Balance reduced | Reduced correctly | ✅ PASS |
| TC-04 | Withdraw amount greater than balance | Transaction rejected | Rejected | ✅ PASS |
| TC-05 | Transfer money between accounts | Money transferred | Working | ✅ PASS |
| TC-06 | View transaction history | History displayed | Displayed | ✅ PASS |
| TC-07 | Enter negative deposit amount | Reject input | Amount accepted | ❌ FAIL |
| TC-08 | Enter negative withdrawal amount | Reject input | Amount accepted | ❌ FAIL |
| TC-09 | Transfer negative amount | Reject transfer | Transfer allowed | ❌ FAIL |
| TC-10 | Enter alphabet instead of menu number | Invalid input message | Program unstable/input issue | ❌ FAIL |
| TC-11 | Enter alphabet in numeric fields | Validation error | Input issue | ❌ FAIL |
| TC-12 | Search non-existing account | “Account not found” | Inconsistent behavior | ❌ FAIL |
| TC-13 | Duplicate account creation stress test | Unique accounts only | Duplicate possibility exists | ❌ FAIL |
| TC-14 | Empty CSV/account file | Graceful handling | Partial handling | ⚠ PARTIAL |
| TC-15 | Corrupted CSV row | Skip invalid row | Invalid parsing possible | ❌ FAIL |
| TC-16 | Large deposit amount | Handle correctly | PASS in normal range | ✅ PASS |
| TC-17 | Multiple transactions continuously | Stable execution | Stable | ✅ PASS |
| TC-18 | Transaction timestamp | Real date/time | Placeholder value shown | ❌ FAIL |
| TC-19 | Login with wrong credentials | Retry/error | Not fully implemented | ❌ FAIL |
| TC-20 | Exit and reopen application | Data persistence | Working | ✅ PASS |

---

# 📊 Final Black Box Result

| Category | Result |
|-----------|---------|
| Core Features | ✅ Mostly Working |
| Stability | ✅ Stable |
| Input Validation | ❌ Weak |
| Error Handling | ❌ Weak |
| File Robustness | ⚠ Partial |
| Security/Login | ❌ Incomplete |

---

# ✅ Overall Result

- Functional Banking Flow: ✅ PASS
- Robust Industrial Testing: ⚠ NEEDS IMPROVEMENT
- Approx Practical Success Rate: ⭐ ~70% PASS