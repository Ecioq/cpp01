#include <iostream>
#include <string>
//#include <fsteam>

class File {
	public:
		File();
		~File();
		void setfile(const std::string &name);
		void setfind (const std::string &find);
		void setreplace(const std::string &replace);
		void readfile() const;

		std::string getfile() const;
		std::string getfind() const;
		std::string getreplace() const;

		void makeNewFile(void) const;
	private:
		std::string file;
		std::string find;
		std::string replace;
};
