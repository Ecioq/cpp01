#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class File {
	public:
		File();
		~File();
		void setfile(const std::string &name);
		void setfind (const std::string &find);
		void setreplace(const std::string &replace);
		void readfile() const;
		std::string readFileToString() const;
		std::string replaceInString(const std::string &content) const;


		std::string getFile() const;
		std::string getFind() const;
		std::string getReplace() const;

		void makeNewFile(void) const;
	private:
		std::string file;
		std::string find;
		std::string replace;
};

