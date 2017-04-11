#include "Shop.h"

void Shop :: create_new_robot_part(vector<Robot_part>& rob)
{
        string name;
        int model_number;
        string type;
        double cost;
        string description;
        string buffer;
        double power;
        double max_power;
        double power_available;
        double max_energy;
        int battery_compartments;
        int max_arms;

        cout << "Name?" << endl;
        getline(cin,name);
        cout << "Model Number?" << endl;
        getline(cin,buffer);
        model_number = atoi(buffer.c_str());
        cout << "Type?" << endl;
        getline(cin,type);
        cout << "Cost" << endl;
        getline(cin,buffer);
        cost = atof(buffer.c_str());
        cout << "Description" << endl;
        getline(cin,description);

        if (type == "head" || type == "Head")
        {
                cout << "What is the power?" << endl;
                getline(cin,buffer);
                power = atof(buffer.c_str());

                while (power < 0)
                {
                        cout << "Not Valid" << endl;
                        cout << "What is the power?" << endl;
                        getline(cin,buffer);
                        power = atof(buffer.c_str());
                }

		Head head(name,model_number,cost,description,power);
                heads.push_back(head);
        }

        if (type == "Locomotor" || type == "locomotor")
        {
                cout << "What is the Max Power?" << endl;
                getline(cin,buffer);
                max_power = atof(buffer.c_str());

                while (max_power < 0)
                {
                        cout << "Not Valid" << endl;
                        cout << "What is the Max Power?" << endl;
                        getline(cin,buffer);
                        max_power = atof(buffer.c_str());
                }

                        Locomotor locomotor(name,model_number,cost,description,max_power);
                        locomotors.push_back(locomotor);

        }

        if (type == "Torso" || type == "torso")
        {
                cout << "How many Battery Compartments" << endl;
                getline(cin,buffer);
                battery_compartments = atoi(buffer.c_str());

                while (battery_compartments < 1 || battery_compartments > 3)
                {
                        cout << "Not Valid Answer" << endl;
                        cout << "How many Battery Compartments" << endl;
                        getline(cin,buffer);
                        battery_compartments = atoi(buffer.c_str());
                }

                cout << "How many Maximum Arms?" << endl;
                getline(cin,buffer);
                max_arms = atoi(buffer.c_str());

                while (max_arms < 0 || max_arms > 2)
                {
                        cout << "Not Valid" << endl;
                        cout << "How many Maximum Arms?" << endl;
                        getline(cin,buffer);
                        max_arms = atoi(buffer.c_str());
                }

		Torso torso(name,model_number,cost,description,max_arms,battery_compartments);
		torsos.push_back(torso);
        }

        if (type == "Battery" || type == "battery")
        {
                cout << "What is the Power Available?" << endl;
                getline(cin,buffer);
                power_available = atof(buffer.c_str());

                while (power_available < 0)
                {
                        cout << "Not Valid" << endl;
                        cout << "What is the Power Available?" << endl;
                        getline(cin,buffer);
                        power_available = atof(buffer.c_str());
                }

                cout << "What is the Maximum Energy?" << endl;
                getline(cin,buffer);
                max_power = atof(buffer.c_str());

                while (max_power < 0)
                {
                        cout << "Not Valid" << endl;
                        cout << "What is the Maximum Energy?" << endl;
                        getline(cin,buffer);
                        max_power = atof(buffer.c_str());

                }

		Battery battery(name,model_number,cost,description,max_energy,power_available);
		batterys.push_back(battery);

        }

        if (type == "Arm" || type == "arm")
        {
                cout << "What is the Maximum Power?" << endl;
                getline(cin,buffer);
                max_power = atof(buffer.c_str());

                while (max_power < 0)
                {
                        cout << "Not Valid" << endl;
                        cout << "What is the Maximum Power?" << endl;
                        getline(cin,buffer);
                        max_power = atof(buffer.c_str());
                }
        	Arm arm(name,model_number,cost,description, max_power);
	        arms.push_back(arm);

        }
}





