#include "trigger.h"
#include <time.h>
#include<mutex>
#include <assert.h>
using namespace std;
mutex m;
mutex z;

trigger::trigger()
{
	
	
}
void trigger::setSR(string s, string r)
{
	srand(time(0));
	inputS.push_back('1');
	inputR.push_back('1');
	setVarS(0);
	setVarR(0);
	outputQ.push_back(Q=rand() % 2 + 48);
	output_Q.push_back(_Q=rand() % 2 + 48);
	

	for (auto c : s)
		inputS.push_back(c);
	for (auto c : r)
	{
		inputR.push_back(c);
	}
	size = inputR.size();
}
void trigger::setSimpleResult()
{
	vector<char> tempToPushS;
	vector<char> tempToPushR;
	vector<char> tempToPushQ;
	vector<char> tempToPush_Q;
	for (int i = 0; i < 3; i++) {
		tempToPushQ.push_back('*');
		tempToPush_Q.push_back('*');
	}
	for (int i = 0; i < size; i++) {
	tempToPushS.push_back(inputS[i]);
	tempToPushR.push_back(inputR[i]);
	tempToPushQ.push_back(outputQ[i+3]);
	tempToPush_Q.push_back(output_Q[i+3]);
	}
	values.push_back(tempToPushS);
	values.push_back(tempToPushR);
	values.push_back(tempToPushQ);
	values.push_back(tempToPush_Q);
}
void trigger::setThreadResult()
{
	vector<char> tempToPushS;
	vector<char> tempToPushR;
	vector<char> tempToPushQ;
	vector<char> tempToPush_Q;
	for (int i = 0; i < size; i++) {
		tempToPushS.push_back(inputS[i]);
		tempToPushR.push_back(inputR[i]);
	}
	for (int i = 0; i < outputQ.size(); i++) {
		tempToPushQ.push_back(outputQ[i]);
		tempToPush_Q.push_back(output_Q[i]);
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
	if (_Q == '0' && varR == '1')
		return '0';
	if (_Q == '1' && varR == '0')
		return '0';
	if (_Q == '1' && varR == '1')
		return '0';
	if (_Q == '0' && varR == '0')
		return '1';
}
char trigger::count_Q()
{
	lock_guard<mutex> ls(m);
	if (varS == '0' && Q == '1')
		return '0';
	if (varS == '1' && Q == '0')
		return '0';
	if (varS == '1' && Q == '1')
		return '0';
	if (varS == '0' && Q == '0')
		return '1';
}
void trigger::simpleCount() 
{
	for (int i = 1; i < 3; i++) {
		outputQ.push_back(Q=rand() % 2 + 48);
		output_Q.push_back(_Q=rand() % 2 + 48);
	}
	for (int i = 0; i < size; i++) {
		setVarS(i);
		setVarR(i);
		outputQ.push_back(Q = countQ());
		output_Q.push_back(_Q = count_Q());
	}
	
}
void trigger::threadCount()
{
	thread values([this]() {
		this_thread::sleep_for(0.2s);
		for (int i = 1;i < size; i++)
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
				outputQ.push_back(Q=countQ());
				this_thread::sleep_for(0.3s);});
			thread _Q([this]() {
				output_Q.push_back(_Q=count_Q());
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