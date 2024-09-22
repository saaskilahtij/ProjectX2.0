#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {}

FUZZ_TEST(const uint8_t *data, size_t size) {
	// Init fuzzer
	FuzzedDataProvider fuzzed_data(data, size);
	// Create muts
	float n = fuzzed_data.ConsumeFloatingPoint<float>();
	float i = fuzzed_data.ConsumeFloatingPoint<float>();
	std::string oper = fuzzed_data.ConsumeRandomLengthString(1);
	// Fuzz function
	calculator(n,oper[0],i);
}