void Shop :: list_Robot_Parts(int input)
{
        int j = 1;

                if (input == 1)
                {
			for (int i = 0; i < heads.size(); i++)
			{
                                cout << j << ")" << endl;
                                cout << "HEAD:         " << endl;
                                cout << "Name:         " << heads[i].name() << endl;
                                cout << "Model Number: " << heads[i].model_number() << endl;
                                cout << "Cost:         " << heads[i].cost() << endl;
                                cout << "Description:  " << heads[i].description() << endl;
                                cout << "Power:        " << heads[i].power() << endl << endl;

                                j++;
			}
                }

                if (input == 2)
                {
                       	for (int i = 0; i < locomotors.size(); i++)
			{
		        	cout << j << ")" << endl;
                		cout << "LOCOMOTOR:    " << endl;
                		cout << "Name:         " << locomotors[i].name() << endl;
                		cout << "Model Number: " << locomotors[i].model_number() << endl;
                		cout << "Cost:         " << locomotors[i].cost() << endl;
                		cout << "Description:  " << locomotors[i].description() << endl;
                		cout << "Max Power:    " << locomotors[i].max_power() << endl;


                        	j++;
			}
                }

                if (input == 3)
                {
                        for (int i = 0; i < torsos.size(); i++)
                        {
                		cout << j << ")" << endl;
                		cout << "TORSO:                 " << endl;
                		cout << "Name:                  " << torsos[i].name() << endl;
                		cout << "Model Number:          " << torsos[i].model_number() << endl;
                		cout << "Cost:                  " << torsos[i].cost() << endl;
                		cout << "Description:           " << torsos[i].description() << endl;
        	       	 	cout << "Max Arms:              " << torsos[i].max_arms() << endl;
	               		cout << "Battery_compartments:  " << torsos[i].battery_compartments() << endl << endl;
	
                                j++;
                        }
                }

                if (input == 4)
                {
                        for (int i = 0; i < arms.size(); i++)
                        {
                                cout << "ARM:          " << endl;
                                cout << "Name:         " << arms[i].name() << endl;
                                cout << "Model Number: " << arms[i].model_number() << endl;
                                cout << "Cost:         " << arms[i].cost() << endl;
                                cout << "Description:  " << arms[i].description() << endl;
                                cout << "Max Power:    " << arms[i].maxpower() << endl << endl;

                                j++;
                        }
                }

                if (input == 5)
                {
                        for (int i = 0; i < batterys.size(); i++)
                        {
                                cout << "BATTERY:          " << endl;
                                cout << "Name:             " << batterys[i].name() << endl;
                                cout << "Model Number:     " << batterys[i].model_number() << endl;
                                cout << "Cost:             " << batterys[i].cost() << endl;
                                cout << "Description:      " << batterys[i].description() << endl;
                                cout << "Power Available:  " << batterys[i].power_available() << endl;
                                cout << "Max Energy:       " << batterys[i].max_energy() << endl;

                                j++;
                        }
                }
        


}



