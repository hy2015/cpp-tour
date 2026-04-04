#include <iostream>

using namespace std;

class CPU
{
public:
	virtual void caculate() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};

class GraphicsCard
{
public:
	virtual void display() = 0;
};

class Computer
{
public:

	Computer(CPU* cpu, Memory* mem, GraphicsCard* grac)
	{
		m_cpu = cpu;
		m_mem = mem;
		m_grac = grac;
	}

	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}

		if (m_grac != NULL)
		{
			delete m_grac;
			m_grac = NULL;
		}
	}

	void work()
	{
		m_cpu->caculate();
		m_mem->storage();
		m_grac->display();
	}

private:
	CPU* m_cpu;
	Memory* m_mem;
	GraphicsCard* m_grac;
};

class IntelCPU : public CPU
{
public:
	void caculate()
	{
		cout << "Intel's CPU is caculating." << endl;
	}
};

class IntelMemory : public Memory
{
public:
	void storage()
	{
		cout << "Intel's Memory is storaging." << endl;
	}
};

class IntelGraphicsCard : public GraphicsCard
{
public:
	void display()
	{
		cout << "Intel's GraphicsCard is displaying." << endl;
	}
};

class LenovoCPU : public CPU
{
public:
	void caculate()
	{
		cout << "Lenovo's CPU is caculating." << endl;
	}
};

class LenovoMemory : public Memory
{
public:
	void storage()
	{
		cout << "Lenovo's Memory is storaging." << endl;
	}
};

class LenovoGraphicsCard : public GraphicsCard
{
public:
	void display()
	{
		cout << "Lenovo's GraphicsCard is displaying." << endl;
	}
};

void test06()
{
	CPU* intelCPU = new IntelCPU;
	Memory* intelMem = new IntelMemory;
	GraphicsCard* intelGrac = new IntelGraphicsCard;

	Computer* com1 = new Computer(intelCPU, intelMem, intelGrac);

	com1->work();
	delete com1;

	CPU* lenovoCPU = new LenovoCPU;
	Memory* lenovoMem = new LenovoMemory;
	GraphicsCard* lenovoGrac = new LenovoGraphicsCard;

	Computer* com2 = new Computer(lenovoCPU, lenovoMem, lenovoGrac);

	com2->work();
	delete com2;
}

int main()
{
	test06();
	return 0;
}