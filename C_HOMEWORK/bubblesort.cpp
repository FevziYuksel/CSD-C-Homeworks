#include <iostream>
#include <vector>
#include <functional>
#include <random>

namespace fy {
	template<typename T>
	constexpr void swap(T& lvalue, T& rvalue) noexcept
	{
		T temp = lvalue;
		lvalue = rvalue;
		rvalue = temp;
	}

	template<typename T>
	void bubblesort(std::vector<T>& arr, const std::function<bool(const T&, const T&)>& compare) noexcept
	{
		bool is_swapped = false;
		for (size_t i = 0; i < arr.size() - 1; i++)
		{
			is_swapped = false;
			for (size_t j = 0; j < arr.size() - 1 - i; j++)
			{
				if (compare(arr[j], arr[j + 1]))
				{
					fy::swap<T>(arr[j], arr[j + 1]);
					is_swapped = true;
				}
			}

			if (!is_swapped)
				break;
		}
	}

	//make it work for all container types
	template<typename T>
	void print_arr(const std::vector<T>& vec) noexcept
	{
		for (const T& e : vec)
			std::cout << e << '\n';
			
		std::cout << std::endl;
	}

	//Copy Elision
	template<typename T>
	std::vector<T> random_vector(const T begin, const T end, size_t size)
	{
		std::random_device rand;

		std::mt19937_64 gen(rand());

		std::uniform_int_distribution<T> dist(begin, end);

		std::vector<T> vec;
		vec.reserve(size);
		
		for (int i = 0; i < size; ++i)
			vec.emplace_back(std::move(dist(gen)));
			
		return vec;
	}

}

int maincpp()
{
	//Copy Elision
	auto vec = fy::random_vector<int>(-50, 50, 1);


	//auto comperator = [](int x, int y) {return x > y; };
	////fy::bubblesort<int>(vec, comperator);
	//
	//fy::print_arr<int>(vec);

	return 0;
}