    #include <iostream>
    #include <vector>
    #include <unordered_set>
    #include <fstream>
    #include <chrono> 
    using namespace std;
    using namespace chrono;

    void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     };

     
    int main() {
        fast_io();

        // Start measuring time
        auto start = high_resolution_clock::now();

        // Open input and output files
        ifstream infile("input.txt");
        ofstream outfile("output.txt");

      if (!infile) {
        cerr << "Error opening input file!" << endl;
        return 1;
       };

      if (!outfile) {
        cerr << "Error opening output file!" << endl;
        return 1;
       };

        long long c ;
        infile >> c;
    while(c--){
        long long n ;
        infile >> n;
        vector<long long> arra(n), arrb(n);
        
        for (long long &x : arra) infile >> x;
        for (long long &x : arrb) infile >> x;
     
        
        long long last = 1;
       long long m;
        infile >> m;
        vector<long long> arrc(m);
        
       for (long long &x : arrc) infile >> x;

         long long mismatch_count = 0, match_count = 0;
         bool valid = true;
         
         for (long long i = 0; i < n; i++)
         {
            if(arra[i] != arrb[i])
            {    mismatch_count++;
                for (long long j = 0; j < m; j++)
                {
                    if(arrb[i] == arrc[j])
                    {
                        arrc[j] = 0;
                        valid = true;
                       match_count++;
                        break;
     
     
     
                    }
                    else{
                        valid = false;
                        
     
                    }
     
                    
     
     
                }
            }
     
           
     
         }
     
         for (long long i = 0; i< n ; i++){
            if(arrb[i]==arrc[m-1]){
                last = 0;
                break;
     
     
            }
         }
     
         if( valid && arrc[m-1]==0 && mismatch_count == match_count){
            outfile<<"Yes"<<endl;
            
         }
     
         
     
         else if(valid && last == 0 && mismatch_count == match_count){
             outfile<<"Yes"<<endl;
             
     
         }
     
         else{
                outfile<<"NO"<<endl;
                
         }
     
     
     
     
     
        
    }
    infile.close();
    outfile.close();

    // Stop measuring time
    auto stop = high_resolution_clock::now();

    // Calculate the duration
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Execution time: " << duration.count() << " ms" << endl;
     
     
     return 0;
    }