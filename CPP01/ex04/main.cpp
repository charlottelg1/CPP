#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include <cstring>

std::string s1;
std::string s2;
size_t      len1;
size_t      len2;

/*a filename and two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.*/

void    set_global(char **av)
{
    s1 = av[2];
    s2 = av[3];
    len1 = s1.size();
    len2 = s2.size();
}

std::string replace_line(std::string line)
{
	size_t pos = line.find(s1);

	while (pos != std::string::npos)
	{
		line.erase(pos, len1);
		line.insert(pos, s2);
		pos = line.find(s1, pos + len2);
	}
	return (line);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Try again with 3 arguments" << std::endl;
        return (-1);
    }
    set_global(av);
    std::ifstream   ifs(av[1]);
    std::string     line;
    std::string     tmp;
    if (ifs.is_open())
    {
        std::string   new_name(av[1]);
        new_name += ".replace";
        char file_out[new_name.size()];
		strcpy(file_out, new_name.c_str());
        std::ofstream   ofs(file_out); //ofs a besoin d'un param char (d'où la conversion)
        while (getline(ifs, line))
        {
           tmp = replace_line(line);
           ofs << tmp << std::endl;     
        }
        ifs.close();
        ofs.close();
    }
    else
    {
       std::cout << "Try again with an existing file" << std::endl;
       ifs.close();
       return (-1); 
    }
    return (0);
}