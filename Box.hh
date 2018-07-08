#ifndef BOX_HH_
#define BOX_HH_

# include <string>
# include "Object.hh"
# include "Wrap.hh"

class	Box: public Wrap
{
public:
  Box(std::string name = "Box", int type = TYPE_BOX);
  Box(Box const &b);
  virtual ~Box() {}
  Box	&operator=(Box const &g);
  void			closeMe();
  virtual Object	*openMe();
  virtual const std::string	getName() const;
};

#endif
