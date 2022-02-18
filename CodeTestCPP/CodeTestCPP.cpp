#include <iostream>
#include <bitset>
using namespace std;



int main()
{
     //Расширение знака

    signed char c = -10; //от -128 до 127    в 1 байте(тк char), -1 это 0xFF и при перекладывании в 4 байтовый int, происходит
    unsigned int i = c; //от 0 до 65535     расширение знака - 0xFFFF FFFF. Тоесть он -1 превращает в большой -1.
    signed int i2 = c; //от –32768 до 32767  
    /*
    Тоесть он -1 превращает в большой -1, а мы то принимаем в беззнаковый. Тоесть нам кажется что если мы кладем 0xFF, 
    то там будет вот так 0x0000 00FF, а на самом деле, будет так 0xFFFF FFFF (тоесть большой -1)! Тоесть протянет знак!
    */
    wcout << dec << c << endl;   //вывод -1
    wcout << dec << i << endl;   //вывод 429 496 295, интерпритирует тк у него нет такого значения, тк он unsigned
    wcout << dec << i2 << endl;  //вывод -1
    wcout << hex << c << endl; //вывод 0xFFFF FFFF
    wcout << hex << i << endl; //вывод 0xFFFF FFFF
    wcout << hex << i2 << endl;//вывод 0xFFFF FFFF
    wcout << bitset<sizeof(c) * 8>(c) << endl;
    wcout << bitset<sizeof(i) * 8>(i) << endl;  //тут интерпритирует
    wcout << bitset<sizeof(i2) * 8>(i2) << endl;

    wcout << "-------------------------------" << endl;

    //а с беззнаковым unsigned char такого не проихойдет, тк не нужно будет протягивать знак и он просто переложит 255.
    unsigned char h = -1; //от 0 до 255
    unsigned int k = h;   //от 0 до 65535
    wcout << dec << h << endl; //вывод 255
    wcout << dec << k << endl; //вывод 255
    wcout << hex << h << endl; //вывод 0x000000FF
    wcout << hex << k << endl; //вывод 0x000000FF

    wcout << "-------------------------------" << endl;
    /*
    Изначально проблемы со знаковостью типа char, когда он имеет спецификатор signed. Это приводит к трудностям
    когда когда char (используемая как byte) применяется в арифметических преобразованиях, в которых мы должны
    ее интерпритировать как число!

    ЕСЛИ переменная типа char имеет знак, то ее присваивание типу большего размера приведет к переносу знакового
    бита на дополнительные биты.
    Если 8 битовое значение типа char равно 0хFF, то в операция преобразования в целые числа, н/п в 32-битовое
    целое число без знака(тоесть signed char в unsigned int), результотом будет 0xFFFF FFFF (тоесть большой -1)! 
    Тоесть -1 для целого типа со знаком или 429 496 295 для целого типа без знака!

    А если char не имеет знака (unsigned char), то в результате того же самого присваивания получится 0x000000FF,
    тоесть 255 вне зависимости от знака целого числа.
    */
    

    wcout << "----------------My tests---------------" << endl;
    wcout << "----signed char---to---unsigned int----" << endl;
    signed char g1 = -56;  //1 байт: от -128 до 127
    unsigned int g2 = g1;  //при 2 байтах: от 0 до 65535;    при 4 байтах: от 0 до 4 294 967 295
    wcout << dec << g1 << endl; 
    wcout << dec << g2 << endl; //при -1 в char, тут вывод 4 294 967 295, косяк тк кладем из signed в unsigned(ушли в круг)
    wcout << hex << g1 << endl; 
    wcout << hex << g2 << endl; 
    wcout << bitset<sizeof(g1) * 8>(g1) << endl; //1 байт
    wcout << bitset<sizeof(g2) * 8>(g2) << endl; //4 байта

    wcout << "----signed char---to---signed int----" << endl;
    signed int g3 = g1; //при 2 байтах: от –32 768 до 32 767;    при 4 байтах: от −2 147 483 648 до 2 147 483 647
    wcout << dec << g3 << endl; //тут все хорошо тк кладем signed в signed 
    wcout << hex << g3 << endl; 
    wcout << bitset<sizeof(g3) * 8>(g3) << endl;



    wcout << "-------------------------------" << endl;


    /*
    wcout << "----signed char---to---unsigned char----" << endl;
    signed char g10 = -128; //1 байт: от -128 до 127
    unsigned long int g20 = g1; //4 байта: от 0 до 4 294 967 295
    wcout << dec << g10 << endl; //вывод 
    wcout << dec << g20 << endl; //вывод 4294967168 тут косяк тк кладем из signed в unsigned
    wcout << hex << g10 << endl; //вывод 
    wcout << hex << g20 << endl; //вывод 
    wcout << bitset<sizeof(g10) * 8>(g10) << endl;
    wcout << bitset<sizeof(g20) * 8>(g20) << endl;

    wcout << "----signed char---to---signed long int----" << endl;
    signed long int g30 = g1; //от -2 147 483 647 до 2 147 483 647 
    wcout << dec << g30 << endl; //вывод 
    wcout << hex << g30 << endl; //вывод 
    wcout << bitset<sizeof(g30) * 8>(g30) << endl;
    */








}

