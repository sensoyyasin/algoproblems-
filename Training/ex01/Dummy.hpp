#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"
#include <iostream>

class Dummy : public ATarget
{
public:
	Dummy();
	virtual ~Dummy();

	virtual ATarget *clone() const;
};

#endif
