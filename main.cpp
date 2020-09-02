#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Autokinitodromos.h"
#include "Oximata.h"
#include "Dikukla.h"
#include "Varia.h"
#include "Elafra.h"

using namespace std;

int main() {
	Oximata *oxima;

	Autokinitodromos autokinitodromos1;

	// Declare var time_t t  and intitialize the current date
	time_t t = time(0); 
	
	int Selection = 0, tupos = 0, w = 0, ksd;
	char Decision = ' ';
	string pikakida = " ";

	while(Decision != 'y' && Decision! = 'Y') {

		cout << "Enter the Toll number/id: ";
		cin >> ksd; // kwdikos stathou diodiwn
		if (ksd > 4 || ksd < 1) {
			cout << "Wrong Toll number. Please press Enter key and try again. ";
			system("pause > null");
			continue;
		} else {
			cout << "----" << ksd << endl;
		}


	while(Decision != 'y' && Decision != 'Y') {
		system("cls");
		/*Arxiko menou programmatos*/
		cout << "       ***********************************************************" << endl;
		cout << "       *                                                         *" << endl;
		cout << "       *                 Efarmogh Diaxeirishs Diodiwn            *" << endl;
		cout << "       *                                                         *" << endl;
		cout << "       ***********************************************************" << endl;
		cout << endl;
		cout <<"          |===================================================|"<< endl;
		cout <<"          |                   MAIN  MENU                      |"<< endl;
		cout <<"          |===================================================|"<< endl;
		cout <<"          |    Toll Number "<< ksd <<"                        |"<< endl;
		cout <<"          |---------------------------------------------------|"<< endl;
		cout <<"          |(1)      Enter  Vehicle                            |"<< endl;
		cout <<"          |---------------------------------------------------|"<< endl;
		cout <<"          |(2)      Exit Vehicle                              |"<< endl;
		cout <<"          |---------------------------------------------------|"<< endl;
		cout <<"          |(3)      Change Toll                               |"<< endl;
		cout <<"          |---------------------------------------------------|"<< endl;
		cout <<"          |(0)      Exit from the app                         |"<< endl;
		cout <<"          |---------------------------------------------------|"<< endl;
		cout <<"          |    Vehicles: " << autokinitodromos1.totaloximata() <<"                                     |"<< endl;
		cout <<"          |---------------------------------------------------|"<< endl;
		cout <<"\nPlease enter your choice: ";
		cin >> Selection;
		cout << endl;
		system("cls");

		if(Selection == 1) {
			w = 0;
			while(w == 0) {
				cout << "1) For Motorcycle, 2) For Vehicle weigth < 2.5 tones, 3) For Vehicle weight > 2.5 tones" << endl;
				cout << "Tupos Oximatos: ";
				cin >> tupos;
				if(tupos == 1) {
					oxima = new Dikukla();
					oxima->setEisodos(ksd);
					oxima->setEnter_time();
					w = 1;
				} else if(tupos == 2) {
					oxima = new Elafra();
					oxima->setEisodos(ksd);
					oxima->setEnter_time();
					w = 1;
				} else if(tupos == 3) {
					oxima = new Varia();
					oxima->setEisodos(ksd);
					oxima->setEnter_time();
					w = 1;
				} else {
					cout << endl << "Wrong choice. Press Enter to try again.";
					w = 0;
					system("pause > null");
					system("cls");
					continue;
				}
			}
			cout << "Enter vehicle plate number: ";
			cin >> pikakida;
			oxima->setar_pinakidas(pikakida);
			oxima->setEisodos(ksd);
			autokinitodromos1.addOximata(oxima);

			system("cls");
			cout << endl;
			cout <<"================================================"<<endl;
			cout <<"===              Ticket info	             ===" << endl;
			cout <<"================================================"<<endl;
			cout <<"=  Plate number: \t\t"<< oxima->getar_pinakidas() << endl;
			cout <<"= Toll number entrance: "<< oxima->getEisodos()<<endl;
			cout <<"= Date entrance: " << oxima->getEnter_time() <<endl;
			cout <<"================================================"<<endl;
			cout <<endl<< "Receipt printed succed."<<endl;
			system("pause > null1");
			system("cls");
			break;
		} else if(Selection == 2) {
			cout <<"Enter vehicle plate number: ";
			cin >> pikakida;
			oxima = autokinitodromos1.findOximata(pikakida);
			oxima->setExodos(ksd);
			oxima->setExit_time();

			system("cls");
			cout << endl;
			cout <<"================================================"<<endl;
			cout <<"===              Ticket info                 ===" << endl;
			cout <<"================================================"<<endl;
			cout <<"= Plate number: "<< oxima->getar_pinakidas()<<endl<<endl;
			cout <<"= Entrance info"<< endl<<endl;
			cout <<"= Entrance Toll: " << oxima->getEisodos()<<endl;
			cout <<"= Entrance date: " << oxima->getEnter_time() <<endl;
			cout <<"= Exit info"<< "      =" << endl;
			cout <<"= Exit Toll: " << oxima->getExodos()<<endl;
			cout <<"= Exit date: " << oxima->getExit_time()<<endl;
			cout <<"= You stay in the highway for: "<< /*apostash(oxima->getEisodos(), oxima->getExodos()) */ endl <<endl;
			cout <<"= Cost: " << oxima->poso() <<  " €"<<endl;
			autokinitodromos1.deleteOximata(pikakida);
			system("pause > null1");
			break;
			system("cls");
		} else if(Selection == 3) {
			break;
		} else if(Selection == 0) {
			cout << "The app will stop. "<< endl;
			cout << "Do you want to enter another vehicle? (y/n): ";
			cin >> Decision ;
		} else {
			system("cls");
			cout << "You entered wrong choice." << endl;
			cout << "Enter 1 or 2 or 3 or 0 for exit \n" << endl;
			cout << "Press Enter on key to continue. \n" << endl;
			system("pause > null");
		}
		system("cls");
	}
	}
}
