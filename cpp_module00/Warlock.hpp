#pragma once

#include <iostream>
#include <string>

class Warlock {
private:
	std::string _name;
	std::string _title;
	Warlock();
	Warlock(const Warlock& old);
	Warlock &operator=(const Warlock& rhs);
public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();
	const std::string& getName() const;
	const std::string& getTitle() const;
	void setTitle(const std::string& title);
	void introduce() const;
};