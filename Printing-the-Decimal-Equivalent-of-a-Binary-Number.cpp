/*18. 4.28 (Printing the Decimal Equivalent of a Binary Number) Input an integer 
containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. 
Use the remainder and division operators to pick off the “binary” number’s digits one 
at a time from right to left. Much as in the decimal number system, where the rightmost 
digit has a positional value of 1, the next digit left has a positional value of 10, 
then 100, then 1000, and so on, in the binary number system the rightmost digit has a 
positional value of 1, the next digit left has a positional value of 2, then 4, then 8, 
and so on(c++ how to program)*/

#include<iostream>
using namespace std ;

int main(){

    int number (0) , thousands(0) , hundreds(0),dozens(0),ones(0) , decimal(0);

    cout << "\nEnter number :" ;
    cin >>number ;

    thousands =  number/ 1000 ;
    hundreds  = (number % 1000) /100 ;
    dozens    = (number % 100)  /10  ;
    ones      = number % 10 ;

    if(thousands ==1){
        thousands*= 8 ;
    }
    if(hundreds == 1){
        hundreds*= 4;
    }
    if(dozens == 1){
        dozens*= 2 ;
    }
    if(ones == 1){
        ones*=1 ;
    }
    decimal = thousands + hundreds + dozens + ones ;
    cout << "The Decimal Equivalent of a Binary Number: " << decimal << endl <<endl ;
}