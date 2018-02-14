//Fernando Rosa
//This program will calculate senior citizens property taxes

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	double propertyValue, propertyTax, propertyAssessment, 
		assessedValue, quarterlyTax, taxableValue, assessedTax;
	string name;
	
	cout << "Fernando Rosa\n\n";

	cout << "Enter the actual value of the property: ";
	cin >> propertyValue;
	cin.ignore();

	cout << "Enter the taxpayer's name: ";
	getline(cin, name);

	cout << "Enter the tax rate for each $100 of assessed value: ";
	cin >> assessedTax;

	propertyAssessment = propertyValue * 0.60;

	taxableValue = propertyAssessment - 5000;
	propertyTax = (taxableValue / 100) * assessedTax;

	quarterlyTax = propertyTax / 4;
	
	cout << setprecision(2) << fixed;
	cout << "\nFor taxpayer " << name << " the tax information is:\n";
	cout << "Property Value:\t\t$" << setw(10) << propertyValue << endl;
	cout << "Assessment Value:\t$" << setw(10) << propertyAssessment << endl;
	cout << "Taxable Value:\t\t$" << setw(10) << taxableValue << endl;
	cout << "Annual Property Tax:\t$" << setw(10) << propertyTax << endl;
	cout << "Quarterly Property Tax:\t$" << setw(10) << quarterlyTax << endl;

	system("pause");
	return 0;
}

/***************************************************************
Fernando Rosa

Enter the actual value of the property: 235111.00
Enter the taxpayer's name: Mary Ann Mack
Enter the tax rate for each $100 of assessed value: 5.79

For taxpayer Mary Ann Mack the tax information is:
Property Value:         $ 235111.00
Assessment Value:       $ 141066.60
Taxable Value:          $ 136066.60
Annual Property Tax:    $   7878.26
Quarterly Property Tax: $   1969.56
Press any key to continue . . .

**************************************************************
Fernando Rosa

Enter the actual value of the property: 10000.00
Enter the taxpayer's name: Mark Rast
Enter the tax rate for each $100 of assessed value: 2.02

For taxpayer Mark Rast the tax information is:
Property Value:         $  10000.00
Assessment Value:       $   6000.00
Taxable Value:          $   1000.00
Annual Property Tax:    $     20.20
Quarterly Property Tax: $      5.05
Press any key to continue . . .

***************************************************************/