#include <iostream>
using namespace std;

#define MAX 10 //This simply defines the maximum value of the array for the STACK. 

class Stack {
    int stack;

public:
    int a[MAX]; //Maximum size of Stack

    Stack() { stack = -1; } //Definition of the stack alongside the declaration of the top of the stack, the -1 ensures the array's value is set to -1 by default, as usually 0 is the first value within an array.
    bool push(int x); 
    int pop();
    int top();
    bool isEmpty(); 
    void ToString();
    int size();
}; // The rest of the declarations are for the appropriate functions that can be performed during the stacks runtime.

bool Stack::push(int x) //The PUSH function places a value into the STACK, it will first check whether the stack is full and return a statement if so. If not, it will simply place the value into the stack.
{
    if (stack >= (MAX - 1)) {
        cout << "Stack Overflow\n";
        return false;
    }
    else {
        a[++stack] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop() //The POP function removes values from the STACK, it will check whether there is a value in the stack and then POP accordingly. Otherwise it will kickback and tell you there is no values to be removed.
{
    if (stack < 0) {
        cout << "Stack Underflow\n";
        return 0;
    }
    else {
        int x = a[stack--];
        cout << x << " has been popped from the stack\n";
        return x;
    }
}
int Stack::top() //The TOP function displays the value that is currently at the top of the stack. If a value has been inputted it will display the most recent inputted value.
{
    if (stack < 0) {
        cout << "Stack is Empty\n";
        return 0;
    }
    else {
        int x = a[stack];
        cout << x << " is at the top of the stack\n";
        return x;
    }
}

bool Stack::isEmpty() //This function simply displays whether or not the STACK is empty. It uses an IF statement to check if the STACK TOP is LESS THAN 0, if so it'll say its empty.
{
    if (stack < 0)
    {
        cout << "Stack is Empty\n";
        return 0;
    }
    else
    {
        cout << "Stack is NOT Empty\n";
        return 0;
    }

}
 
void Stack::ToString() //The String Conversion turns the array into a string. This will allow the full amount of elements to be displayed all at once. It does this by reading through the array from the top using a FOR STATEMENT, it will then input each value into the string.
{

    if (stack == -1)
    {
        cout << "Nothing to display" << "\n\n";
        return;
    }

    cout << "The numbers in the stack are: " << "\n";

    for (int i = 0; i <= stack; i++)
    {
        char string = a[i];
        cout << a[i] << " \n";
    }
}

int Stack::size() //The SIZE function simply displays the amount of elements within the current stack. This is done with a print function, the +1 is because I previously used -1. If no elements were inputted into the ARRAY then it will simply display -1 which is inaccurate.
{  
    cout << "The stack size is " << stack + 1 << "\n";
    return 0;
}

int main() //This is the main seciton of the program. It is essentially the main menu for the stack. Here you will be given the option to pick the several functions discussed above. It uses a CASE statement to interpret the given user inputs. 
{
    int i;
    int menu;
    class Stack s;

    do 
    {
        cout << "Menu:\n 1. Push\n 2. Pop\n 3. Top\n 4. Size\n 5. ToString\n 6. IsEmpty\n";
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "Enter a value: ";
            cin >> i;
            s.push(i);
            break;
        
        case 2:
            s.pop();
            break;

        case 3:
            s.top();
            break;

        case 4:
            s.size();
            break;

        case 5:
            s.ToString();
            break;

        case 6:
            s.isEmpty();
            break;
        }
    }

    while (menu != 7);
    return 0;

}