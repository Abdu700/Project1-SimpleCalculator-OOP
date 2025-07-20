#include <iostream>

using namespace std;

class clsCalculator {

private:
	
	float _Result = 0;
	float _LastNumber = 0;
	string _LastOperation = "Clear";
	float _PreviousResult = 0;

	
public:

	void Add(float Number) {
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Adding ";
		_Result += Number;
	}

	void Subtract(float Number) {
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Subtracting ";
		_Result -= Number;
	}

	void Divide(float Number) {
		if (Number == 0){
			Number = 1;
		}
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Dividing ";
		_Result /= Number;
	}

	void Multiply(float Number) {
		_LastNumber = Number;
		_PreviousResult = _Result;
		_LastOperation = "Multiplying ";
		_Result *= Number;
	}

	void Clear() {
		_LastNumber = 0;
		_PreviousResult = 0;
		_Result = 0;
		_LastOperation = "Clear ";
		
	}

	void CancelLastOperation() {
		_Result = _PreviousResult;
		_LastOperation = "Cancelling Last Operation ";
		_LastNumber = 0;
	}

	float GetFinalResult() {
		return _Result;
	}

	void PrintResult() {
		cout << "Result After " << _LastOperation << _LastNumber << " is: " << _Result << endl;
	}

};

int main()
{
	clsCalculator Calculator1;

	Calculator1.Clear();

	Calculator1.Add(20);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(70);
	Calculator1.PrintResult();

	Calculator1.Multiply(4);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	system("pause>0");
	return 0;

}

