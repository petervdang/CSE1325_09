#include "Shop.cpp"


using namespace std;
vector<Robot_part> rob;
Shop shop;




int main()
{
      int input;

        cout << "What Do You Want To Do:" << endl;
        cout << "0) Exit" << endl;
        cout << "1) Create Robot Part" << endl;
        cout << "2) List Robot Parts" << endl;
        cout << "3) Create Robot Model" << endl;
	cout << "4) List Robot Models" << endl;
        cin >> input;
        cin.ignore();
        cout << endl;

        while (input != 0)
        {
                if (input == 1)
                {
                        shop.create_new_robot_part(rob);
                        cout << endl;
                }

                if (input == 2)
                {


                        cout << "1) Head\n2) Locomotor\n3) Torso\n4) Arm\n5) Battery" << endl;
                        cin >> input;
                        cin.ignore();
                        if (input < 1 || input > 5) break;
                        cout << endl;

                        shop.list_Robot_Parts(input);
                        cout << endl;

		}


		if (input == 3)
                {
                        cout << endl;
                        shop.create_new_robot_model();
                        cout << endl;
                }

		if (input == 4)
		{
			cout << endl;
			shop.list_Robot_Models();
			cout << endl;
		}

                cout << "What Do You Want To Do:" << endl;
                cout << "0) Exit" << endl;
                cout << "1) Create Robot Part" << endl;
                cout << "2) List Robot Parts" << endl;
                cout << "3) Create Robot Model" << endl;
		cout << "4) List Robot Models" << endl;
                cin >> input;
                cin.ignore();
                cout << endl;

        }

        return 0;
}

