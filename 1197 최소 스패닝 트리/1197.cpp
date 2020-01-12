#include <iostream>
#include <queue>
#include <vector>

struct Edge
{
	int from;
	int to;
	int gravity;
};

struct Compare
{
	bool operator()(const Edge& left, const Edge& right)
	{
		return left.gravity >right.gravity;
	}
};

int parents[10000 + 1];
int rank[10000 + 1];

void InitUnion()
{
	for (int i = 0; i < 10000 + 1; ++i)
	{
		parents[i] = i;
		rank[i] = 1;
	}
}

int FindParent(int n)
{
	return parents[n] == n ? n : FindParent(parents[n]);
}

bool Merge(int a, int b)
{
	int rootA = FindParent(a), rootB = FindParent(b);

	if (rootA == rootB) return false;

	if (rank[rootA] < rank[rootB])
		parents[rootA] = rootB;
	else if (rank[rootA] == rank[rootB])
	{
		parents[rootA] = rootB;
		++rank[rootB];
	}
	else
		parents[rootB] = rootA;

	return true;
}

int main(int argc, char* argv[])
{
	InitUnion();
	std::priority_queue<Edge, std::vector<Edge>, Compare> queue;

	int v, e;
	std::cin >> v >> e;
	for (int i = 0; i < e; ++i)
	{
		int a, b, c;
		Edge e;
		std::cin >> a >> b >> c;
		e.from = a;
		e.to = b;
		e.gravity = c;
		queue.push(e);
	}

	int answer = queue.top().gravity;
	Merge(queue.top().from, queue.top().to);
	int selected = 2;
	queue.pop();


	while (selected != v)
	{
		if (!Merge(queue.top().from, queue.top().to))
		{
			queue.pop();
			continue;
		}

		answer += queue.top().gravity;
		queue.pop();
		++selected;
	}

	std::cout << answer << "\n";


	return 0;
}
