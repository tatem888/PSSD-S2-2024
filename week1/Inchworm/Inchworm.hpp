#include <stdio.h>
#include <math.h>
using namespace std;

class Inchworm {
  public:
  int lunchtime(int branch, int rest, int leaf) {
    
    //init counter for number of leaves
    int numLeavesEaten = 0;

    //iterate through branch till the end of branch 
    for (int currentPosition = 0; currentPosition < branch; currentPosition + rest){

        if (fmod(currentPosition,leaf) == 0){
            numLeavesEaten++;
        }
    }

    return numLeavesEaten;
    }

  };

  