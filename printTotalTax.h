/*

Description: Takes a sales figure, and two tax rates as input. Prints tax total. 
Author: Olivia Clarke-Edwards

*/

int printTotalTax() {
cout << "Calculate your tax.";
cout << endl << endl;

  double sales = 0;
  cout << "Enter your total sales: ";
  cin >> sales;
  cout << endl;
  cout << "Total sales: $" << sales << endl;


  double state_tax_rate = 0;
  cout << "Enter your state tax rate (as a percentage): ";
  cin >> state_tax_rate;
  double state_tax = sales * (state_tax_rate / 100.0);
  cout << "State tax: $" << state_tax << endl;


  double region_tax_rate = 0;
  cout << "Enter your regional tax rate (as a percentage): ";
  cin >> region_tax_rate;
  double region_tax = sales * (region_tax_rate / 100.0);
  cout << "Regional tax: $" << region_tax << endl;

  double total_tax = state_tax + region_tax;


  cout << "Total tax: $" <<  total_tax << endl << endl;
  return 0;
}