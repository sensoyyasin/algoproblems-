#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>
#include <string>
#include <map>

class Warlock
{
private:
	std::string name;
	std::string title;

	Warlock();
	Warlock(Warlock const &other);
	Warlock &operator=(Warlock const &other);

	std::map<std::string, ASpell *>arr;
public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	std::string const &getName() const;
	std::string const &getTitle() const;

	void	setTitle(std::string const &title);

	void introduce() const;

	void learnSpell(ASpell *aspell);
	void forgetSpell(std::string name);
	void launchSpell(std::string spell_name, ATarget const &atarget_ref);
};


#endif
