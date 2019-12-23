#include <iostream>
#include <cstring>

int n, m;
int parent[1000000 + 1];
int rank[1000000 + 1];
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

	std::cin >> n >> m;
	UnionFindInit();

	for (int i = 0; i < m; ++i)
	{
		int a, b, c;
		std::cin >> a >> b >> c;

		if (a == 0)
			Merge(b, c);
		else if (a == 1)
			std::cout << (FindParent(b) == FindParent(c) ? "YES" : "NO") << "\n";
	}

	return 0;
}