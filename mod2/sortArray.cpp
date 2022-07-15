#include <iostream>
int main()
{
    int iNos[5] = {4, 2, 1, 3, 5};
    int l, r, temp;

    for (l = 0; l <= 4; l++)
    {
        for (r = l + 1; r <= 5; r++)
        {
            if (iNos[r] < iNos[l])
            {
                temp = iNos[l];
                iNos[l] = iNos[r];
                iNos[r] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << iNos[i];
    }
}