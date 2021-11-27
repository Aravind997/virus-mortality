#include <iostream>

using namespace std;


class Virus
{
public:
virtual void display_mortality()=0;
    
};


class Covid:public Virus
{
public:void display_mortality()
  {
    cout << "\n  4.5%" << endl;

  }
};
class HIV:public Virus
{
public:void display_mortality()
  {
    cout << "\n 2%" << endl;
  }

};

class Birdflue:public Virus
{
public:void display_mortality()
  {
    cout << "\n 0.2%" << endl;
  }
};

main ()
{


  char selection;

  Covid cov;

  HIV hi;

  Birdflue flu;

  Virus *vi[3];
  
  vi[1] = &cov;

  vi[2] = &hi;

  vi[3] = &flu;
  cout << "\n  A - Covid Virus";

  cout << "\n  B - HIV Virus";

  cout << "\n  C - BirdFlue Virus";

  cout << "\n  D - Exit";

  cout << "\n Enter selection: ";

  cin >> selection;

  switch (selection)

    {

    case 'A':
      {
	vi[1]->display_mortality ();
	break;
      };

    case 'B':
      {
	vi[2]->display_mortality ();
	break;
      };
    case 'C':
      {
	vi[3]->display_mortality ();
	break;
      }
    case 'D':
      {
	cout << "\n To exit the menu";
	break;
      }

    default:
      cout << "\n  Invalid selection";


    }

  cout << "\n";

}

