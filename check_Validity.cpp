void check_Validity::Check(double &x){
			while (!(cin >> x))
           {
	             cout << "Invalid input. Please enter correct numbers.\n";
	
	            // Clear the fail state and ignore the invalid input in the buffer
			        cin.clear();
			        cin.ignore();
            }
		}
void check_Validity::Check(double &x,double &y)
{
	while (!(cin >> x>>y))
    {
	    cout << "Invalid input. Please enter correct numbers.\n";
	
	            // Clear the fail state and ignore the invalid input in the buffer
		 cin.clear();
	     cin.ignore();
    }
}
