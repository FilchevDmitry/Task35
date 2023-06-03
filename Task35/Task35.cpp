#include<iostream>
#include<initializer_list>
#include<vector>
#include<unordered_set>
#include<memory>
#include<filesystem>

//Задание 1
/*
int main()
{
	std::vector<int> num={1, 2, 3, 4, 5};
	for (auto i : num)
	{
		std::cout << i << std::endl;
	}
}
*/

//Задание 2
/*
int main()
{
	std::vector <int> numbers = { 8,8,5,8,4,8,5,9 };
	auto uniqueNumbers=[](std::vector<int>& numbers)->std::unique_ptr<std::vector<int>>
	{
		std::unordered_set <int> num;
		std::vector<int> temp;
		for (auto i : numbers)
		{			
			if (num.count(i))
			{
				std::cout << "dublikat "<< std::endl;
			}
			else
			{
				num.insert(i);
				temp.push_back(i);
			}
			
		}
		return { std::make_unique<std::vector<int>>(temp)};
		
	};
	auto once = uniqueNumbers(numbers);
}
*/
int main()
{
	std::string path = "C:\\Skilbox\\Task33_4";
	std::string extension = ".txt";

	auto recursiveGetFileNamesByExtension = [](std::filesystem::path path, const std::string extension)
	{
		std::vector<std::string> names;
		for (auto& p : std::filesystem::recursive_directory_iterator(path))
			if (p.path().extension().compare(extension))
			{
				std::cout<< p.path()<<std::endl;
				path = p;
				std::string t = path.std::filesystem::path::generic_string();
				names.push_back(t);
			}
		return names;
	};
	recursiveGetFileNamesByExtension(path, extension);
}
