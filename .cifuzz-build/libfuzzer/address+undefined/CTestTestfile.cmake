# CMake generated Testfile for 
# Source directory: /home/kali/Fuzzing/ci-cd/ProjectX2.0
# Build directory: /home/kali/Fuzzing/ci-cd/ProjectX2.0/.cifuzz-build/libfuzzer/address+undefined
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(fuzz_test_regression_test "/home/kali/Fuzzing/ci-cd/ProjectX2.0/.cifuzz-build/libfuzzer/address+undefined/fuzz_test")
set_tests_properties(fuzz_test_regression_test PROPERTIES  LABELS "cifuzz_regression_test" _BACKTRACE_TRIPLES "/home/kali/.local/share/cifuzz/share/cmake/cifuzz-functions.cmake;324;add_test;/home/kali/Fuzzing/ci-cd/ProjectX2.0/CMakeLists.txt;18;add_fuzz_test;/home/kali/Fuzzing/ci-cd/ProjectX2.0/CMakeLists.txt;0;")
subdirs("src")
