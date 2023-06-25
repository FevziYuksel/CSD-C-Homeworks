#include <iostream>
#include <vector>
#include <functional>
#include <random>

namespace fy {

	template<typename T>
	using comparator_func = std::function<bool(const T&, const T&)>;

	template<typename T>
	struct comparator
	{
		bool operator() (const T& lval, const T& rval)
		{
			return lval > rval;
		}
	};	


	template<typename T>
	constexpr void swap(T& lvalue, T& rvalue) noexcept
	{
		T temp = lvalue;
		lvalue = rvalue;
		rvalue = temp;
	}

	template<typename T>
	void bubblesort(std::vector<T>& arr, const fy::comparator_func<T>& compare = [](T x, T y) -> bool {return x > y; }) noexcept
	{
		bool is_swapped = false;
		for (size_t i = 0; i < arr.size() - 1; i++)
		{
			is_swapped = false;
			for (size_t j = 0; j < arr.size() - 1 - i; j++)
			{
				if (is_swapped = compare(arr[j], arr[j + 1]))
					fy::swap<T>(arr[j], arr[j + 1]);
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
			std::cout << e << " ";
			
		std::cout << std::endl;
	}

	
	template<typename T, class Iterator>
	void print_container(const Iterator& begin, const Iterator& end, size_t size)
	{
		int ctr = 0;
		for (Iterator i = begin; ctr++ < size && begin != end; ++i)
			std::cout << *i << " ";
			
		std::cout << std::endl;
	}

	//Copy Elision
	template<typename T>
	std::vector<T> random_vector(const T& begin, const T& end, size_t size)
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

	//Don't work any container except std::vector
	template<typename T, class Container>
	Container random_container(const T& begin, const T& end, size_t size)
	{
		std::random_device rand;

		std::mt19937_64 gen(rand());

		std::uniform_int_distribution<T> dist(begin, end);

		Container container;

		container.reserve(size);

		for (int i = 0; i < size; ++i)
			container.emplace_back(std::move(dist(gen)));

		return container;
	}

}

int main()
{
	using uint32 = unsigned int;

	auto vec = fy::random_vector<uint32>(-50, 50, 10);

	fy::bubblesort<uint32>(vec);
	fy::bubblesort<uint32>(vec, [](uint32 x, uint32 y) {return x > y; });
	fy::bubblesort<uint32>(vec, fy::comparator<uint32>());

	fy::comparator<uint32> c;

	fy::bubblesort<uint32>(vec, c);


	fy::print_container<uint32, std::vector<uint32>::const_iterator>(vec.begin(), vec.end(), vec.size());

	return 0;
}