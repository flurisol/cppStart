#include <iostream>
#include <cmath>
#include <cstdlib>

int main() {

    std::cout << "MAGIC 8-BALL:\n";

    srand(time(NULL));

    int randomValue = std::rand();
    int generatedValue = randomValue % 20;

    std::string result;
    switch (generatedValue) {
        case 0:
            result = "It is certain.";
            break;
        case 1:
            result = "It is decidedly so.";
            break;
        case 2:
            result =  "Without a doubt.";
            break;
        case 3:
            result = "Yes - definitely.";
            break;
        case 4:
            result = "You may rely on it.";
            break;
        case 5:
            result = "As I see it, yes.";
            break;
        case 6:
            result = "Most likely.";
            break;
        case 7:
            result = "Outlook good.";
            break;
        case 8:
            result = "Yes.";
            break;
        case 9:
            result = "Signs point to yes.";
            break;
        case 10:
            result =  "Reply hazy, try again.";
            break;
        case 11:
            result =  "Ask again later.";
            break;
        case 12:
            result =   "Better not tell you now.";
            break;
        case 13:
            result =  "Cannot predict now.";
            break;
        case 14:
            result =  "Concentrate and ask again.";
            break;
        case 15:
            result = "Don't count on it.";
            break;
        case 16:
            result =  "My reply is no.";
            break;
        case 17:
            result =  "My sources say no.";
            break;
        case 18:
            result =  "Outlook not so good.";
            break;
        default:
            result =  "Very doubtful.";
            break;
    }
    std::cout << result;







//    std::cout << "Enter year: \n";
//    int year;
//    std::cin >> year;
//
//    std::string result;
//    if (year % 4 == 0) {
//        result = "Year is leap \n";
//    } else {
//        result = "Year is not leap \n";
//    }
//
//    std::cout << result;

//    int earth_weight, planet_number;
//    double planet_weight;
//    std::cout << "Enter your earth weight: \n";
//    std::cin >> earth_weight;
//    std::cout << "Enter planet number: \n";
//    std::cin >> planet_number;
//
//    if (planet_number == 1 || planet_number == 3 ) {
//        planet_weight = earth_weight * 0.38;
//    } else if (planet_number == 2) {
//        planet_weight = earth_weight * 0.91;
//    }  else if (planet_number == 4) {
//        planet_weight = earth_weight * 2.34;
//    }   else if (planet_number == 5) {
//        planet_weight = earth_weight * 1.06;
//    } else {
//        planet_weight = 0;
//    }
//
//    std::cout << "Your " << planet_number << " weight is: " << planet_weight;

    // switch
//    int number;
//    std::cin >> number;
//    switch(number) {
//
//        case 1 :
//            std::cout << "Bulbusaur\n";
//            break;
//        case 2 :
//            std::cout << "Ivysaur\n";
//            break;
//        case 3 :
//            std::cout << "Venusaur\n";
//            break;
//        case 4 :
//            std::cout << "Charmander\n";
//            break;
//        case 5 :
//            std::cout << "Charmeleon\n";
//            break;
//        case 6 :
//            std::cout << "Charizard\n";
//            break;
//        default :
//            std::cout << "Unknown\n";
//            break;
//
//    }
//    std::string message = "Game Over";
//
//    std::cout << message;
//    const double quarter = 0.25;
    // Piggy Bank
//    double pesos,reais,soles;
//    std::cout << "Enter number of Colombian Pesos: \n";
//    std::cout << "Enter number of Brazilian Reais: \n";
//    std::cout << "Enter number of Peruvian Soles: \n";
//    std::cin >> pesos >> reais >> soles;
//
//    double dolars_pesos,dolars_reais,dolars_soles,dolars_total,index_pesos,index_reais,index_soles;
//    index_pesos = 0.050;
//    index_reais = 0.18;
//    index_soles = 0.28 ;
//    dolars_pesos = index_pesos*pesos;
//    dolars_reais = index_reais*reais;
//    dolars_soles = index_soles*soles;
//    dolars_total = dolars_pesos + dolars_reais + dolars_soles;
//
//    std::cout << "US Dollars = $" << dolars_total;

//    // Quadratic Formula
//    double a, b, c;
//
//    std::cout << "Enter a, b, c: ";
//    std::cin >> a >> b >> c;
//
//    double d,x1,x2,n;
//    d = sqrt(b*b - 4*a*c);
//    n = -1;
//    x1 = (b*n + d)/(2*a);
//    x2 = (b*n - d)/(2*a);
//
//    std::cout << "Root 1 is: " << x1 << "\nRoot 2 is: " << x2;


// Count dog's human age
//    int currentAge;
//
//    std::cout << "Enter dog's age: ";
//    std::cin >> currentAge;
//
//    int humanAge;
//    int firstTwo = 21;
//
//    if (currentAge == 1) {
//        humanAge = firstTwo/2;
//    } else if (currentAge == 2) {
//        humanAge = firstTwo;
//    } else {
//        int index = 4;
//        humanAge = firstTwo + (currentAge - 2) * index;
//    }
//
//    std::cout << "Human age is: " << humanAge;

    // bmi calculations
//    double height, weight, bmi;
//    std::cout << "Type in your height (m): ";
//    std::cin >> height;
//    std::cout << "Type in your weight (kg): ";
//    std::cin >> weight;
//    double x2 = 2;
//    bmi = weight / (pow(height, x2));
//    std::cout << "BMI is: " << bmi;

// temperature
//    double tempf;
//    double tempc;
//
//    // Ask the user
//    std::cout << "Enter the temperature in Fahrenheit: ";
//
//    std::cin >> tempf;
//
//
//    tempc = (tempf - 32) / 1.8;
//
//    std::cout << "The temp is " << tempc << " degrees Celsius.\n";

// initials
//    std::cout << "K   K   " << "Y   Y\n" ;
//    std::cout << "K  K   " << "  Y Y\n" ;
//    std::cout << "K K   " << "    Y\n" ;
//    std::cout << "KK   " << "     Y\n" ;
//    std::cout << "K K   " << "    Y\n" ;
//    std::cout << "K  K   " << "   Y\n" ;
//    std::cout << "K   K   " << "  Y\n" ;
}
