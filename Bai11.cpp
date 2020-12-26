#include<bits/stdc++.h>
using namespace std;

int rotOrange(vector<vector<int>> matrix)
{
    queue <int> x, y;
  	int now = 0; //So cam hong hien tai
	int next = 0; //So cam hong ke tiep
	int pas = 0; //Thoi gian cam bi hong
	int res = 0; //So cam tuoi con lai
    
    for (int  i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if(matrix[i][j] == 2)
            {
                x.push(i);
                y.push(j);
                now++; //Tang so cam hong
                matrix[i][j] = 0;
            }
            else if (matrix[i][j] == 1)
            	res++; //Tang so cam tuoi
    	}
	}
	
    while (!x.empty())
    {
        now--; //Giam so cam hong
        int o[] = {0, 1, 0, -1};
        int p[] = {1, 0, -1, 0};
        for (int d = 0; d < 4; d++)
        {
            if(x.front() + o[d] >= 0 && x.front() + o[d] < matrix.size() 
			    && y.front() + p[d] >= 0 && y.front() + p[d] < matrix[1].size() 
				&& matrix[x.front() + o[d]][y.front() + p[d]] == 1 )
            {
                matrix[x.front() + o[d]][y.front() + p[d]] = 0;
                x.push(x.front() + o[d]);
                y.push(y.front() + p[d]);
                //matrix[x.front() + o[d]][y.front() + p[d]]= 0;
                res--;  //Giam so cam tuoi con lai
                next++; //Tang so cam hong ke tiep
            }
        }
        if(now == 0 && next > 0)
        {
            now = next;
            next = 0;
            pas++; 		//Tang thoi gian cam bi hong
        }
        x.pop();
        y.pop();
        
    }
    if (res == 0){
        return pas;
    } else {
        return -1; //So cam tuoi con lai lon hon 0
    } 
}

int main()
{
	vector<vector<int>> a = {{2, 1, 0, 2, 1},
					 		 {1, 0, 1, 2, 1},
					 		 {1, 0, 0, 2, 1}};
	int rotO = rotOrange(a);
	cout<<"Ket qua la: "<<rotO<<endl;
    	
	return 0;
}

