
      #include <iostream>

int main() {
    int choice;

    std::cout << "Unit Converter\n";
    std::cout << "1. Length\n";
    std::cout << "2. Weight\n";
    std::cout << "3. Volume\n";
    std::cout << "4. Temperature\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    double value;
    std::cout << "Enter value: ";
    std::cin >> value;

    if (choice == 1) {
        std::cout << "1. km to m\n";
        std::cout << "2. m to cm\n";
        std::cout << "3. cm to mm\n";
        int lenChoice;
        std::cin >> lenChoice;
        if (lenChoice == 1) std::cout << value << " km = " << value * 1000 << " m\n";
        else if (lenChoice == 2) std::cout << value << " m = " << value * 100 << " cm\n";
        else if (lenChoice == 3) std::cout << value << " cm = " << value * 10 << " mm\n";
    } else if (choice == 2) {
        std::cout << "1. kg to g\n";
        std::cout << "2. g to mg\n";
        int weightChoice;
        std::cin >> weightChoice;
        if (weightChoice == 1) std::cout << value << " kg = " << value * 1000 << " g\n";
        else if (weightChoice == 2) std::cout << value << " g = " << value * 1000 << " mg\n";
    } else if (choice == 3) {
        std::cout << "1. l to ml\n";
        std::cout << "2. ml to cl\n";
        int volChoice;
        std::cin >> volChoice;
        if (volChoice == 1) std::cout << value << " l = " << value * 1000 << " ml\n";
        else if (volChoice == 2) std::cout << value << " ml = " << value / 10 << " cl\n";
    } else if (choice == 4) {
        std::cout << "1. C to F\n";
        std::cout << "2. F to C\n";
        int tempChoice;
        std::cin >> tempChoice;
        if (tempChoice == 1) std::cout << value << " C = " << (value * 9 / 5 + 32) << " F\n";
        else if (tempChoice == 2) std::cout << value << " F = " << (value - 32) * 5 / 9 << " C\n";
    }

    return 0;
}