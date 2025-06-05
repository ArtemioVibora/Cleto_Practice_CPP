#include <iostream>
#include <ctime>

using namespace std;

class Time
{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time() : hours(1), minutes(1), seconds(1) {}
        Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
        
        void enterDetails()
        {
            cout << "Hours: ";
            while(!(cin >> hours) || hours < 1 || hours > 24)
            {
                cin.clear();
                cin.ignore(80, '\n');
                cout << "Hours: ";
            }
            cout << "Minutes: ";
            while(!(cin >> minutes) || minutes < 0 || minutes > 60)
            {
                cin.clear();
                cin.ignore(80, '\n');
                cout << "Minutes: ";
            }
            cout << "Seconds: ";
            while(!(cin >> seconds) || seconds < 0 || seconds > 60)
            {
                cin.clear();
                cin.ignore(80, '\n');
                cout << "Seconds: ";
            }
        }

        void displayDetails()
        {
            cout << hours << " hours, " << minutes << " minutes, " << "and " << seconds << " seconds."
               << endl; 
            string period = "am";
            // string strMinutes;
            //cout << "Hours: " << hours << endl;
            //cout << "Minutes: " << minutes << endl;
            //cout << "Seconds: " << seconds << endl;
            
            //Hours logic
            if (hours >= 12)
            {
                period = "pm";
                if (hours > 12)
                {
                    hours -= 12;
                }
            }
            if (hours == 0)
            {
                hours = 12;
            }
            
            //Minutes Logic
            if (minutes >= 59)
            {
                hours += 1;
                if (hours >= 12)
                {
                    period = "pm";
                }
                minutes = 0;
            }
            
            if (minutes < 10)
            {
                cout << "The time is " << hours << ":0" << minutes << " " << period << "." << endl;
            }
            else
            {
                cout << "The time is " << hours << ":" << minutes << " " << period << "." << endl;
            }
            
        }
            
};


int main()
{
    Time t1(17, 59, 31), t2;
    
    t2.enterDetails();
    cout << endl;
    cout << "The first time is ";
    t1.displayDetails();
    cout << "The second time is ";
    t2.displayDetails();

}


