    #include<iostream>
    using namespace std;
    int main()
    {
        int n,m;
        cin>>n>>m;
        int **arr = new int*[n];
        int **ans = new int*[n];
        for(int i=0;i<n;i++)
        {
            ans[i] = new int[m];
            arr[i] = new int[m];
        }
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                ans[i][j]=0;
            }
        }
    
        bool tmp=false; //right
        for(int i=0;i<n;i++)
        {tmp=false;
            for(int j=m-1;j>=0;j--)
            {
                if(arr[i][j]==1)
                    tmp=true;
                else if(tmp)
                    ans[i][j]++;
            }
        }
    
    
        tmp = false;
        //left
        for(int i=0;i<n;i++)
        {tmp=false;
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                    tmp=true;
                else if(tmp)
                    ans[i][j]++;
            }
        }
    
        //up
        tmp=false;
        for(int i=0;i<m;i++)
        {tmp=false;
            for(int j=0;j<n;j++)
            {
                if(arr[j][i]==1)
                    tmp=true;
                else if(tmp)
                    ans[j][i]++;
            }
        }
    
        //down
        tmp=false;
        for(int i=0;i<m;i++)
        {tmp=false;
            for(int j=n-1;j>=0;j--)
            {
                if(arr[j][i]==1)
                    tmp=true;
                else if(tmp)
                    ans[j][i]++;
            }
        }
    
        int sum=0;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                sum+=ans[i][j];
    
        cout<<sum<<endl;
    
    
        return 0;
    }
