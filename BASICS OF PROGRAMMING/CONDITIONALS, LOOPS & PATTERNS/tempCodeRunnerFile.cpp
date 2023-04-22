    no. of rows =n;
    int n,row,col;
    cin>>n;
    cout<<endl;
    for(row=0; row<n; row++){
        for(col=0; col<n-row; col++){
            cout<<col+1 ;
        }
        cout<<endl;
    }