/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:47:27 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/13 15:57:57 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "file.hpp"

File::File(){};
File::~File(){};

void File::setfile(const std::string &filename)
{
	file = filename;
}

void File::setfind(const std::string &find)
{
	this->find = find;
}

void File::setreplace(const std::string &replace)
{
	this->replace = replace;
}

std::string File::getFile() const { return file; }
std::string File::getFind() const { return find; }
std::string File::getReplace() const { return replace; }

void File::makenewfile() const
{
	std::ifstream infile.is_open(file.c_str());
	if (!infile.open())
	{
		std::cout << "file does not exist or no permissions" << std::endl;
		return;
	}
	std::ofstream outfile((file + ".replace".c_str());
}
