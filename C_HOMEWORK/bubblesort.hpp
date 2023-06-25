#ifndef /*_BUBBLESORT_*/ 0
#define  _BUBBLESORT_
#include <iostream>
#include <vector>
#include <functional>
#include <random>

namespace fy {
	template<typename T>
	using compare_func = std::function<bool(const T&, const T&)>;

	template<typename T>
	constexpr void swap(T& lvalue, T& rvalue) noexcept;

	template<typename T>
	void bubblesort(std::vector<T>& arr, const compare_func<T>& compare) noexcept;

	//make it work for all container types
	template<typename T>
	void print_arr(const std::vector<T>& vec) noexcept;

	//Copy Elision
	template<typename T>
	std::vector<T> random_vector(const T begin, const T end, size_t size);

}


#endif