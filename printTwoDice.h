/*

Description: Generates two random dice rolls using second since 1970 as the seed. 
Author: Olivia Clarke-Edwards

*/

int printTwoDice() {
  cout << "Here are two random dice rolls." << endl;

  const short min_value = 1;
  const short max_value = 6;

   srand(time(nullptr));
   int first_dice = (rand() % (max_value - min_value + 1)) + min_value;
   int second_dice = (rand() % (max_value - min_value + 1)) + min_value;

   cout << "Die 1: " << first_dice << endl;
   cout << "Die 2: " << second_dice << endl;

   return 0;
}