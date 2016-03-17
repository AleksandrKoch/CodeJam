#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile("A-small-practice.in");
    ofstream oufile("A-small-practice-result.out");

    int test_cases;
    infile >> test_cases;
    vector<int> itemWeight;
    for (int testInstanceNum = 0; testInstanceNum < test_cases; ++testInstanceNum)
    {
        int limit;
        infile >> limit;

        int numOfItems;
        infile >> numOfItems;

        itemWeight.clear();
        itemWeight.reserve(numOfItems);

        for (int itemNum = 0; itemNum < numOfItems; ++itemNum)
        {
            infile >> itemWeight[itemNum];
        }

        oufile << "Case #" << testInstanceNum + 1 << ": ";

        for (int i = 0; i < numOfItems; ++i)
        {
            for (int j = i + 1; j < numOfItems; ++j)
            {
                if (itemWeight[i] > limit)
                {
                    break;
                }
                if (itemWeight[j] > limit)
                {
                    continue;
                }
                if (itemWeight[i] + itemWeight[j] == limit)
                {
                    if (i < j)
                    {
                        oufile << i + 1 << " " << j + 1 << endl;
                    }
                    else
                    {
                        oufile << j + 1 << " " << i + 1 << endl;
                    }
                }
            }
        }

    }
    return 0;
}
