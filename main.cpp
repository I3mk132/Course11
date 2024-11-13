// =========================================== ( Project 1 ) ==================================================
// Utility Library
/*
#include <iostream>
#include "clsUtil.h"

using namespace std;

int main(){
    clsUtil::Srand();
    cout << clsUtil::RandomNumber(1, 10) << endl;
    cout << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter) << endl;
    cout << clsUtil::GenerateWord(clsUtil::MixChars, 8) << endl;
    cout << clsUtil::GenerateKey(clsUtil::MixChars) << endl;
    clsUtil::GenerateKeys(10, clsUtil::MixChars);

    cout << "\n";

    //Swap Int
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    clsUtil::Swap(x, y);
    cout << x << " " << y << endl << endl;

    //Swap double
    double a = 10.5, b = 20.5;
    cout << a << " " << b << endl;
    clsUtil::Swap(a, b);
    cout << a << " " << b << endl << endl;

    //Swap String
    string s1 = "Ali", s2 = "Ahmed";
    cout << s1 << " " << s2 << endl;
    clsUtil::Swap(s1, s2);
    cout << s1 << " " << s2 << endl << endl;

    //Swap Dates
    clsDate d1(1, 10, 2022), d2(1, 1, 2022);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;
    clsUtil::Swap(d1, d2);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;

    //Shuffle Array

    //int array
    int Arr1[5] = { 1,2,3,4,5 };
    clsUtil::ShuffleArray(Arr1, 5);
    cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr1[i] << endl;
    }

    //string array
    string Arr2[5] = { "Ali","Fadi","Ahmed","Qasem","Khalid" };
    clsUtil::ShuffleArray(Arr2, 5);
    cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr2[i] << endl;
    }

    int Arr3[5];
    clsUtil::FillArrayWithRandomNumbers(Arr3, 5, 20, 50);
    cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr3[i] << endl;
    }


    string Arr4[5];
    clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChars, 8);
    cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr4[i] << endl;
    }


    string Arr5[5];
    clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChars);
    cout << "\nArray after filling keys:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr5[i] << endl;
    }

    cout << "\nText1 " << clsUtil::Tabs(5) << "Text2\n";

    const short EncryptionKey = 2; //this is the key.

    string TextAfterEncryption, TextAfterDecryption;
    string Text = "Mohammed Abu-Hadhoud";
    TextAfterEncryption = clsUtil::EncryptText(Text, EncryptionKey);
    TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : ";
    cout << Text << endl;
    cout << "Text After Encryption  : ";
    cout << TextAfterEncryption << endl;
    cout << "Text After Decryption  : ";
    cout << TextAfterDecryption << endl;

    system("pause>0");

    return 0;
}
 */


/// ========================================== ( Project 2 ) ================================================
/// Input & Validate Library
/*
#include <iostream>
#include "clsInputValidate.h"

using namespace std;

int main()

{
    cout << clsInputValidate::isNumberBetween(5, 1, 10) << endl;
    cout << clsInputValidate::isNumberBetween(5.5, 1.3, 10.8) << endl;

    cout << clsInputValidate::isDateBetween(clsDate(),
                                            clsDate(8,12,2022),
                                            clsDate(31, 12, 2022)) << endl;

    cout << clsInputValidate::isDateBetween(clsDate(),
                                            clsDate(31, 12, 2022),
                                            clsDate(8, 12, 2022)) << endl;

    cout << "\nPlease Enter a Number:\n";
    int x= clsInputValidate::ReadIntNumber("Invalid Number, Enter again:\n");
    cout << "x=" << x;

    cout << "\nPlease Enter a Number between 1 and 5:\n";
    int y = clsInputValidate::ReadIntNumberBetween(1,5,"Number is not within range, enter again:\n");
    cout << "y=" << y;

    cout << "\nPlease Enter a Double Number:\n";
    double a = clsInputValidate::ReadDblNumber("Invalid Number, Enter again:\n");
    cout << "a=" << a;

    cout << "\nPlease Enter a Double Number between 1 and 5:\n";
    double b = clsInputValidate::ReadDblNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "b=" << b;

    cout << endl << clsInputValidate::isValidDate(clsDate(30,12,2022)) << endl;

    system("pause>0");

    return 0;
}
*/



/// ========================================== ( Project 3 ) ================================================
/// Bank System Project
/*
#include <iostream>
#include "Screens/Login/clsLoginScreen.h"

int main() {

    bool PlayAgain = true;
    while (PlayAgain){
        PlayAgain = clsLoginScreen::ShowLoginScreen();
    }

    return 0;
}
*/



