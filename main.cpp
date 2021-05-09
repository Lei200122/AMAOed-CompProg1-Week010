/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <iostream>
#include "leggedMammal.h"

#define _LEGS 4
#define _FUR "Thick"
#define _TAIL true

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {

    leggedMammal details (_LEGS, _FUR, _TAIL);

    cout<<"Mammal: Polar Bear"<<details.getleggedMammal()<<endl;

    system ("pause");
    return 0;
}
