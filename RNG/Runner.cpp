//
//  Runner.cpp
//  RNG
//
//  Created by Bravo, Sebastian on 4/18/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(void)
{
    int random_number = rand();
    int secret_code = random_number;
    
    int input;
    
    cout << "input the secret code:" << endl;
    cin >> input;
    
    if (input != secret_code)
    {
        cout << "Access Denied." << endl;
    }
    
    else
    {
        cout << "Access Granted." << endl;
    }
}
