//
//  main.cpp
//  Truckload
//
//  Created by Ashot Tadevosyan on 08.09.23.
//
#include <cstdlib>
#include <ctime>
#include "Truckload.hpp"

inline unsigned random(size_t count);

inline SharedBox randomBox();

int main(int argc, const char * argv[])
{
  std::srand(static_cast<unsigned>(std::time(nullptr)));

  Truckload load1;

  const size_t boxCount {12};
  for (size_t i {} ; i < boxCount ; ++i)
    load1.addBox(randomBox());

  std::cout << "The first list:\n";
  load1.listBoxes();

  SharedBox largestBox{load1.getFirstBox()};

  SharedBox nextBox{load1.getNextBox()};
  while (nextBox)
  {
    if (*nextBox > *largestBox)
      largestBox = nextBox;
    nextBox = load1.getNextBox();
  }

  std::cout << "\nThe largest box in the list is ";
  largestBox->listBox();
  std::cout << std::endl;
  load1.removeBox(largestBox);
  std::cout << "\nAfter deleting the largest box, the list contains:\n";
  load1.listBoxes();

  const size_t nBoxes {20};
  std::vector<SharedBox> boxes;

  for (size_t i {} ; i < nBoxes ; ++i)
    boxes.push_back(randomBox());

  Truckload load2{boxes};
  std::cout << "\nThe second list:\n";
  load2.listBoxes();

  auto smallestBox {load2.getFirstBox()};
  for (auto nextBox{ load2.getNextBox() }; nextBox; nextBox = load2.getNextBox())
    if (nextBox->Compare(*smallestBox) < 0)
      smallestBox = nextBox;

  std::cout << "\nThe smallest box in the second list is ";
  smallestBox->listBox();
  std::cout << std::endl;
}

inline unsigned random(size_t count)
{
  return 1 + static_cast<unsigned>(std::rand() / (RAND_MAX / count + 1));
}

inline SharedBox randomBox()
{
  const size_t dimLimit {99};
  return std::make_shared<Box>(random(dimLimit), random(dimLimit), random(dimLimit));
}
