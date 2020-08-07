#include "dbg.h"
#include <stdlib.h>
#include <stdio.h>

void test_debug() {

    debug("I have brown pants");

}
void test_log_err() {
    log_err("I BELIEVE THIS IS WRONG");
}

void test_log_warn() {
    log_warn("I am WARNING THIS ");
}

int main() {

    test_debug();
    test_log_err();
    test_log_warn();
}
