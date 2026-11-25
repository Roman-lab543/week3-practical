#include <iostream>
using namespace std;
int main() {

int age;
bool hasTicket;
bool isMember;
bool isBanned;
bool hasParent;   // NEW
cout << "Enter age: ";
cin >> age;
cout << "Do you have a ticket? (1 for yes, 0 for no): ";
cin >> hasTicket;
cout << "Are you a member? (1 for yes, 0 for no): ";
cin >> isMember;
cout << "Are you banned? (1 for yes, 0 for no): ";
cin >> isBanned;
cout << "Do you have a parent with you? (1 for yes, 0 for no): ";   // NEW
cin >> hasParent;   // NEW
// Eligible if: age >= 18 AND has ticket AND NOT banned
// OR: is a member AND NOT banned
// NEW RULE: if age < 16, a parent is also required


bool canEnter = ((age >= 18 && hasTicket && !isBanned) ||
(isMember && !isBanned)) && (age >= 16 || hasParent);   // NEW

if (canEnter) {
cout << "You can enter the event!" << endl;
} else {
cout << "Sorry, you cannot enter." << endl;
}
return 0;

}