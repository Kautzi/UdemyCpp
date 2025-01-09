#include <cstdint>
#include <iostream>

int main()
{

    // 1.Wert einlesen uint16_t
    //2. liegt der wert zwischen 0 und 10 gib Goal aus
    //3. liegt die zahl darüber oder darunter gib Finish aus

    std::uint16_t input_vatiable = 0;

    std::cout << "Geben Sie eine ganze Zahl ein: " << std::endl;
    std::cin >> input_vatiable;

    if(input_vatiable <= 10)
        {
            if(input_vatiable == 4)
                {
                    std::cout << "GOAL" << std::endl;
                }
            else
                {
                    std::cout << "LOOSE" << std::endl;
                }
        }


    else
        {
            std::cout << "FINISH" << std::endl;
        }

    return 0;
}
