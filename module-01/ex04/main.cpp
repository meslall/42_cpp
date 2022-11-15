#include<iostream>
#include <fstream>



void	replace(char **av)
{
	std::string		file_name;
	std::string		s1;
	std::string		s2;
	std::fstream	in;
	std::fstream	out;
	std::string		line;
	std::string result = "";
	size_t			pos = 0;

	file_name = av[1];
	s1 = av[2];
	s2 = av[3];

	in.open(file_name,std::fstream::in);
	if(in.fail())
	{
		std::cout << "Error: file not found" << std::endl;
	}
	else
	{
		out.open(file_name + ".replace",std::fstream::out);
		while(std::getline(in,line))
		{
			line += '\n';
			result += line;
		}
		if(result.length() > 0)
			result = result.erase(result.length() - 1, 1);
		while (pos != std::string::npos)
		{
			pos = result.find(s1, 0);
			if (pos != std::string::npos)
			{
				result = result.erase(pos, s1.length());
				result = result.insert(pos, s2);
			}
		}
		out << result;
		out.close();
		in.close();
	}
}

int main(int ac,char **av)
{
	if(ac != 4)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return(0);
	}
	replace(av);
}