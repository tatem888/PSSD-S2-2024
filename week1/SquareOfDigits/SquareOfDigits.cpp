#include <string>
#include <iostream>
#include <vector>

class SquareOfDigits {
    public:

    int getMax(std::vector<std::string> data){

        //gert grid size
        int stringSizeX = data.size();
        int stringSizeY = data[0].size();

        int currentSize = stringSizeX;
        
        
        while (currentSize >= 1)
        {
            for (int i = 0; i <= stringSizeX - currentSize; i++)
            {
                for (int j = 0; j <= stringSizeY - currentSize; j++)
                {
                    int corner1 = data[i][j];
                    int corner2 = data[i][j + currentSize - 1];
                    int corner3 = data[i + currentSize - 1][j];
                    int corner4 = data[i + currentSize - 1][j + currentSize - 1];

                    if (corner1 == corner2 && corner1 == corner3 && corner1 == corner4)
                    {
                        return currentSize*currentSize;
                    }

                }
            }
            currentSize--;
        }
        return 1;
        //check if valid square
        
    }
};


int main(){

    SquareOfDigits a;

    std::cout << a.getMax({"9785409507", "2055103694","0861396761","3073207669","1233049493","2300248968","9769239548","7984130001","1670020095","8894239889","4053971072"});

}
