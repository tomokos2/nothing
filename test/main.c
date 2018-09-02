#include "test.h"
#include "tokenizer_suite.h"
#include "parser_suite.h"
#include "interpreter_suite.h"

TEST_MAIN()
{
    TEST_RUN(tokenizer_suite);
    TEST_RUN(parser_suite);
    TEST_RUN(interpreter_suite);
    return 0;
}
