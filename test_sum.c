#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#define TESTING
#include "sum.c" // Include the source file to test the calculateSum function

// Initialization block
void test_calculateSum(void) {
    // Test case 1: Positive numbers
    CU_ASSERT_EQUAL(calculateSum(5, 2), 7);

    // Test case 2: Negative numbers
    CU_ASSERT_EQUAL(calculateSum(-5, -2), -7);

    // Test case 3: Mixed positive and negative numbers
    CU_ASSERT_EQUAL(calculateSum(5, -2), 3);

    // Test case 4: Zero
    CU_ASSERT_EQUAL(calculateSum(0, 0), 0);
}

// Setup block
int setup(void) {
    // Code to set up the environment before each test
    return 0;
}

// Teardown block
int teardown(void) {
    // Code to clean up the environment after each test
    return 0;
}

// Main function to run the tests
int main() {
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    // Create a test suite
    CU_pSuite pSuite = NULL;
    pSuite = CU_add_suite("Suite_calculateSum", setup, teardown);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add the test case to the suite
    if (NULL == CU_add_test(pSuite, "test of calculateSum()", test_calculateSum)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Run all tests using the basic interface
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}