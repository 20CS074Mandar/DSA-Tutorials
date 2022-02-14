#include "iostream"
#include "vector"
#include "stdlib.h" // used for exit(0)

using namespace std;

class StackUsingVectorSTL
{
public:
        vector<int> pushToStack(vector<int>);
        vector<int> popFromStack(vector<int>);
        void displayStack(vector<int>);
};

vector<int> StackUsingVectorSTL ::pushToStack(vector<int> vt)
{

        int element;
        cout << "\n Enter element: ";
        cin >> element;
        vt.push_back(element); // Add element
        cout << "\nElement added to stack\n";
        return vt;
}

vector<int> StackUsingVectorSTL ::popFromStack(vector<int> vt)
{
        vector<int>::reverse_iterator it = vt.rbegin();
        if (vt.empty())
        {
                cout << "\nSorry. Stack is empty";
        }
        else
        {
                cout << "\nElement " << *it << " is poped from stack";
                vt.pop_back();
        }
        return vt;
}
void StackUsingVectorSTL ::displayStack(vector<int> vt)
{
        cout << "\nDisplaying Stack: \n";
        vector<int>::reverse_iterator it = vt.rbegin();
        if (vt.empty())
        {
                cout << "\nSorry. Stack is empty";
        }
        else
        {
                cout << "\nDisplaying stack: \n";

                for (; it != vt.rend(); ++it)
                {
                        cout << *it << "\t";
                }
        }
}

int main()
{
        StackUsingVectorSTL ob;
        int choice;
        char che;
        int top;
        vector<int> vt;
        do
        {
                cout << "\n\t\t Stack Using Vector in STL\n";
                cout << "\n1: Push to Stack";
                cout << "\n2: Pop from Stack";
                cout << "\n3: Display Stack";
                cout << "\n4: Exit";
                cout << "\n Enter your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                        vt = ob.pushToStack(vt);
                        break;

                case 2:
                        vt = ob.popFromStack(vt);
                        break;

                case 3:
                        ob.displayStack(vt);
                        break;

                case 4:
                        exit(0);
                        break;

                default:
                        cout << "\nInvalid choice. Try again";
                        break;
                }
                cout << "\nDo you wish to continue [y/n]: ";
                cin >> che;
        } while (che == 'y' || che == 'Y');
        return 0;
}