/// ========================================== ( Project 4 ) ================================================
/// Currency Exchange Project
/*
#include "Screens/Login/clsLoginScreen.h"
#include <iostream>

int main(){

    bool PlayAgain = true;
    while (PlayAgain){
        PlayAgain = clsLoginScreen::ShowLoginScreen();
    }

    return 0;
}
*/



/// Template Functions
// syntax:   template <typename Var1> Var1 Func(parameters){}
/*
#include <iostream>

template<typename T> T Max(T Number1, T Number2){
    return (Number1 > Number2) ? Number1 : Number2;
}

int main(){

    std::cout << Max<short>(3, 7) << std::endl;
    std::cout << Max<double>(2.4, 2.9) << std::endl;
    std::cout << Max<char>('a', 'c') << std::endl;
    std::cout << Max(2, 6) << std::endl;

    return 0;
}
 */



/// Template Class
// syntax:   template <typename Var1>
// class ClassName { Var1 name, Var2 name... (Members or Methods)}
/*
#include <iostream>

template<typename T>
class clsCalculator {
private:
    T Number1, Number2;

public:

    clsCalculator(T Number1, T Number2){
        this->Number1 = Number1;
        this->Number2 = Number2;
    }

    void PrintResults(){
        std::cout << "\nNumbers: " << Number1 << " and " << Number2 << ".\n";
        std::cout << Number1 << " + " << Number2 << " = " << Add() << std::endl;
        std::cout << Number1 << " - " << Number2 << " = " << Subtract() << std::endl;
        std::cout << Number1 << " * " << Number2 << " = " << Multiply() << std::endl;
        std::cout << Number1 << " / " << Number2 << " = " << Divide() << std::endl;
    }

    T Add(){
        return Number1 + Number2;
    }

    T Subtract(){
        return Number1 - Number2;
    }

    T Multiply(){
        return Number1 * Number2;
    }

    T Divide(){
        return Number1/Number2;
    }
};

int main(){
    clsCalculator<int> intCalc(2, 10);
    clsCalculator<float> floatCalc(2.0, 4.3);

    std::cout << "int Results: " << std::endl;
    intCalc.PrintResults();

    std::cout << std::endl;
    std::cout << "Float Results: " << std::endl;
    floatCalc.PrintResults();

    return 0;
}
 */




/// Homework
// Edit clsInputValidation
/*
#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main(){
    cout << clsInputValidate<float>::isNumberBetween(5.5, 5.1, 5.6) << endl;

    cout << clsInputValidate<int>::isNumberBetween(5, 10, 5) << endl;

    cout << clsInputValidate<double>::isNumberBetween(5.5f, 5.1f, 5.6f) << endl;

    cout << "_________________________________________________________________________________\n";


    cout << "Please Enter Double Number?: " << endl;
    double numberD = clsInputValidate<double>::ReadNumber();
    cout << numberD << endl;

    cout << "please Enter Float Number?: " << endl;
    float numberF = clsInputValidate<float>::ReadNumber();
    cout << numberF << endl;

    cout << "Please Enter Short Number?:" << endl;
    short numberS = clsInputValidate<short>::ReadNumber();
    cout << numberS << endl;

    cout << "Please Enter Integer Number?: " << endl;
    int numberI = clsInputValidate<int>::ReadNumber();
    cout << numberI <<  endl;

    cout << "Please Enter Character?" << endl;
    char numberC = clsInputValidate<char>::ReadNumber();
    cout << numberC <<  endl;

    cout << "Please Enter Boolean Number?: " << endl;
    bool numberB = clsInputValidate<bool>::ReadNumber();
    cout << numberB << endl;

    cout << "_________________________________________________________________________________\n";


    cout << "Please Enter Double Number Between 10.5 and 1000.5? :" << endl;
    double numberdr = clsInputValidate<double>::ReadNumberBetween(10.5, 1000.5);
    cout << numberdr << endl;

    cout << "Please Enter Float Number Between 10.1 and 100.1: " << endl;
    float numberfr = clsInputValidate<float>::ReadNumberBetween(10.1, 100.1);
    cout << numberfr << endl;

    cout << " please Enter Short Number 10 and 100?: " << endl;
    short numbersr = clsInputValidate<short>::ReadNumberBetween(10, 100);
    cout << numbersr << endl;

    cout << "Please Enter Integer Number 10 and 1000?: " << endl;
    int numberir = clsInputValidate<int>::ReadNumberBetween(10, 1000);
    cout << numberir << endl;

    cout << "Please Enter Character A and s?: " << endl;
    char numberer = clsInputValidate<char>::ReadNumberBetween('A', 'S');
    cout << numberer << endl;

    system("pause>0");

    return 0;
}
 */