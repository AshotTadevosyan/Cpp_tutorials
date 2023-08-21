//
//  Box.hpp
//  Cpp_tutorials
//
//  Created by Ashot Tadevosyan on 21.08.23.
//

#ifndef Box_hpp
#define Box_hpp

class Box
{
private:
  double length{1.0};
  double width{1.0};
  double height{1.0};

public:
  // Constructors
  Box() = default;
  Box(double length, double width, double height);
  
  double volume() const;      // Function to calculate the volume of a box

  // Functions to provide access to the values of member variables
  double getLength() const { return length; }
  double getWidth() const  { return width; }
  double getHeight() const { return height; }

  // Functions to set member variable values
  void setLength(double lv) { if (lv > 0) length = lv;}
  void setWidth(double wv)  { if (wv > 0) width = wv; }
  void setHeight(double hv) { if (hv > 0) height = hv; }
};

#endif /* Box_hpp */
