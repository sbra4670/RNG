//
//  RandomNumber.cpp
//  RNG
//
//  Created by Bravo, Sebastian on 4/18/18.
//  Copyright © 2018 Bravo, Sebastian. All rights reserved.
//

#include "RandomNumber.hpp"

void RandomNumberGen :: start()
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


