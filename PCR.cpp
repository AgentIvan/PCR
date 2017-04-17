#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    while (1) 
    {
        int myShipCount; // the number of remaining ships
        cin >> myShipCount; cin.ignore();
        int entityCount; // the number of entities (e.g. ships, mines or cannonballs)
        cin >> entityCount; cin.ignore();
       
        int X = 11, Y = 10;
        
        for (int i = 0; i < entityCount; i++) 
        {
            int entityId;
            string entityType;
            int x;
            int y;
            int arg1;
            int arg2;
            int arg3;
            int arg4;
            cin >> entityId >> entityType >> x >> y >> arg1 >> arg2 >> arg3 >> arg4; cin.ignore();
            
            if(entityType == "BARREL")
            {
                X = x;
                Y = y;
            }
        }
        
        for (int i = 0; i < myShipCount; i++) 
        {
            cout << "MOVE " << X << " " << Y << endl;
        }
    }
}
