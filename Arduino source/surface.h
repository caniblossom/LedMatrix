/**
 * Author(s): Jani Salo
 */

#include <array>

template <unsigned WIDTH, unsigned HEIGHT>
class Surface {
public:
  Surface() {}

  template <typename... Data>
  Surface(Data... data) : _data{{data...}} {}
    
private:
  std::array<unsigned, WIDTH * HEIGHT> _data;
};

 

