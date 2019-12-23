#include <iostream>
#include <cstring>
#include <queue>
#include <vector>

int n, m;
int parent[200 + 1];
int rank[200 + 1];

std::vector<std::vector<int>> graph(200 + 1);
int visited[200 + 1];

void UnionFindInit()
{
	for (int i = 1; i < n + 1; ++i)		//자신을 가르키도록 함
	{
		parent[i] = i;
		rank[i] = 1;
	}
}

int FindParent(int x)					//최상위 루트를 찾음 
{
	return parent[x] == x ? x : FindParent(parent[x]);
}

void Merge(int x, int y)	//x과 속한 집합과 y가 속한 집합을 합침
{

	int rootX = FindParent(x), rootY = FindParent(y);
	if (rootX == rootY) return;		//이미 부모가 같으면  같은 집합이므로 넣을 필요는 없으니까.
	int heightX = rank[rootX], heightY = rank[rootY];

	if (heightX < heightY)
		parent[rootX] = rootY;
	else if (heightX == heightY)
	{
		parent[rootX] = rootY;
		++rank[rootY];
	}
	else
		parent[rootY] = rootX;
}

int main(int argc, char* argv[])
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::cin >> n;
	std::cin >> m;

	memset(visited, 0, sizeof(visited));
	UnionFindInit();

	int input;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
		{
			std::cin >> input;
			if (input == 1)
				graph[i].push_back(j);
		}

	//연결된 길을 통해서 Union을 제작해 준다. 
	//모든 시작점에 대해서 조사해준다.
	//끊어진 연결된 부분이 있을 것이기 때문.
	for (int i = 1; i <= n; ++i)
	{
		if (visited[i])		//이미 방문했으면 다시 
			continue;		//들릴 필요없음 (이미 Union됨)

		if (graph[i].size() == 0)		//갈 길이 없음
			continue;


		std::queue<int> bfs;
		bfs.push(i);
		visited[i] = true;
		
		while (!bfs.empty())
		{
			int front = bfs.front();

			Merge(i, front);

			for (int j = 0; j < graph[front].size(); ++j)
			{
				if (!visited[graph[front][j]])
				{
					visited[graph[front][j]] = true;
					bfs.push(graph[front][j]);
				}
			}

			bfs.pop();
		}
	}


	
	int root = -1;
	bool isOk = true;
	for (int i = 0; i < m; ++i)
	{
		int plan;
		std::cin >> plan;

		if (root == -1)
			root = FindParent(plan);
		else if (root != FindParent(plan))
		{
			isOk = false;
			break;
		}
	}

	std::cout << (isOk ? "YES" : "NO") << "\n";



	return 0;
}