#include <iostream>
#include <string>
#include <set>

int main()
{
	std::set<int> not_unique_symb;
	std::string str;

	getline(std::cin, str);

	if (!str.length())
	{
		std::cout << std::endl << "Empty string" << std::endl << std::endl;
	}
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (not_unique_symb.find(str[i]) != not_unique_symb.end())
			{
				str.replace(i, 1, ")");
			}
			else
			{
				if (str.find_last_of(tolower(str[i])) == i)
				{
					str.replace(i, 1, "(");
				}
				else
				{
					not_unique_symb.insert(tolower(str[i]));
					str.replace(i, 1, ")");
				}
			}
		}
	}

	std::cout << str << std::endl;
}
