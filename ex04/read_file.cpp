/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:04:59 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/16 13:18:06 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "file.hpp"

std::string File::readFileToString() const
{
	std::ifstream infile(file.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: can not open file" << std::endl;
		return "";
	}
	 std::stringstream buffer;
	 buffer << infile.rdbuf();
	 infile.close();
	 return buffer.str();
}

std::string File::replaceInString(const std::string &wordReplace) const
{
    std::string wordFind;
    size_t lastPos = 0;
    size_t pos = 0;
    
    while ((pos = wordReplace.find(find, lastPos)) != std::string::npos)
    {
        wordFind += wordReplace.substr(lastPos, pos - lastPos);
        wordFind += replace;
        lastPos = pos + find.length();
    }
    wordFind += wordReplace.substr(lastPos);
	 std::ofstream outfile((file + ".replace").c_str());
    if (outfile.is_open())
    {
        outfile << wordFind;
        outfile.close();
    }
    return wordFind;
}
