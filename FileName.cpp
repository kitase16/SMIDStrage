#include <iostream>
#include <string>
#include <tuple>

//i want to soso speed scripting like so c++ futuer.
//hello concern.

int F1() {
	return 0x123;
}

float F2() {
	return 0.123f;
}

std::string F3() {
	return "1234";
}


template<class... a>
const auto& SIMDStrage(const a&... arg) {
	return std::tuple<const a&...>{ arg... };// i hope auto correct.
	//return []{ arg... };//bad bad.
	//return { ...arg };//hope this.
}

int main() {
	auto A = SIMDStrage(F1(), F2(), F3());

	std::cout << std::get<1>(A) << std::endl;
}