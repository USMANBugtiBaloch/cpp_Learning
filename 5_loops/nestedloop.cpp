#include <iostream>

int main()
{
    int n = 5;

    for (int i = 0; i <= n; i++)
    {
        int m = 4;
        for (int j = 0; j <= m; j++)
        {
            std::cout << "@"; //
        }
        std::cout << std::endl;
    }
    // @@@@@
    // @@@@@
    // @@@@@
    // @@@@@
    // @@@@@
    // @@@@@ // output

    return 0;
}
