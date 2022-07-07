#include <iostream>
#include <string>
#include "Datum.h"
#include <iomanip>
#include "Meni.h"
#include "Plata.h"
#include "Oprema.h"
#include "Skladiste.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;

struct Login {

	string username_korisnika;
	string sifra_korisnika;
	bool login_uspjesan = false;

	void login_uposlenika() {

		Login l;

		cout << endl;

		cout << endl;
		cout << endl;

		cout << "\t\t\t         ____________________ " << endl;
		cout << "\t\t\t        |                    |" << endl;
		cout << "\t\t\t        |  LOGIN UPOSLENIKA  |" << endl;
		cout << "\t\t\t        |____________________|" << endl;

		cout << endl;
		cout << endl;

	}

};

int main() {

	Login l;
	Datum datum;
	Plata adminRadnici;
	Oprema oprema;
	Radnik radnik;
	Skladiste skladiste;

	Meni pozoviMeni;

	/*datum.postaviDatum();
	datum.ispisDatum();*/

	int nastaviIzadji;

	do {

		pozoviMeni.pocetniMeni();
		cin >> nastaviIzadji;
		cin.ignore();

		if (nastaviIzadji == 1) {

			do {

				system("CLS");

				cout << "\n\n\t\t\t RENTAL PARTNER\n";
				cout << "\t\t\t  _________________________\n";
				cout << "\t\t\t |                         |\n";
				cout << "\t\t\t |  ZAPOSLENIK / KORISNIK  |\n";
				cout << "\t\t\t |_________________________|\n";

				cout << "\n\t\t\t        1 - Administracija ";
				cout << "\n\t\t\t        2 - Uposlenik ";
				cout << "\n\t\t\t        3 - Kupac ";


				cout << "\n\n\t\t\t Unesite redni broj opcije: ";
				int login;
				cin >> login;
				cin.ignore();

				int RB_opcije = 0;

				if (login == 1) {

					system("CLS");

					bool login_uspjesan = false;

					do {

						l.login_uposlenika();

						cout << "\t\t\t    Unesite korisnicko ime: ";
						cin >> l.username_korisnika;

						cout << "\n\t\t\t             Unesite sifru: ";
						cin >> l.sifra_korisnika;

						if (l.username_korisnika == "Admin" && l.sifra_korisnika == "Admin") {

							cout << "\n\n\n\n\t\t\t     ---Uspjesno ste prijavljeni---";

							l.login_uspjesan == true;

							cout << "\n\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t\t\t   za nastavak\n";
							cout << "\n\n\t\t\t\t\t\t\t";

							system("PAUSE");

							do {

								system("CLS");

								pozoviMeni.adminMeni();

								cin >> RB_opcije;
								cin.ignore();

								if (RB_opcije == 1) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  _______________\n";
									cout << "\t\t\t |               |\n";
									cout << "\t\t\t |  UNOS RADNIKA |\n";
									cout << "\t\t\t |_______________|\n";

									adminRadnici.setRadnik();

									cout << "\n\n\t\t\tRadnik uspjesno unesen u sistem!\n";

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 2) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  ________________\n";
									cout << "\t\t\t |                |\n";
									cout << "\t\t\t |  ISPIS RADNIKA |\n";
									cout << "\t\t\t |________________|\n";

									adminRadnici.ispisRadnika();

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 3) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  ______________\n";
									cout << "\t\t\t |              |\n";
									cout << "\t\t\t |  ISPIS PLATA |\n";
									cout << "\t\t\t |______________|\n";

									adminRadnici.ispisPlata();

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 4) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  __________________\n";
									cout << "\t\t\t |                  |\n";
									cout << "\t\t\t |  OTPUSTI RADNIKA |\n";
									cout << "\t\t\t |__________________|\n";

									adminRadnici.otpustiRadnika();

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 5) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  ____________\n";
									cout << "\t\t\t |            |\n";
									cout << "\t\t\t |  SKLADISTE |\n";
									cout << "\t\t\t |____________|\n";

									skladiste.prikazSkladista();

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 10) {


									pozoviMeni.krajnjiMeni();
									pozoviMeni.pocetniMeni();

									cin >> nastaviIzadji;
									cin.ignore();


								}

								system("CLS");

								cout << endl;
								cout << endl;

							} while (RB_opcije != 10);

						}

						else {

							cout << "\n\n\t\t\tPogresno korisnicko ime ili lozinka!\n";
							cout << "\n\t\t\t\tUnesite zeljenu opciju!\n";

							cout << "\n\n\t\t\t RENTAL PARTNER\n";
							cout << "\t\t\tZa novi pokusaj pritisnite 1\n";
							cout << "\t\t\tZa izlaz iz programa pritisnite 2\n";
							cout << "\t\t\tIzbor: ";

							cin >> nastaviIzadji;
							cin.ignore();

							system("PAUSE>null");
							system("CLS");

						}

					} while (!l.login_uspjesan && RB_opcije != 10 && nastaviIzadji != 2);

				}

				if (login == 2) {

					system("CLS");

					bool login_uspjesan = false;

					do {

						l.login_uposlenika();

						cout << "\t\t\t    Unesite korisnicko ime: ";
						cin >> l.username_korisnika;

						cout << "\n\t\t\t             Unesite sifru: ";
						cin >> l.sifra_korisnika;

						if (l.username_korisnika == "Uposlenik" && l.sifra_korisnika == "Uposlenik") {

							cout << "\n\n\n\n\t\t\t     ---Uspjesno ste prijavljeni---";

							l.login_uspjesan == true;

							cout << "\n\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t\t\t   za nastavak\n";

							cout << "\n\t\t\t\t\t\t\t";
							system("PAUSE");

							do {

								system("CLS");

								pozoviMeni.uposlenikMeni();

								cin >> RB_opcije;
								cin.ignore();

								if (RB_opcije == 1) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  ______________\n";
									cout << "\t\t\t |              |\n";
									cout << "\t\t\t |  UNOS OPREME |\n";
									cout << "\t\t\t |______________|\n";

									skladiste.setSpremiOpremuUSkladiste();

									cout << "\n\n\t\t\tOprema uspjesno skladistena!\n";
									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}


								if (RB_opcije == 2) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  ________________________\n";
									cout << "\t\t\t |                        |\n";
									cout << "\t\t\t |  POPUNJENOST SKLADISTA |\n";
									cout << "\t\t\t |________________________|\n";

									cout << "\n\n\n\t\t\tU skladistu se trenutno nalazi " << skladiste.getUkupanBrojOpremeNaStanju() << " stvari!\n";

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 3) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  ____________\n";
									cout << "\t\t\t |            |\n";
									cout << "\t\t\t |  SKLADISTE |\n";
									cout << "\t\t\t |____________|\n";

									skladiste.prikazSkladista();

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 4) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  ____________________________\n";
									cout << "\t\t\t |                            |\n";
									cout << "\t\t\t |  PRETRAGA PO NAZIVU OPREME |\n";
									cout << "\t\t\t |____________________________|\n";

									cout << "\n\n\n";

									skladiste.pretragaPoNazivu();

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 5) {

									system("CLS");
									cout << "\n\n\t\t\t RENTAL PARTNER\n";
									cout << "\t\t\t  ____________________________\n";
									cout << "\t\t\t |                            |\n";
									cout << "\t\t\t |  PRETRAGA PO BRENDU OPREME |\n";
									cout << "\t\t\t |____________________________|\n";

									cout << "\n\n\n";

									skladiste.pretragaPoBrendu();

									cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

									system("PAUSE>null");
									system("CLS");

								}

								if (RB_opcije == 10) {

									pozoviMeni.krajnjiMeni();
									pozoviMeni.pocetniMeni();
									cin >> nastaviIzadji;
									cin.ignore();

								}

							} while (RB_opcije != 10 && nastaviIzadji != 2);

						}

						else {

							cout << "\n\n\t\t\tPogresno korisnicko ime ili lozinka!\n";
							cout << "\n\t\t\t\tUnesite zeljenu opciju!\n";

							cout << "\n\n\t\t\t RENTAL PARTNER\n";
							cout << "\t\t\tZa novi pokusaj pritisnite 1\n";
							cout << "\t\t\tZa izlaz iz programa pritisnite 2\n";
							cout << "\t\t\tIzbor: ";

							cin >> nastaviIzadji;
							cin.ignore();

							system("PAUSE>null");
							system("CLS");

						}

					} while (!l.login_uspjesan && RB_opcije != 10 && nastaviIzadji != 2);


				}

				if (login == 3) {


					system("CLS");



					do {

						system("CLS");

						pozoviMeni.kupacMeni();

						cin >> RB_opcije;
						cin.ignore();

						if (RB_opcije == 1) {

							system("CLS");
							cout << "\n\n\t\t\t RENTAL PARTNER\n";
							cout << "\t\t\t  _________\n";
							cout << "\t\t\t |         |\n";
							cout << "\t\t\t | KATALOG |\n";
							cout << "\t\t\t |_________|\n";

							cout << "\n";

							skladiste.prikazSkladista();

							cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

							system("PAUSE>null");
							system("CLS");

						}

						if (RB_opcije == 2) {

							system("CLS");
							cout << "\n\n\t\t\t RENTAL PARTNER\n";
							cout << "\t\t\t  ____________________________\n";
							cout << "\t\t\t |                            |\n";
							cout << "\t\t\t |  PRETRAGA PO NAZIVU OPREME |\n";
							cout << "\t\t\t |____________________________|\n";

							cout << "\n\n\n";

							skladiste.pretragaPoNazivu();

							cout << "\n\n\t\t\tOprema uspjesno skladistena!\n";
							cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

							system("PAUSE>null");
							system("CLS");

						}


						if (RB_opcije == 3) {

							system("CLS");
							cout << "\n\n\t\t\t RENTAL PARTNER\n";
							cout << "\t\t\t  ____________________________\n";
							cout << "\t\t\t |                            |\n";
							cout << "\t\t\t |  PRETRAGA PO BRENDU OPREME |\n";
							cout << "\t\t\t |____________________________|\n";

							cout << "\n\n\n";
							
							skladiste.pretragaPoNazivu();

							cout << "\n\n\t\t\tOprema uspjesno skladistena!\n";
							cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

							system("PAUSE>null");
							system("CLS");

						}

						if (RB_opcije == 4) {

							system("CLS");
							cout << "\n\n\t\t\t RENTAL PARTNER\n";
							cout << "\t\t\t  ___________\n";
							cout << "\t\t\t |           |\n";
							cout << "\t\t\t |  NARUDZBA |\n";
							cout << "\t\t\t |___________|\n";

							skladiste.prikazSkladista();

							cout << "\n\n";

							skladiste.uzmiIzSkladista();

							skladiste.fiskalni_racun();
							
							cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

							system("PAUSE>null");
							system("CLS");

						}

						if (RB_opcije == 5) {

							system("CLS");
							cout << "\n\n\t\t\t RENTAL PARTNER\n";
							cout << "\t\t\t  _________________\n";
							cout << "\t\t\t |                 |\n";
							cout << "\t\t\t |  FISKALNI RACUN |\n";
							cout << "\t\t\t |_________________|\n";

							cout << "\n\n";

							skladiste.prikaziFiskalniRacun();

							cout << "\n\n\t\tRacun mozete preuzeti na kasi!\n";

							cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

							system("PAUSE>null");
							system("CLS");

						}
						
						if (RB_opcije == 6) {

							system("CLS");
							cout << "\n\n\t\t\t RENTAL PARTNER\n";
							cout << "\t\t\t  ___________\n";
							cout << "\t\t\t |           |\n";
							cout << "\t\t\t |  FEEDBACK |\n";
							cout << "\t\t\t |___________|\n";

							cout << "\n\n";

							pozoviMeni.feedbackMenu();

							cout << "\n\n\t\tRacun mozete preuzeti na kasi!\n";

							cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povratak u glavni izbornik\n";

							system("PAUSE>null");
							system("CLS");

						}

						if (RB_opcije == 10) {

							pozoviMeni.krajnjiMeni();
							pozoviMeni.pocetniMeni();

							cin >> nastaviIzadji;
							cin.ignore();

						}

						system("CLS");

						cout << endl;
						cout << endl;

					} while (nastaviIzadji != 2);

				}


			} while (nastaviIzadji != 2);

		}

		else {


			pozoviMeni.krajnjiMeni();

			EXIT_SUCCESS;
		}

	} while (nastaviIzadji != 2);


}

