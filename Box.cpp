#include <string>
#include "Object.hh"
#include "Box.hh"
#include "Wrap.hh"

Box::Box(std::string name, int type):
  Wrap(name, type)
{
}

Box::Box(Box const &b):
  Wrap(b.getName(), b.getType())
{
}

std::string const Box::getName() const
{
  return (this->_name);
}

Box&	Box::operator=(Box const &g)
{
  if (this == &g)
    return (*this);
  this->_type = g.getType();
  this->_toy = g.getToy();
  this->_box = g.getBox();
  this->_isOpen = g.getIsOpen();
  return (*this);
}

void	Box::closeMe()
{
  this->_isOpen = false;
}

Object	*Box::openMe()
{
  Object	*tmp;

  this->_isOpen = true;
  tmp = this->_toy;
  this->_toy = NULL;
  return (tmp);
}
