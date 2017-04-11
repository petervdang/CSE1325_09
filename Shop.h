#include "Order.cpp"

class Shop
{
        private:
                vector<Head> heads;
		vector<Locomotor> locomotors;
		vector<Arm> arms;
		vector<Battery> batterys;
		vector<Torso> torsos;
                vector<Robot_model> robot_models;
		vector<Customer> customers;
		vector<Sales_associate> sales_associates;

        public:
                void create_new_robot_part(vector<Robot_part>& rob);
                void create_new_robot_model();
                void create_new_customer();
                void create_new_sales_associate();
                void create_new_order();
                void save(string filename);
                void open(string filename);
                void list_Robot_Parts(int input);
		void list_Robot_Models();
		void list_Customers();
		void list_Sales_Associates();

};

