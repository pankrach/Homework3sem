#include "trigger.h"
#include <time.h>
#include<mutex>
#include <assert.h>
using namespace std;
mutex m;
mutex z;



trigger::trigger()
{
	Q = 0;
	_Q = 1;
}
void trigger::setSR(string s, string r)
{
	srand(time(0));
	inputS.push_back(rand() % 2 + 48);
	inputR.push_back(rand() % 2 + 48);
	setVarS(0);
	setVarR(0);
	if (inputS[0] == 0 && inputR[0] == 0)
	{
		outputQ.push_back(rand() % 2 + 48);
		output_Q.push_back(rand() % 2 + 48);
	}
	else
	{
		outputQ.push_back(countQ());
		output_Q.push_back(count_Q());

	}
	for (auto c : s)
		inputS.push_back(c);
	for (auto c : r)
	{
		inputR.push_back(c);
	}
	size = inputR.size();
}
void trigger::setResult()
{
	vector<char> tempToPushS;
	vector<char> tempToPushR;
	vector<char> tempToPushQ;
	vector<char> tempToPush_Q;
	tempToPushS.push_back(inputS[0]);
	tempToPushR.push_back(inputR[0]);
	tempToPushQ.push_back(outputQ[0]);
	tempToPush_Q.push_back(output_Q[0]);
	for (int i = 1; i < size; i++) {
		tempToPushS.push_back(inputS[i]);
		tempToPushR.push_back(inputR[i]);

		if ((inputS[i] == '0') && (inputR[i] == '0')) {
			tempToPushQ.push_back(tempToPushQ[i - 1]);
			tempToPush_Q.push_back(tempToPush_Q[i - 1]);
		}
		if ((inputS[i] == '0') && (inputR[i] == '1')) {
			tempToPushQ.push_back('0');
			tempToPush_Q.push_back('1');
		}
		if ((inputS[i] == '1') && (inputR[i] == '0')) {
			tempToPushQ.push_back('1');
			tempToPush_Q.push_back('0');
		}
		if ((inputS[i] == '1') && (inputR[i] == '1')) {
			tempToPushQ.push_back('0');
			tempToPush_Q.push_back('0');
		}
		
	}
	values.push_back(tempToPushS);
	values.push_back(tempToPushR);
	values.push_back(tempToPushQ);
	values.push_back(tempToPush_Q);
}
void trigger::setVarS(int i)
{
	lock_guard<mutex> ls(m);
	varS = inputS[i];

}
void trigger::setVarR(int i)
{
	lock_guard<mutex> ls(m);
	varR = inputR[i];
}
char trigger::countQ()
{
	lock_guard<mutex> ls(m);
	if (varS == '0' && varR == '1')
		return '0';
	if (varS == '1' && varR == '0')
		return '1';
	if (varS == '1' && varR == '1')
		return '0';
	if (varS == '0' && varR == '0')
		return Q;
}
char trigger::count_Q()
{
	lock_guard<mutex> ls(m);
	if (varS == '0' && varR == '1')
		return '1';
	if (varS == '1' && varR == '0')
		return '0';
	if (varS == '1' && varR == '1')
		return '0';
	if (varS == '0' && varR == '0')
		return _Q;
}
void trigger::simpleCount() 
{
	for (int i = 0; i < 2; i++) {
		outputQ.push_back(rand() % 2 + 48);
		output_Q.push_back(rand() % 2 + 48);
	}
	for (int i = 3; i < size; i++) {
		if ((inputS[i-3] == '0') && (inputR[i-3] == '0')) {
			outputQ.push_back(outputQ[i - 1]);
			output_Q.push_back(output_Q[i - 1]);
		}
		if ((inputS[i-3] == '0') && (inputR[i-3] == '1')) {
			outputQ.push_back('0');
			output_Q.push_back('1');
		}
		if ((inputS[i-3] == '1') && (inputR[i-3] == '0')) {
			outputQ.push_back('1');
			output_Q.push_back('0');
		}
		if ((inputS[i-3] == '1') && (inputR[i-3] == '1')) {
			outputQ.push_back('0');
			output_Q.push_back('0');
		}
	}
	
}
void trigger::threadCount()
{
	thread values([this]() {
		for (int i = 0;i < size; i++)
		{
			thread S([this, i]() {setVarS(i);this_thread::sleep_for(0.5s);});
			thread R([this, i]() {setVarR(i);this_thread::sleep_for(0.5s);});
			S.join();
			R.join();
		}
		finished = true;
	});
	thread results([this]() {
		while (!finished)
		{
			thread Q([this]() {
				outputQ.push_back(countQ());
				this_thread::sleep_for(0.3s);});
			thread _Q([this]() {
				output_Q.push_back(count_Q());
				this_thread::sleep_for(0.3s);});
			Q.join();
			_Q.join();
		}


	});
	values.join();
	results.join();

}
trigger::~trigger()
{
}