void Shop :: create_new_robot_model()
{
        int j = 1;
        int k = 1;

	if (heads.size() == 0 || locomotors.size() == 0 || torsos.size() == 0 || arms.size() == 0 || batterys.size() == 0)
	{
                cout << "Not enough Components" << endl << endl;
                return;
	}


        cout << "What is the Model Name:  ";
        string name;
        getline(cin,name);

        cout << "What is the Model Number:  ";
        int model_number;
        cin >> model_number;
        cin.ignore();

        cout << "Select a Torso" << endl;

	for (int i = 0; i < torsos.size(); i++)
	{
                cout << j << ")" << endl;
                cout << "TORSO:                 " << endl;
                cout << "Name:                  " << torsos[i].name() << endl;
                cout << "Model Number:          " << torsos[i].model_number() << endl;
                cout << "Cost:                  " << torsos[i].cost() << endl;
                cout << "Description:           " << torsos[i].description() << endl;
                cout << "Max Arms:              " << torsos[i].max_arms() << endl;
                cout << "Battery_compartments:  " << torsos[i].battery_compartments() << endl << endl;
		
		j++;
	}

	int torso;	//torso Number
	cout << "Input:   ";
	cin >> torso;
	cin.ignore();
	cout << endl;
	torso--;	//increment down for the vector order


	
	j = 1;
        cout << "Select a Head" << endl;

	for (int i = 0; i < heads.size(); i++)
	{
		cout << j << ")" << endl;
		cout << "HEAD:         " << endl;
		cout << "Name:         " << heads[i].name() << endl;
		cout << "Model Number: " << heads[i].model_number() << endl;
		cout << "Cost:         " << heads[i].cost() << endl;
		cout << "Description:  " << heads[i].description() << endl;
		cout << "Power:        " << heads[i].power() << endl;

		j++;
	}


        int head;              // head Number
        cout << "Input:  ";
        cin >> head;
        cin.ignore();
        cout << endl;
	head--;



        j = 1;
        cout << "Select a Locomotor" << endl;

        for (int i = 0; i < locomotors.size(); i++)
        {
                cout << j << ")" << endl;
                cout << "LOCOMOTOR:    " << endl;
                cout << "Name:         " << locomotors[i].name() << endl;
                cout << "Model Number: " << locomotors[i].model_number() << endl;
                cout << "Cost:         " << locomotors[i].cost() << endl;
                cout << "Description:  " << locomotors[i].description() << endl;
                cout << "Max Power:    " << locomotors[i].max_power() << endl;

                j++;
        }


        int locomotor;              // locomotor Number
        cout << "Input:  ";
        cin >> locomotor;
        cin.ignore();
        cout << endl;
        locomotor--;


        j = 1;
        cout << "Select an Arm" << endl;

        for (int i = 0; i < arms.size(); i++)
        {
                cout << j << ")" << endl;
                cout << "ARM:         " << endl;
                cout << "Name:         " << arms[i].name() << endl;
                cout << "Model Number: " << arms[i].model_number() << endl;
                cout << "Cost:         " << arms[i].cost() << endl;
                cout << "Description:  " << arms[i].description() << endl;
                cout << "Max Power:    " << arms[i].maxpower() << endl;

                j++;
        }


        int arm;              // head Number
        cout << "Input:  ";
        cin >> arm;
        cin.ignore();
        cout << endl;
        arm--;


        j = 1;
        cout << "Select a Head" << endl;

        for (int i = 0; i < heads.size(); i++)
        {
                cout << j << ")" << endl;
                cout << "BATTERY:           " << endl;
                cout << "Name:              " << batterys[i].name() << endl;
                cout << "Model Number:      " << batterys[i].model_number() << endl;
                cout << "Cost:              " << batterys[i].cost() << endl;
                cout << "Description:       " << batterys[i].description() << endl;
		cout << "Max Energy:        " << batterys[i].max_energy() << endl;
                cout << "Power Available:   " << batterys[i].power_available() << endl;

                j++;
        }


        int battery;              // battery Number
        cout << "Input:  ";
        cin >> battery;
        cin.ignore();
        cout << endl;
        battery--;


	Torso t = torsos[torso];
	Head h = heads[head];
	Locomotor l = locomotors[locomotor];
	Arm a = arms[arm];
	Battery b = batterys[battery];

	Robot_model robot_models(name,model_number,t,h,l,a,b);
	
}


void Shop :: list_Robot_Models()
{
	int j = 1;

	for (int i = 0; i < robot_models.size(); i++)
	{
                cout << j << ")" << endl;
		cout << "Robot Name:           " << robot_models[i].name() << endl;
		cout << "Robot Model Number:   " << robot_models[i].model_number() << endl << endl;

		j++;
	}
}






















