#include <iostream>
#include <vector>

using namespace std;
class RunningAverage
{
	private:
		vector<int> input;
	public:
		int calcRunningAverage(int avgLimit);
		void insertItem(int value)
		{
			input.push_back(value);
		}
	
};


int RunningAverage::calcRunningAverage(int avgLimit)
{
	int average =0;
	int limit = avgLimit;
	for (vector<int>::reverse_iterator it = input.rbegin(); it != input.rend(); ++it)
	{
		if(limit > 0)
		{
			average += *it;
			limit --;
		}
		else
		{
			break;
		}
	}
	return (average/avgLimit);
}

int main()
{
	RunningAverage avg;
	int runningAverage = 0;
	avg.insertItem(2);
	avg.insertItem(3);
	avg.insertItem(4);	
	cout << "RunningAverage: " << avg.calcRunningAverage(3) << endl; //output 3
	avg.insertItem(5);
	cout << "RunningAverage: " << avg.calcRunningAverage(3) << endl;	//output 4
}