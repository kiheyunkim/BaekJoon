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
	for (int i = 1; i < n + 1; ++i)		//�ڽ��� ����Ű���� ��
	{
		parent[i] = i;
		rank[i] = 1;
	}
}

int FindParent(int x)					//�ֻ��� ��Ʈ�� ã�� 
{
	return parent[x] == x ? x : FindParent(parent[x]);
}

void Merge(int x, int y)	//x�� ���� ���հ� y�� ���� ������ ��ħ
{

	int rootX = FindParent(x), rootY = FindParent(y);
	if (rootX == rootY) return;		//�̹� �θ� ������  ���� �����̹Ƿ� ���� �ʿ�� �����ϱ�.
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

	//����� ���� ���ؼ� Union�� ������ �ش�. 
	//��� �������� ���ؼ� �������ش�.
	//������ ����� �κ��� ���� ���̱� ����.
	for (int i = 1; i <= n; ++i)
	{
		if (visited[i])		//�̹� �湮������ �ٽ� 
			continue;		//�鸱 �ʿ���� (�̹� Union��)

		if (graph[i].size() == 0)		//�� ���� ����
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