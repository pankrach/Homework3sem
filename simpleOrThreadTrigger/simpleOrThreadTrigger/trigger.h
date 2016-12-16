#include <vector>
#include<thread>
#include<memory.h>
#include <atomic>
using namespace std;
class trigger
{
public:
	trigger();
	~trigger();
	void setSR(string, string);
	void threadCount();
	void simpleCount();
	void setSimpleResult();
	void setThreadResult();
	void setVarS(int);
	void setVarR(int);
	char countQ();
	char count_Q();
	atomic<char> varS;
	atomic<char> varR;
	atomic<char> Q;
	atomic<char> _Q;
	int size;
	bool finished = false;
	vector<char> SRQ = {'S', 'R', 'Q', '_'};
	vector<vector<char>> values;
	string inputS;
	string inputR;
	string outputQ;
	string output_Q;
};

