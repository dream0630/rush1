#include "Box.hh"
#include "GiftPaper.hh"
#include <cstdlib>
#include "ConveyorBelt.hh"

ConveyorBelt::ConveyorBelt()
  :_toy(NULL)
{
}

ConveyorBelt::~ConveyorBelt()
{
}

ConveyorBelt::ConveyorBelt(const ConveyorBelt &cb)
  :_toy(cb._toy)
{
}

ConveyorBelt &ConveyorBelt::operator=(const ConveyorBelt &cb)
{
  if (this == &cb)
    return (*this);
  this->_toy = cb.Look();
  return (*this);
}

void ConveyorBelt::setObject(Object *toy)
{
  if (this->_toy != NULL)
    std::cout << "YOU SMASHED THE PRECEDENT OBJECT YOU FOOL" << std::endl;
  this->_toy = toy;
}

Object *ConveyorBelt::Look() const
{
  return (this->_toy);
}

void ConveyorBelt::buttonOut()
{
  if (this->_toy == NULL)
    {
      std::cout << "You just sent Santa no gifts :'( " << std::endl;
      return ;
    }
  std::cout << "You hear John Santa yelling : 'YOUR TIME IS OFF, MY TIME IS NOW !!!', gotta send him the gift now !!!" << std::endl;
  delete this->_toy;
  this->_toy = NULL;
}

std::ostream &operator<<(std::ostream &os, IConveyorBelt *cb)
{
  std::cout << "CONVEYOR BELT:" << std::endl;
  if (cb->Look())
    os << "\t[" << cb->Look()->getName() << "]" << std::endl;
  else
    os << "\t[FREE]" << std::endl;
  return (os);
}

GiftPaper *ConveyorBelt::buttonInPaper()
{
  return new GiftPaper();
}

Box *ConveyorBelt::buttonInBox()
{
  return new Box();
}
