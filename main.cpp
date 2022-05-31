// Currys Shopping program.
// Customer allowed to purchase multiple products from the selected products.
// They will have a budget to spend
// Throughout the program the customer will be able to also remove products from basket.

#include <iostream>
#include <vector>

void storeSections();

void greeting(){
	std::string username;

	std::cout << "Please enter your name : ";
	std::cin >> username;

	std::cout << "\n\nHello, " << username << "! Welcome to Currys!\n";
	std::cout << "I'll give you a couple of minutes to browse our store.\n";
	std::cout << "If you need any help give me a shout else i'll check up \n";
	std::cout << "on you in a couple of minutes.\n";
};

void tvDepartment(){
		int option = 0;

		std::cout << "\n\nWelcome to the Television Department!\n";
		std::cout << "We've got some amazing Televisions on offer!\n";
		std::cout << "Would you like to:\n";
		std::cout << "[1] : See our SELECTION of TV's\n";
		std::cout << "[2] : Speak to an EXPERT\n";
		std::cout << "[3] : Return to SELECTION.\n";
		std::cout << "PLEASE ENTER YOUR OPTION : ";
		std::cin >> option;


		if(option == 1){
			std::cout << "\n\n OK OK OK OK\n";
		} else if(option == 2){
			std::cout << "\n\n NO NO NO NO\n";
		} else if(option == 3){
			storeSections();
		} else {
			std::cout << "Invalid Input\n";
		}
};

void compDepartment(){
	std::cout << "\n\nWelcome to the Computer Department!\n";
};
void mdaDepartment(){
	std::cout << "\n\nWelcome to the Kitchen Department!\n";
};

void storeSections(){
	int option = 0;

	std::cout << "\n\nSELECT PART OF THE STORE YOU'D LIKE TO BROWSE:\n";
	std::cout << "[1] : Televisions\n";
	std::cout << "[2] : Computers\n";
	std::cout << "[3] : Kitchen Appliances\n";
	std::cout << "PLEASE ENTER YOUR OPTION : ";
	std::cin >> option;

	if(option == 1){
		tvDepartment();
	} else if(option == 2){
		compDepartment();
	} else if(option == 3){
		mdaDepartment();
	} else {
		std::cout << "\n\nI'm sorry but this Department doesn't exhist...\n";
	}

};

void removeProduct();
void addProduct();
void budget();
void basket();

int main(){

	greeting();
	storeSections();
	return 0;
}