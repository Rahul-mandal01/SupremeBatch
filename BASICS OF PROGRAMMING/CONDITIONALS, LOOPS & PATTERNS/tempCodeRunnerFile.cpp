    int m;
    int row,col;
    cin>>m;
    for(row=0; row<m; row++){
        for(col=0; col<row; col++){
            cout<<"  ";
    }
        for(col=0; col<m-row; col++){
            cout<<" *  ";
        }

    cout<<endl;
    }